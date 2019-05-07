## Example - Virtual Function and backward compatibility
In previous example we have seen how CIB allows runtime polymorphism to work across component boundary. In this example we will see how CIB ensures ABI stability when virtual table is disrupted.

This example is next version of immediate previous one (i.e. *virtual-function*). The Library exports the same class but with additional virtual function. The new virtual function is added before the existing one. As you know such changes will require the client program to recompile with new headers. **But fortunately that is not true when CIB architecture is used for publishing SDK.**

Below I am showing the diff of new header with previous one.

```diff
--- 020-virtual-function/pub/example.h
+++ 030-virtual-function-and-bkwd-compatibility/pub/example.h
@@ -1,20 +1,21 @@
 #pragma once
 
 //! Example to see what cib does for classes with virtual methods.
 class A
 {
 public:
   A();
+  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
   //! This is to know what cib does with virtual functions.
   virtual int VirtFunc() { return 1; }
   virtual ~A() {}
 };
 
 class B : public A
 {
 public:
   B();
   int VirtFunc() override { return 15; }
 
   static B* Create() { return new B; }
 };

```

As it can be seen that only a new virtual method is added to an existing class. But the new virtual method is added before the existing one and that is the key change. If CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:

```diff
--- 020-virtual-function/src/example-client.cpp
+++ 030-virtual-function-and-bkwd-compatibility/src/example-client.cpp
@@ -1,20 +1,21 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 void PerformTest(A* pA)
 {
   CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
   CHECK(pA->A::VirtFunc() == 1);        // A regular call without use of virtual table.
+  CHECK(pA->AnotherVirtFunc() == 100);  // New function should be available to newer clients.
 }
 
 TEST_CASE("ABI stable virtual function call across component boundary")
 {
   // Test for object created by client on heap
   PerformTest(new B());
   // Test for object created by library
   PerformTest(B::Create());
   // Test for object created on stack
   B b;
   PerformTest(&b);
 }

```

There is no surprises that this new client will work with new library. But the old client, the client of previous example `virtual-function`, should continue working with new library without any change or recompilation. The automated test `030-virtual-function-and-bkwd-compatibility` ensures the client of `virtual-function` works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. In previous example we learnt how runtime polymorphism works across component boundary using MethodTable. Let's see the diff of MethodTable of new library:

```diff
--- ../020-virtual-function/cib/example.h.cpp
+++ cib/example.h.cpp
@@ -19,10 +19,13 @@
   return new __zz_cib_Delegatee(*__zz_cib_obj);
 }
 static ::A* __zz_cib_decl __zz_cib_new_1() {
   return new __zz_cib_Delegatee();
 }
+static int __zz_cib_decl AnotherVirtFunc_4(__zz_cib_Delegatee* __zz_cib_obj) {
+  return __zz_cib_obj->::A::AnotherVirtFunc();
+}
 static int __zz_cib_decl VirtFunc_2(__zz_cib_Delegatee* __zz_cib_obj) {
   return __zz_cib_obj->::A::VirtFunc();
 }
 static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
   delete __zz_cib_obj;
@@ -34,13 +37,14 @@
 const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_2),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc_4)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
   return &methodTable;
 }
 }}
 namespace __zz_cib_ { namespace B {
 namespace __zz_cib_Delegator {
@@ -58,10 +62,13 @@
   return __zz_cib_obj->::B::VirtFunc();
 }
 static ::B* __zz_cib_decl Create_4() {
   return ::B::Create();
 }
+static int __zz_cib_decl AnotherVirtFunc_7(__zz_cib_Delegatee* __zz_cib_obj) {
+  return __zz_cib_obj->::B::AnotherVirtFunc();
+}
 static ::A* __zz_cib_decl __zz_cib_cast_to___A_5(::B* __zz_cib_obj) {
   return __zz_cib_obj;
 }
 static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_6(::B** __zz_cib_obj) {
   static bool classIdRepoPopulated = false;
@@ -84,11 +91,12 @@
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_3),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Create_4),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___A_5),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_6)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_6),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc_7)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
   return &methodTable;
 }
 }}

```

As it can be seen that the new method caused a new entry in MethodTable and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the MethodTable precisely how they expect it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensure ABI stability we needed to run cib with additional parameter and supply ID file of previous example:

```sh
cib -i pub -o exp -b cib -m Example -c ../020-virtual-function/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

