## Interface Class and Backward Compatibility

In example [`0080-interface-class`](../0080-interface-class) we have only tackled the cases that is very much expected from a C++ library/program. In this example we will see:
 1. How CIB ensures ABI stability in the case when virtual table of it's interface class is disrupted, and
 2. What precaution library must take when invoking new method on interface to ascertain backward compatibility.
 
This example is actually next version of previous example, i.e. [`0080-interface-class`](../0080-interface-class).

Below I am showing the diff of new header with previous one.

```diff
--- 0080-interface-class/pub/example.h
+++ 0090-interface-class-and-bkwd-compatibility/pub/example.h
@@ -1,22 +1,42 @@
 #pragma once
 
+#include <functional>
+
 class Interface
 {
 public:
+  //! Just to disrupt vtable.
+  virtual int Gunc() = 0;
   virtual int Func() = 0;
+
   virtual ~Interface() {}
 private:
   virtual int PrivateVirtualFunc() = 0;
 
   friend class A;
 };
 
 class A
 {
 public:
   A();
   int UseInterface(Interface* pInterface) const
   {
-    return pInterface->Func() + pInterface->PrivateVirtualFunc();
+    return pInterface->Func() + pInterface->PrivateVirtualFunc() + CallNewMethod(pInterface);
+  }
+
+private:
+  int CallNewMethod(Interface* pInterface) const
+  {
+    try
+    {
+      // new client
+      return pInterface->Gunc();
+    }
+    catch (const std::bad_function_call&)
+    {
+      // old client
+      return 0;
+    }
   }
 };

```

As it can be seen that a new pure virtual method is added to an existing interface. But the new virtual method is added before the existing one and that is the key change. CIB architecture ensures that order of virtual method in class does not matter and ABI stability is ensured even when order of virtual table is changed. Also, use of new method is inside `try-catch` block because if library wants to be backward compatible then it must handle the case when old client is used which will not have implementation of new method. Library should not call new method when run with old client, and if it does CIB has mechanism in place to throw `std::bad_function_call` exception. Notice that if CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:

```diff
--- 0080-interface-class/src/example-client.cpp
+++ 0090-interface-class-and-bkwd-compatibility/src/example-client.cpp
@@ -1,19 +1,26 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 class Implement : public Interface
 {
 public:
+  int Gunc() override { return 193; };
   int Func() override { return 167; }
 private:
   int PrivateVirtualFunc() override { return 168; }
 };
 
 TEST_CASE("Interface callback: library should be able to call client implemented function")
 {
   A a;
   Implement i;
-  CHECK(a.UseInterface(&i) == 167+168);
+  CHECK(a.UseInterface(&i) == 167 + 168 + 193);
 }
 
+TEST_CASE("Interface callback: new method should be available to new clients")
+{
+  A a;
+  Implement i;
+  CHECK(i.Gunc() == 193);
+}

```

There is no surprise that this new client will work with new library. But the old client, the client of previous example [`0080-interface-class`](../0080-interface-class), should continue working with new library without any change or recompilation. The automated test `simple-interface-class-and-bkwd-compatibility` ensures the client of [`0080-interface-class`](../0080-interface-class) works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. As you know from many previous examples that CIB uses **MethodTable** to make cross component calls. Let's see the diff of MethodTable of new library:

```diff
--- 0080-interface-class/cib/example.h.cpp
+++ 0090-interface-class-and-bkwd-compatibility/cib/example.h.cpp
@@ -28,10 +28,19 @@
       __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::PrivateVirtualFunc_0>(
         __zz_cib_h
       )
     );
   }
+  int Gunc() override {
+    auto __zz_cib_h = __zz_cib_h_;
+    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
+    return __zz_cib_FromAbiType<int>(
+      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Gunc_3>(
+        __zz_cib_h
+      )
+    );
+  }
   int Func() override {
     auto __zz_cib_h = __zz_cib_h_;
     using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
     return __zz_cib_FromAbiType<int>(
       __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Func_1>(
@@ -70,10 +79,15 @@
   using ::Interface::Interface;
 
   static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
     return new __zz_cib_::__zz_cib_Generic<::Interface>(__zz_cib_proxy, __zz_cib_GetMethodTable);
   }
+  static __zz_cib_AbiType_t<int> __zz_cib_decl Gunc_5(__zz_cib_Delegatee* __zz_cib_obj) {
+    return __zz_cib_ToAbiType<int>(
+      __zz_cib_obj->Gunc()
+    );
+  }
   static __zz_cib_AbiType_t<int> __zz_cib_decl Func_1(__zz_cib_Delegatee* __zz_cib_obj) {
     return __zz_cib_ToAbiType<int>(
       __zz_cib_obj->Func()
     );
   }
@@ -97,13 +111,14 @@
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_New_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Func_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_Delete_2),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::PrivateVirtualFunc_3),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_ReleaseProxy)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_ReleaseProxy),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Gunc_5)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
   return &methodTable;
 }
 }}
 namespace __zz_cib_ {
 template <>

```

As it can be seen that the new method caused a new entry in MethodTable and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the MethodTable precisely how they expect it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensures ABI stability we needed to run cib with additional parameter and supply ID file of previous example:

```sh
cib --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example -c ../0080-interface-class/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

