# Shared Class

In cib terminology a class whose pointer (or reference) is passed to client from library side is called a shared class.

Let's see the example of a shared class.

**File**: pub/example.h _Public header of library_:

```c++
#pragma once


//! A vividly trivial class
//! Contains just a simple method.
class A final
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc(int x) { return m + x; }

private:
  int m {1};
};

```

**File**: pub/B.h _Public header of library_:

```c++
#pragma once

#include "example.h"

class B
{
public:
  void SetA(A* pA);
  A*   GetA() const;

private:
  A* a_{nullptr};
};

```

`class A` is same as previous examples. `class B` has method `GetA()` that returns `A*`. This makes `A` a shared class because multiple calls of `GetA()` can return same pointer and so the instances are shared and so the name shared class. In this example `GetA()` indeed returns the same object each time that was set using `SetA()`. Let's see the client side code:

**File**: src/example-client.cpp _Client's expectation from library_:

```c++
#include "B.h"
#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Same proxy class instaces should be used for same object.")
{
  A a;
  B b;
  b.SetA(&a);
  CHECK(b.GetA() == &a);
}

```

We know that client side class is not same as library side class. And here the expectation is that `GetA()` must return the exact same pointer that was passed to `SetA()`. And this is a valid expectation and must work without problem. Let's see how CIB makes it possible. We will look at the diff of implementation of `class A` from very first example to see what new things are added.

```diff
--- 0010-simple-class/exp/example.cpp
+++ exp/example.cpp
@@ -1,32 +1,34 @@
 #include "example.h"
 
 
 A::A(__zz_cib_AbiType h)
   : __zz_cib_h_(h)
-{}
+{
+  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
+}
 
 A::A()
   : A(__zz_cib_MyHelper::__zz_cib_New_0())
 {}
 
 A::A(const ::A& a)
   : A(__zz_cib_MyHelper::__zz_cib_Copy_1(
         __zz_cib_::__zz_cib_ToAbiType<decltype(a)>(a)))
 {}
 
 A::~A() {
   auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
   __zz_cib_MyHelper::__zz_cib_Delete_2(
     h
   );
 }
 
 int A::SomeFunc(int x) {
   return __zz_cib_::__zz_cib_FromAbiType<int>(
     __zz_cib_MyHelper::SomeFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
       __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
       __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
     )
   );
 }
 

```

We see that `__zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_)` is called from constructor of `A`. That's the only change in implementation of `class A`.

Let's see the diff of helper class implementation:

```diff
--- 0010-simple-class/exp/__zz_cib_internal/example-postdef.h
+++ exp/__zz_cib_internal/example-postdef.h
@@ -1,74 +1,104 @@
 #pragma once
 
 #include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
 #include "__zz_cib_internal/__zz_cib_Example-def.h"
 #include "__zz_cib_internal/__zz_cib_Example-ids.h"
 #include "__zz_cib_internal/__zz_cib_Example-handle-proxy-map.h"
 #include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
 
 namespace __zz_cib_ {
 template <typename T>
 struct __zz_cib_Helper<::A, T> : public __zz_cib_MethodTableHelper {
   static_assert(std::is_same_v<T, ::A>,
     "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");
 
   using _ProxyClass = T;
   using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
   friend class ::A;
+  static bool instanceDeleted_;
+  Example::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
   using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_MethodId;
 
   __zz_cib_Helper()
     : __zz_cib_MethodTableHelper(
       __zz_cib_ExampleGetMethodTable(__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId))
   {}
+  ~__zz_cib_Helper() {
+    instanceDeleted_ = true;
+  }
   static __zz_cib_Helper& __zz_cib_Instance() {
     static __zz_cib_Helper helper;
     return helper;
   }
   static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
     return __zz_cib_Instance();
   }
 
   static __zz_cib_AbiType __zz_cib_New_0() {
     using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
     return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_0>(
       );
   }
   template <typename ..._Args>
   static __zz_cib_AbiType __zz_cib_Copy_1(_Args... __zz_cib_args) {
     using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
     return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_1>(
       __zz_cib_args...);
   }
   static auto __zz_cib_Delete_2(__zz_cib_AbiType __zz_cib_obj) {
     if (__zz_cib_obj) {
       using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
       return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
         __zz_cib_obj
         );
     }
   }
   template <typename _RT, typename ..._Args>
   static auto SomeFunc_3(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
     using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
     return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SomeFunc_3>(
       __zz_cib_obj,
       __zz_cib_args...);
   }
+  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h) {
+    auto* const __zz_cib_obj = new T(h);
+    return __zz_cib_obj;
+  }
   static T __zz_cib_ObjectFromHandle(__zz_cib_AbiType h) {
     return T(h);
   }
   static __zz_cib_AbiType& __zz_cib_GetHandle(T* __zz_cib_obj) {
     return __zz_cib_obj->__zz_cib_h_;
   }
   static __zz_cib_AbiType const& __zz_cib_GetHandle(const T* __zz_cib_obj) {
     return __zz_cib_obj->__zz_cib_h_;
   }
   static __zz_cib_AbiType __zz_cib_ReleaseHandle(T* __zz_cib_obj) {
     if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
+    __zz_cib_RemoveProxy(__zz_cib_obj->__zz_cib_h_);
     auto h = __zz_cib_obj->__zz_cib_h_;
     __zz_cib_obj->__zz_cib_h_ = nullptr;
     return h;
   }
+  static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {
+    if (h == nullptr)
+      return nullptr;
+    auto&  dis   = __zz_cib_Instance();
+    auto* proxy = dis.implProxyMap_.FindProxy(h);
+    if (proxy == nullptr)
+      proxy = __zz_cib_CreateProxy(h);
+    return proxy;
+  }
+  static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
+    auto& dis = __zz_cib_Instance();
+    dis.implProxyMap_.AddProxy(__zz_cib_obj, h);
+  }
+  static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {
+    if (instanceDeleted_) return;
+    auto& dis = __zz_cib_Instance();
+      dis.implProxyMap_.RemoveProxy(h);
+  }
 };
+template <typename T>
+bool __zz_cib_Helper<::A, T>::instanceDeleted_ = false;
 }

```

We see usage of `__zz_cib_ImplProxyMap` as new thing in `__zz_cib_Helper`. It's a map between implementation class aka Library side class and proxy class i.e. client side class.

When an object of shared class is constructed an entry is added in the map because constructor of shared class calls `__zz_cib_AddProxy`.

We will then see how the saved proxy object is later returned to make the expectation of client code work.

Let's see implementation of `class B`.

**File**: exp/B.cpp _Client's expectation from library_:

```c++
#include "B.h"
#include "example.h"


B::B(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_New_0())
{}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

B::~B() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void B::SetA(::A* pA) {
    __zz_cib_MyHelper::SetA_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(std::move(pA))
    );
  }

::A* B::GetA() const {
  return __zz_cib_::__zz_cib_FromAbiType<::A*>(
    __zz_cib_MyHelper::GetA_4<__zz_cib_::__zz_cib_AbiType_t<::A*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


```

Most method implementations are similar to what we have seen before for class A. But if we look at `GetA()` implementation then we see `__zz_cib_::__zz_cib_FromAbiType<::A*>` is called on return value of `__zz_cib_MyHelper::GetA_4()`. As we know `__zz_cib_MyHelper::GetA_4()` will actually return pointer of library class and so it needs to be converted to pointer of proxy class. And `__zz_cib_::__zz_cib_FromAbiType<::A*>` does exactly that, by eventually calling `__zz_cib_Helper::__zz_cib_FromHandle()`.

Type conversion is described separately, but for this example it is sufficient to know that existing proxy object is reused when a pointer of library side class is converted to client side class and a new instance is created only when an existing proxy class does not exist.

TODO: Make sure type conversion is covered in documentation as add a link here.

That's it about this example.