# Example - C++ Template Classes

Supporting template classes by CIB in ABI compatible and stable way is very interesting because of the fact that an object can only be of a concrete type. So, we only need to export concretized types of the template class. And that we can do in the same way as we export other non-template classes. So, let's consider an example:

**FILE**: examples/0120-template-classes/pub/value.h
```c++
#pragma once

namespace Example
{
template <typename T>
class Value
{
public:
  Value(T x = T())
    : x_(x)
  {
  }
  T GetValue() const
  {
    return x_;
  }
  void SetValue(T x)
  {
    x_ = x;
  }

  bool operator == (const Value& rhs) const
  {
    return x_ == rhs.x_;
  }

private:
  T x_;
};
}

```

This is a simple template class that has one template parameter. Now, suppose if there is no function anywhere in the rest of the SDK headers that has a parameter or return type using this template class `Value`. In that case we do not need to do anything for this template class because no instance of any concretized type of this template class is crossing component boundary. But, consider the case when there are functions that use this template class:

**File**: examples/0120-template-classes/pub/example.h
```c++
#pragma once

#include "int.h"
#include "value.h"

//! Contains example definitions to explain cib's functioning
namespace Example {

using FloatValue = Value<float>;

class A
{
public:
  void       Set(const Value<int>& x);
  Value<int> Get() const
  {
    return x_;
  }
  void       SetInt(const Value<Int>& y);
  Value<Int> GetInt() const
  {
    return y_;
  }

  void       SetFloat(FloatValue f);
  FloatValue GetFloat() const
  {
    return f_;
  }

private:
  Value<int> x_;
  Value<Int> y_;
  FloatValue f_;
};

}

```

As we can see that `class A` has methods that has parameters of concretized type of template `class Value`. We have following cases of template class use:
  1. Template parameter is a built-in type, i.e. `int`,
  2. Template parameter is `class Int`, and
  3. Object of `FloatValue` are used as function parameter which is essentially `Value<float>`.

`#1` is to demonstrate how we can support templates instances when built-in type are used as template argument.  
`#2` is for how to support when class objects are used as template argument.  
`#3` is just as a test that even if aliased types using `typedef` or `using` is used they are supported too. This is not actually the capability of CIB architecture but of the CIB tool that can understand such usage and generate the code accordingly.

Just for sake of completeness, below is the definiton of `class Int`:

**File**: examples/0120-template-classes/pub/int.h
```c++
#pragma once

namespace Example
{

class Int
{
public:
  Int(int x = 0)
    : v_(x)
  {
  }
  operator int() const
  {
    return v_;
  }

private:
  int v_;
};

}
```

Since, there are 3 concretized types of template `class Value` that crosses component boundary, we basically have 3 new classes instead of 1 templated class. So, we need to export those 3 classes instead of exporting `class Value`. Those classes will have exactly same members as the `class Value` but obviously without any template parameter. But CIB's way of exporting classes is to export their `MethodTable` which is then used to reconstruct classes back on the client side. So, below is the library side glue code to export MethodTables of concretized types of template class:

**File**: examples/0120-template-classes/cib/value.h.cpp
```c++
#include "int.h"
#include "value.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<::Example::Int>> : public ::Example::Value<::Example::Int> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Example::Value<::Example::Int>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::Example::Int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::Example::Int>(x));
  }
  static __zz_cib_AbiType_t<::Example::Int> __zz_cib_decl GetValue_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Int>(
      __zz_cib_obj->::Example::Value<::Example::Int>::GetValue()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetValue_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Example::Int> x) {
    __zz_cib_obj->::Example::Value<::Example::Int>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<::Example::Int>(x)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Example::Value<::Example::Int>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::Example::Value<::Example::Int>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const ::Example::Value<::Example::Int>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::SetValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_OperatorCmpEq_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<float>> : public ::Example::Value<float> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::Value<float>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Example::Value<float>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<float> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<float>(x));
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetValue_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::Example::Value<float>::GetValue()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetValue_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> x) {
    __zz_cib_obj->::Example::Value<float>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<float>(x)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Example::Value<float>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::Example::Value<float>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const ::Example::Value<float>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::SetValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_OperatorCmpEq_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<int>> : public ::Example::Value<int> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::Value<int>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Example::Value<int>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(x));
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetValue_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Example::Value<int>::GetValue()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetValue_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> x) {
    __zz_cib_obj->::Example::Value<int>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<int>(x)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Example::Value<int>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::Example::Value<int>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const ::Example::Value<int>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::SetValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_OperatorCmpEq_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}

```

The library side code is very familiar to what we have seen in other cases like [`0010-simple-class`](../0010-simple-class).

Now we need to look what does client side glue code contain to make these types available to clients. To begin with let's have a look at client side header file containing the template class definition. For explanation purpose I have produced below the `diff` of this file with original:

```diff
--- pub/value.h
+++ exp/value.h
@@ -1,30 +1,32 @@
 #pragma once
 
+#include "__zz_cib_internal/value-predef.h"
+
 namespace Example
 {
 template <typename T>
 class Value
 {
 public:
   Value(T x = T())
     : x_(x)
   {
   }
   T GetValue() const
   {
     return x_;
   }
   void SetValue(T x)
   {
     x_ = x;
   }
-
   bool operator == (const Value& rhs) const
   {
     return x_ == rhs.x_;
   }
-
 private:
   T x_;
 };
 }
+
+#include "__zz_cib_internal/value-postdef.h"

```

We see that class definiton is exactly same as original class definition, and the header contains other usual extra inclusions.
But, what we want is that when client code uses something like `Value<int>` or `Value<Int>` the corresponding concretized types on library side should be used instead of compiler generated type on client side. For that what we need is specialization of these types on client side uses `MethodTable` exported by library. So, let's have a look at the specialization of `Value<int>`:

**File**: examples/0120-template-classes/exp/__zz_cib_internal/__zz_cib_Class257.h
```c++
#pragma once


#include "value.h"

namespace __zz_cib_ {
using namespace ::Example;
template <typename T>
struct __zz_cib_Helper<::Example::Value<int>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::Example::Value<int>>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::Example::Value<int>;
  static bool instanceDeleted_;
  Example::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_ExampleGetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_classId))
  {}
  ~__zz_cib_Helper() {
    instanceDeleted_ = true;
  }
  static __zz_cib_Helper& __zz_cib_Instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
    return __zz_cib_Instance();
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_Copy_0(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
        __zz_cib_obj
        );
    }
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto GetValue_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetValue_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetValue_4(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetValue_4>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorCmpEq_5(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorCmpEq_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h) {
    auto* const __zz_cib_obj = new T(h);
    return __zz_cib_obj;
  }
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
    __zz_cib_RemoveProxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    if (h == nullptr)
      return nullptr;
    auto&  dis   = __zz_cib_Instance();
    auto* proxy = dis.implProxyMap_.FindProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_CreateProxy(h);
    return proxy;
  }
  static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_Instance();
    dis.implProxyMap_.AddProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {
    if (instanceDeleted_) return;
    auto& dis = __zz_cib_Instance();
      dis.implProxyMap_.RemoveProxy(h);
  }
};
template <typename T>
bool __zz_cib_Helper<::Example::Value<int>, T>::instanceDeleted_ = false;
}
namespace Example {
template<>
class Value<int>
{
public:
  Value(const ::Example::Value<int>& __zz_cib_param0)
    : Example::Value<int>(__zz_cib_MyHelper::__zz_cib_Copy_0(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}
  ~Value() {
    auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
    __zz_cib_MyHelper::__zz_cib_Delete_1(
      h
    );
  }
  template <typename __zz_cib_Dummy = std::pair<Value<int>*, Value<int>*>>
  Value(int x)
    : Example::Value<int>(__zz_cib_MyHelper::__zz_cib_New_2(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(std::move(x))))
  {}
  template <typename __zz_cib_Dummy = std::pair<Value<int>*, Value<int>*>>
  int GetValue() const {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::GetValue_3<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<Value<int>*, Value<int>*>>
  void SetValue(int x) {
      __zz_cib_MyHelper::SetValue_4<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(std::move(x))
      );
    }
  template <typename __zz_cib_Dummy = std::pair<Value<int>*, Value<int>*>>
  bool operator ==(const ::Example::Value<int>& rhs) const {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_5<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(Value<int>), __ZZ_CIB_CLASS_NAME(Example::Value<int>));
};
}

```

Here we have specialization of `Value<int>`, if you notice the definition is very similar to what we see for other classes. There are few differences though:
  1. Template class specialization is present in somewhat _hidden_ file, and
  2. All methods are actually templated using `__zz_cib_Dummy` as template parameter with default value. Clients code should not use any template argument when calling methods of template classes. They should use those methods in exactly the same way. `__zz_cib_Dummy` is only to delay specialization until it is used in client code. It is required to avoid circular header dependency.

Now we need this specialization available to client code so that wherever client uses `Value<int>` this specialization should be picked by the compiler instead of concretizing on it's own.

Let's see the content of `value-postdef.h` that is included at the end:

**File**: examples/0120-template-classes/exp/__zz_cib_internal/value-postdef.h
```c++
#pragma once

#include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Class259.h"
#include "__zz_cib_Class257.h"

```

There you go, this file has `#include "__zz_cib_Class257.h"` which brings the template specialization of type `Value<int>` to whoever includes `value.h`. So, whenever client code has something like `Value<int>` the library side instance of `Value<int>` is used in the same way as any other regular class is used.

The other `#include "__zz_cib_Class259.h"` is for `Value<float>`.

Now, we will look at what happens when client code uses another class as template parameter instead of built-in type, for example what happens when client code has something like `Value<Int>`. In this case also we need to have a template specialization that uses library exported `MethodTable`. For sake of brevity I am not going to show code anymore, I will just outline how things are done.

For this case also client side glue code has template specialization of `Value<Int>` in file `__zz_cib_internal/__zz_cib_Class258.h`, exactly in the same way it did for previous case. Here also, we want to make sure this specialization is avaliable to the client whenever client code has `Value<Int>`. The specialization gets delivered to the client whenever client code includes `int.h` file, because file `__zz_cib_internal/__zz_cib_Class258.h` is included in `__zz_cib_internal/int-postdef.h` which is included in `exp/int.h`.

So, whenever client code has something like `Value<Int>` the library side instance of `Value<Int>` is used in the same way as any other regular class is used.

# CIB Limitation
This example also demonstrates some limitations of CIB architecture:
  1. As it can be easily seen that library will be exporting all concretized instances of a template class along with all their methods and so code bloat can be expected.
  2. Support of template methods are difficult because all possible usage of templated methods of a class is not possible to know in advance.

This concludes our discussion about how templates can be supported using CIB architecture. As of now `cib` tool supports many other cases of template classes but more
complex case like template template parameters will be supported in future.

