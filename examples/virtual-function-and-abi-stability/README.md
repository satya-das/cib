## Example - Virtual Function and ABI Stability
In previous examples we have only tackled the cases that are very much expected from a C++ library/program. The way architecture is defined compiler independence is understood but ABI stability isn't demonstrated yet. Starting from this example we are going to experience the power of `CIB architecture`. So, please be ready for pleasant surprises. :)

This example is next version of immediate previous one (i.e. *Virtual function and runtime polymorphism*). The Library exports the same class but with additional virtual function. The new virtual function is added before the existing one. As you know that such changes will require the client program to recompile with new headers. **But fortunately that is not true when CIB architecture is used for publishing SDK.**

Below I am showing the diff of new header with previous one.

```diff
--- runtime-polymorphism/pub/example.h
+++ virtual-function-and-abi-stability/pub/example.h
@@ -1,20 +1,21 @@
 #pragma once
 
 //! Example to see what cib does for classes with virtual methods.
 class A
 {
 public:
   A();
+  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
   //! This is to know what cib does with virtual functions.
   virtual int VirtFunc() { return 5; }
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
--- runtime-polymorphism/src/example-client.cpp
+++ virtual-function-and-abi-stability/src/example-client.cpp
@@ -1,20 +1,21 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 void PerformTest(A* pA)
 {
   CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
   CHECK(pA->A::VirtFunc() == 5);        // A regular call without use of virtual table.
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

There is no surprises that this new client will work with new library. But the old client, the client of previous example `runtime polymorphism`, should continue working with new library without any change or recompilation. The automated test `virtual-function-and-abi-stability` ensures the client of `runtime polymorphism` works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. CIB shares **MethodTable** instead. Let's see the diff of method table of new library:

```diff
--- ../runtime-polymorphism/cib/example.h.cpp
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

As it can be seen that the new method caused a new entry in method table and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the method table precisely how they expects it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensure ABI stability we needed to run cib with additional parameter and supplied ID file of previous example:

```sh
cib -i pub -o exp -b cib -m Example -c ../runtime-polymorphism/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

