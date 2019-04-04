## Interface Classes and ABI Stability

In example `Interface Classes` we have only tackled the cases that are very much expected from a C++ library/program. In this example we will see how CIB ensures ABI stability in the case when it disrupts virtual table of it's interface classes. This example is actually next version of previous example which is `Interface Classes`.

Below I am showing the diff of new header with previous one.

```diff
--- interface-classes/pub/example.h
+++ interface-classes-and-abi-stability/pub/example.h
@@ -1,36 +1,39 @@
 #pragma once
 
 class Interface2;
 class Interface3;
 
 class Interface1
 {
 public:
+  virtual int disruptVTable() { return 1; }
   virtual Interface2* p() = 0;
   virtual Interface3& r() = 0;
   virtual ~Interface1() {}
 };
 
 class Interface2
 {
 public:
+  virtual int disruptVTable() { return 2; }
   virtual int f() = 0;
   virtual ~Interface2() {}
 };
 
 class Interface3
 {
 public:
+  virtual int disruptVTable() { return 3; }
   virtual int g() = 0;
   virtual ~Interface3() {}
 };
 
 class A
 {
 public:
   A();
   int SetInterface(Interface1* pInterface1) const
   {
     return pInterface1->p()->f() + pInterface1->r().g();
   }
 };

```

As it can be seen that only new virtual methods are added to an existing interfaces. But the new virtual method is added before the existing one and that is the key change. If CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:

```diff
45a46,53
> 
> TEST_CASE("New virtual functions should be available to new clients")
> {
>   Implement1 i;
>   CHECK(i.disruptVTable() == 1);
>   CHECK(i.p()->disruptVTable() == 2);
>   CHECK(i.r().disruptVTable() == 3);
> }

```

There is no surprises that this new client will work with new library. But the old client, the client of previous example `interface classes`, should continue working with new library without any change or recompilation. The automated test `interface-classes-and-abi-stability` ensures the client of `interface classes` works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. CIB shares **MethodTable** instead. Let's see the diff of method table of new library:

```diff
--- ../interface-classes/cib/example.h.cpp
+++ cib/example.h.cpp
@@ -27,10 +27,15 @@
   Interface1(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
     : ::Interface1::Interface1()
     , __zz_cib_proxy(proxy)
     , __zz_cib_mtbl_helper(mtbl)
   {}
+  int disruptVTable() override {
+    using disruptVTableProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
+    return __zz_cib_get_mtable_helper().invoke<disruptVTableProc, __zz_cib_GenericProxy::__zz_cib_methodid::disruptVTable_3>(
+      __zz_cib_proxy);
+  }
   ::Interface2* p() override {
     using pProc = ::Interface2* (__zz_cib_decl *) (__zz_cib_PROXY*);
     return __zz_cib_get_mtable_helper().invoke<pProc, __zz_cib_GenericProxy::__zz_cib_methodid::p_0>(
       __zz_cib_proxy);
   }
@@ -52,10 +57,13 @@
 namespace __zz_cib_Delegator {
 using __zz_cib_Delegatee = __zz_cib_::Interface1::__zz_cib_GenericProxy::Interface1;
 static ::Interface1* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
   return new __zz_cib_::Interface1::__zz_cib_GenericProxy::Interface1(proxy, mtbl);
 }
+static int __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
+  return __zz_cib_obj->::Interface1::disruptVTable();
+}
 static ::Interface2* __zz_cib_decl p_1(__zz_cib_Delegatee* __zz_cib_obj) {
   return __zz_cib_obj->p();
 }
 static ::Interface3* __zz_cib_decl r_2(__zz_cib_Delegatee* __zz_cib_obj) {
   return &__zz_cib_obj->r();
@@ -76,13 +84,14 @@
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::p_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::r_2),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::disruptVTable_5)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
   return &methodTable;
 }
 }}
 namespace __zz_cib_ { namespace Interface2 {
 namespace __zz_cib_GenericProxy {
@@ -99,10 +108,15 @@
   Interface2(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
     : ::Interface2::Interface2()
     , __zz_cib_proxy(proxy)
     , __zz_cib_mtbl_helper(mtbl)
   {}
+  int disruptVTable() override {
+    using disruptVTableProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
+    return __zz_cib_get_mtable_helper().invoke<disruptVTableProc, __zz_cib_GenericProxy::__zz_cib_methodid::disruptVTable_2>(
+      __zz_cib_proxy);
+  }
   int f() override {
     using fProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
     return __zz_cib_get_mtable_helper().invoke<fProc, __zz_cib_GenericProxy::__zz_cib_methodid::f_0>(
       __zz_cib_proxy);
   }
@@ -119,10 +133,13 @@
 namespace __zz_cib_Delegator {
 using __zz_cib_Delegatee = __zz_cib_::Interface2::__zz_cib_GenericProxy::Interface2;
 static ::Interface2* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
   return new __zz_cib_::Interface2::__zz_cib_GenericProxy::Interface2(proxy, mtbl);
 }
+static int __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
+  return __zz_cib_obj->::Interface2::disruptVTable();
+}
 static int __zz_cib_decl f_1(__zz_cib_Delegatee* __zz_cib_obj) {
   return __zz_cib_obj->f();
 }
 static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
   delete __zz_cib_obj;
@@ -151,13 +168,14 @@
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_3),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::disruptVTable_5)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
   return &methodTable;
 }
 }}
 namespace __zz_cib_ { namespace Interface3 {
 namespace __zz_cib_GenericProxy {
@@ -174,10 +192,15 @@
   Interface3(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
     : ::Interface3::Interface3()
     , __zz_cib_proxy(proxy)
     , __zz_cib_mtbl_helper(mtbl)
   {}
+  int disruptVTable() override {
+    using disruptVTableProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
+    return __zz_cib_get_mtable_helper().invoke<disruptVTableProc, __zz_cib_GenericProxy::__zz_cib_methodid::disruptVTable_2>(
+      __zz_cib_proxy);
+  }
   int g() override {
     using gProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
     return __zz_cib_get_mtable_helper().invoke<gProc, __zz_cib_GenericProxy::__zz_cib_methodid::g_0>(
       __zz_cib_proxy);
   }
@@ -194,10 +217,13 @@
 namespace __zz_cib_Delegator {
 using __zz_cib_Delegatee = __zz_cib_::Interface3::__zz_cib_GenericProxy::Interface3;
 static ::Interface3* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
   return new __zz_cib_::Interface3::__zz_cib_GenericProxy::Interface3(proxy, mtbl);
 }
+static int __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
+  return __zz_cib_obj->::Interface3::disruptVTable();
+}
 static int __zz_cib_decl g_1(__zz_cib_Delegatee* __zz_cib_obj) {
   return __zz_cib_obj->g();
 }
 static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
   delete __zz_cib_obj;
@@ -226,13 +252,14 @@
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_3),
-    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::disruptVTable_5)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
   return &methodTable;
 }
 }}
 namespace __zz_cib_ { namespace A {
 namespace __zz_cib_Delegator {

```

As it can be seen that the new method caused a new entry in method table and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the method table precisely how they expects it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensure ABI stability we needed to run cib with additional parameter and supplied ID file of previous example:

```sh
cib -i pub -o exp -b cib -m Example -c ../interface-classes/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

