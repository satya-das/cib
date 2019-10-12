## Example - C++ Template Classes

Supporting template classes by CIB in ABI compatible and stable way is very interesting because of the fact that an object can only be of concrete type. So, we only need to export concretized types of the template class. And that we can do in the same way as we export other non-template classes. So, let's consider an example:

**FILE**: examples/100-template-classes/pub/value.h
```c++
#pragma once

namespace Example
{
template <typename _T>
class Value
{
public:
  Value(_T x = _T())
    : x_(x)
  {
  }
  _T GetValue() const
  {
    return x_;
  }
  void SetValue(_T x)
  {
    x_ = x;
  }
private:
  _T x_;
};
}

```

This is a simple template class that has one template parameter. Now, suppose if there is no function anywhere in the rest of the SDK headers that has a parameter or return type using this template class `Value`. In that case we do not need to do anything for this template class because no instance of any concretized type of this template class is crossing component boundary. But, consider the case when there are functions that use this template class:

**File**: examples/100-template-classes/pub/example.h
```c++
#pragma once

#include "int.h"
#include "value.h"

//! Contains example definitions to explain cib's functioning
namespace Example {

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

private:
  Value<int> x_;
  Value<Int> y_;
};

}

```

As we can see that `class A` has methods that has parameters of concretized type of template `class Value`. In one instance the template parameter is a built-in type, i.e. `int`, in another case the template parameter is `class Int` which is basically a wrapper of `int`. I have used `class Int` because we do not need anything complex as far as this example is concerned, we only need an example where another class is used as template parameter. Just for sake of completeness, below is the definiton of `class Int`:

**File**: examples/100-template-classes/pub/int.h
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

Since, there are 2 concretized types of template `class Value` that crosses component boundary, we basically have 2 new classes instead of 1 templated class. So, we need to export those 2 classes instead of exporting `class Value`. Those classes will have exactly same members as the `class Value` but obviously without any template parameter. But CIB's way of exporting classes is to export their `MethodTable` which is then used to reconstruct classes back on the client side. So, below is the library side glue code to export `MethodTable`s of concretized types of template class:

**File**: examples/100-template-classes/cib/value.h.cpp
```c++
#include "int.h"
#include "value.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::Value<::Example::Int>;
static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_new(::Example::Int* x) {
  return new __zz_cib_Delegatee(*x);
}
static ::Example::Int* __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Example::Int(__zz_cib_obj->::Example::Value<::Example::Int>::GetValue());
}
static void __zz_cib_decl SetValue(__zz_cib_Delegatee* __zz_cib_obj, ::Example::Int* x) {
  __zz_cib_obj->::Example::Value<::Example::Int>::SetValue(*x);
}
}
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetValue)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::Value<int>;
static ::Example::Value<int>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Value<int>* __zz_cib_decl __zz_cib_new(int x) {
  return new __zz_cib_Delegatee(x);
}
static int __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Value<int>::GetValue();
}
static void __zz_cib_decl SetValue(__zz_cib_Delegatee* __zz_cib_obj, int x) {
  __zz_cib_obj->::Example::Value<int>::SetValue(x);
}
}
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetValue)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

```

The library side code is very familiar to what we have seen in other cases like `simple-class` example. Only thing new are the name of namespaces `__zz_cib_Class3` and `__zz_cib_Class4`. For regular classes the name of these namespaces are same as class name but the name of concretized type of template class is unsuitable to be used as namespace name. For instance names of concretized types in this example are `Value<int>`, and `Value<Int>`, these cannot be used as namespace name. So, CIB makes up unique names of these classes. It doesn't matter as long as developers don't need to use these names and they are only used in glue code.

Now we need to look what does client side glue code contain to make these types available to clients. To begin with let's have a look at client side header file containing the template class definition. For explanation purpose I have produced below the `diff` of this file with original:

```diff
--- pub/value.h
+++ exp/value.h
@@ -1,24 +1,28 @@
 #pragma once
 
+#include "__zz_cib_internal/value-predef.h"
+
 namespace Example
 {
 template <typename _T>
 class Value
 {
 public:
   Value(_T x = _T())
     : x_(x)
   {
   }
   _T GetValue() const
   {
     return x_;
   }
   void SetValue(_T x)
   {
     x_ = x;
   }
 private:
   _T x_;
 };
 }
+
+#include "__zz_cib_internal/value-postdef.h"

```

We see that class definiton is exactly same as original class definition, and the header contains usual extra inclusion.
But, what we want is that when client code uses something like `Value<int>` or `Value<Int>` the corresponding concretized types on library side should be used instead of compiler generated type on client side. For that what we need is specialization of these types on client side uses `MethodTable` exported by library. So, let's have a look at the specialization of `Value<int>`:

**File**: examples/100-template-classes/exp/__zz_cib_internal/__zz_cib_Class4.h
```c++
#pragma once


#include "value.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class4 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace Example {
template<>
class Value<int>
{
public:
  Value(Value<int>&& rhs);
public:
  Value(Value<int> const & );
  ~Value();
  Value(int x);
  int GetValue() const;
  void SetValue(int x);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Value, Example::__zz_cib_Class4);
};
}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class4 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Example::Value<int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Example::Value<int>, __zz_cib_Helper>;
  using _ProxyClass = ::Example::Value<int>;
  friend class ::Example::Value<int>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_copy(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new(int x) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (int x);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      x);
  }
  static int GetValue(const __zz_cib_TYPE* __zz_cib_obj) {
    using GetValueProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<GetValueProc, __zz_cib_methodid::GetValue>(
      __zz_cib_obj
      );
  }
  static void SetValue(__zz_cib_TYPE* __zz_cib_obj, int x) {
    using SetValueProc = void (__zz_cib_decl *) (__zz_cib_TYPE*, int x);
    return instance().invoke<SetValueProc, __zz_cib_methodid::SetValue>(
      __zz_cib_obj,
      x);
  }
  static ::Example::Value<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Value<int>(h);
  }
public:
  static ::Example::Value<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Value<int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Value<int>* __zz_cib_obj) {
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy)
      return proxy;
    return __zz_cib_create_proxy(h);
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}}}

inline Example::Value<int>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<int>::Value(Value<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<int>::Value(::Example::Value<int> const & __zz_cib_param0)
  : Example::Value<int>(__zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Value<int>::~Value() {
  auto h = __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_delete(h);
}

inline Example::Value<int>::Value(int x)
  : Example::Value<int>(__zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_new(x))
{}

inline int Example::Value<int>::GetValue() const {
  return __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::GetValue(__zz_cib_h_);
}

inline void Example::Value<int>::SetValue(int x) {
  __zz_cib_::Example::__zz_cib_Class4::__zz_cib_Helper::SetValue(__zz_cib_h_, x);
}

```

Here we have specialization of `Value<int>`, if you notice the definition is very similar to what we see for other classes. Only thing is that the template class specialization present in somewhat _hidden_ file. But we need this specialization available to client code so that wherever client does `Value<int>` this specialization should be picked by compiler instead of concretizing on it's own.
If you notice there is an inclusion of file `__zz_cib_internal/value-postdef.h` at the end in the header file that contains definition of template `class Value`.

Let's see what that `value-postdef.h` contains:

**File**: examples/100-template-classes/exp/__zz_cib_internal/value-postdef.h
```c++
#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
#include "__zz_cib_Class259.h"

```

There you go, this file has `#include "__zz_cib_Class4.h"` which brings the template specialization of type `Value<int>` to whoever includes `value.h`. So, whenever client code has something like `Value<int>` the library side instance of `Value<int>` is used in the same way as any other regular class is used.

Now, we will look at what happens when client code uses another class as template parameter, for example what happens when client code has something like `Value<Int>`. In this case also we need to have a template specialization that uses library exported `MethodTable`. For sake of brevity I am not going to show code anymore, I will just outline how things are done.

For this case also client side glue code has template specialization of `Value<Int>` in file `__zz_cib_internal/__zz_cib_Class3.h`, exactly in the same way it did for previous case. Here also, we want to make sure this specialization is avaliable to the client whenever client code has `Value<Int>`. The specialization gets delivered to the client whenever client code includes `int.h` file, because file `__zz_cib_internal/__zz_cib_Class3.h` is included in `__zz_cib_internal/int-postdef.h` which is included in `exp/int.h`.

So, whenever client code has something like `Value<Int>` the library side instance of `Value<Int>` is used in the same way as any other regular class is used.

This concludes our discussion about how templates can be supported using CIB architecture. As of now `cib` tool supports many other cases of template classes but more
complex case like template template parameters will be supported in future.

