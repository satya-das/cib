# Example - A Simple Class
This is very first example that explains basic building blocks of CIB. Being the first example it has to cover a vast ground and so my applogies for it's unusual length.

Let's consider the following example:

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

**File**: src/example-client.cpp _Client's expectation from library_:

```c++
#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  A a;
  CHECK(a.SomeFunc(10) == 11);
}

```

**Client code is in form of automated test. It is written using `catch test framework`. I have chosen this way to clearly convey what we expect and also to use these code as automated tests.**

With this tiny library and client code we would like to see what pieces of CIB architecture should be there to make method call across component boundary in an ABI compatible way and also ensure ABI stability across releases.

## Running CIB
CIB  is expected to be run with public headers that a library wants to publish.

Assuming `pub/` is the folder that contains public headers that library wants to publish and current working directory is `examples/0010-simple-class/` we can run CIB as shown below:

```shell
cib -i pub/ -o exp/ -b cib/ -m Example
```

After above command we will see quite a good number of files created in folders `cib/` and `exp/`.
We will go into the details of these files. Broadly there are 2 sets of files. One set is for library (files in folder `cib/`) that it will have to compile when it builds itself and other set (files in folder `exp/`) is for clients of the library to use.
Undoudtedly in this example we have a vividly simple class, but we do see lots of code getting generated. These codes are required for CIB to guarentee compiler independence and ABI stability. They are not complex but there are few pieces that we will look closer. Please brace yourself for a deep dive. :)

## Symbol `__zz_cib_`
To keep generated code separate they are put inside `__zz_cib_` namespace. See [appendix](../../xtra-docs) for reason why this name was chosen.

## MethodTable
For calling functions across component CIB uses MethodTable. We will go into the detail about how it solves [ABI compatibility](#abi-compatibility) and stability issues of C++ but let's first see the definition of MethodTable:

**MethodTable and helper function**:

**File**: `cib/__zz_cib_Example-mtable.h` and also **File**: `exp/__zz_cib_internal/__zz_cib_Example-mtable.h`:

```c++
#ifndef __zz_cib_MethodTable_defined
#define __zz_cib_MethodTable_defined

#include "__zz_cib_Example-decl.h"

#include <cstdint>

namespace __zz_cib_ {

//! Generic type for function pointer.
using __zz_cib_MTableEntry = int(__zz_cib_decl*)();
using __zz_cib_MethodArray = const __zz_cib_MTableEntry*;

extern "C" struct __zz_cib_MethodTable
{
  const __zz_cib_MethodArray methods;
  const std::uint32_t        numMethods; //!< Number of methods in MethodTable.
};

//! Fetches method from a MethodTable
//! @param mtbl MethodTable from which to fetch the method.
//! @param methodId Method-ID which is index in the array to fetch method from.
//! @return __zz_cib_MTableEntry value which can be null.
//! @warning returned value can be a nullptr.
inline __zz_cib_MTableEntry __zz_cib_GetMTableEntry(const __zz_cib_MethodTable* mtbl, std::uint32_t methodId)
{
  if (methodId < mtbl->numMethods)
    return mtbl->methods[methodId];
  return nullptr;
}

} // namespace __zz_cib_

#endif

```

So, basically MethodTable is an array of function pointers. This is the table that crosses component boundary instead of symbols corresponding to functions or virtual table.

## Library Glue Code
Now, let's look at the generated library glue code.

**File**: cib/example.h.cpp:

```c++
#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new ::A();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(__zz_cib_AbiType_t<const ::A&> a) {
    return new ::A(    __zz_cib_::__zz_cib_FromAbiType<const ::A&>(a));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::A* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl SomeFunc_3(::A* __zz_cib_obj, __zz_cib_AbiType_t<int> x) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::SomeFunc(
        __zz_cib_::__zz_cib_FromAbiType<int>(x)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::SomeFunc_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}

```

There are mainly 2 parts in this file. In the first part we see plain C-style static functions as members of `struct __zz_cib_Delegator<::A>` that are implemented by just delegating to class methods. For example function `SomeFunc_3` is implemented by calling `::A::SomeFunc()`. Similarly there are functions for constructors and destructor too and they call `new` and `delete`.

The second part of this file defines a function `__zz_cib_GetMethodTable`.
The implementation of `__zz_cib_GetMethodTable` is to return a static table of methods. We will later see how this MethodTable is used by the client side glue code to implement classes that client would use.

There are few things to notice in the delegator functions:
  - They use `__zz_cib_decl` as calling convention so that client and library both use same convention and be compatible.
  - Parameters of delegator function are not same as the corresponding method of the class. If we look at `__zz_cib_Copy_1` it has a parameter of type `__zz_cib_AbiType_t<const ::A&>`. We will go into detail of `AbiType` later but as of now we can move ahead by knowing that this type is exactly same as `const A*`. Detail will follow later.
  - Parameters go through a conversion. See function `__zz_cib_Copy_1`. The parameter `a` is not directly passed to copy constructor. Instead it is first passed to `__zz_cib_::__zz_cib_FromAbiType` which converts `a` from `const A*` to `const A&` type before it is passed to copy constructor.
  - Return value too goes through conversion. Return type of function `SomeFunc_3` is `__zz_cib_AbiType_t<int>` which is exactly as `int`. Here the type doesn't need any conversion but CIB tool is not aware of specificity of types so it generates identical code for all types.


### Function Name Suffix
Delegator functions have suffix `_n`, where `n` is an integer. These numbers are IDs of respective functions. ID is appended in function names so that even if there are functions with same name we will end up with unique function names for all methods of a class. We will see these suffixed names some more times in client glue code.

## Entity IDs

All classes and methods of classes are assigned a unique integer value. These values are shared between library and client and they remain unchanged in new version of library.

**File**: `exp/__zz_cib_internal/__zz_cib_Example-ids.h` and also `cib/__zz_cib_Example-ids.h`:

```c++
#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  //#= FullClassName: ::A
  enum { __zz_cib_classId = 258 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::__zz_cib_stl_helpers
  enum { __zz_cib_classId = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class257 {
  //#= FullClassName: ::std
  enum { __zz_cib_classId = 257 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_nextClassId = 259 };
  enum { __zz_cib_internalClassId = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  enum __zz_cib_MethodId {
    //#= A();
    __zz_cib_New_0 = 0,
    //#= A(const ::A&);
    __zz_cib_Copy_1 = 1,
    //#= ~A();
    __zz_cib_Delete_2 = 2,
    //#= int SomeFunc(int);
    SomeFunc_3 = 3,
    __zz_cib_nextMethodId = 4
  };
}}}


```

We will soon see usage of these IDs.

## Library Gateway function

**File**: cib/__zz_cib_Example-gateway.cpp:

```c++
#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-export.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable.h"

namespace __zz_cib_ { namespace __zz_cib_Class258 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_ExampleGetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId:
    return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}

```

We see implementation of function `__zz_cib_Example_GetMethodTable`. This function returns the MethodTable for a given class-id. In a previous section we had already seen implementation of `__zz_cib_GetMethodTable` for classes which is called from here. Since our trivial example had just one class there is just one `case` statement, had there been more classes there would have been more case statements. In later examples we will see those cases as well.

Since this function is for client to invoke it is defined as `extern "C" __zz_cib_export`. They ensure that name is not mangled and the symbol is exported so that client glue code can call it. Definition of `__zz_cib_export` depends on compiler and is defined in `__zz_cib_Example-export.h` that is included in this file.

Now we will visit code that will be part of the SDK and will be used by clients.

## SDK Headers and Proxy Classes

### Proxy class definition
**File**: exp/example.h:

```c++
#pragma  once

#include "__zz_cib_internal/example-predef.h"

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
  int SomeFunc(int x);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"

```

This is the only file that is meant to be seen by client developers. All other files are only for the compiler.
This file contains the definitions that library author wanted to publish. But they are slightly different because they have been `cibified`, meaning that they are published using `cib` architecture generated by cib tool.

You can notice certain differences between this class and the original class in folder pub/. Below is the diff between original and cib generated header:

```diff
--- pub/example.h
+++ exp/example.h
@@ -1,19 +1,22 @@
 #pragma once
 
+#include "__zz_cib_internal/example-predef.h"
 
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
-  int SomeFunc(int x) { return m + x; }
+  int SomeFunc(int x);
 
 private:
-  int m {1};
+  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
 };
+
+#include "__zz_cib_internal/example-postdef.h"

```

We can see that the header is *almost* same as original, except some "hook points" that CIB inserted. There is one file inclusion in the beginning and one at the end. Class definition is same functionality wise. A macro `__ZZ_CIB_PROXY_CLASS_INTERNALS` is also inserted in private section of the class. These extra insertions in the header make the header a bit ugly but they are worth the price because they add value by guarenteeing that clients and library will be compatible without enforcing use of particular compiler and also clients will not need recompilation when new version of library is published.

## Client side glue code
We will now see the glue code on client side. These codes are only for the compiler to use. We will see them only to know about cib architecture.

### The predef file
Now, let's have a look at the `predef` file that is included in the beginning.

**File**: __zz_cib_internal/example-predef.h:

```c++
#pragma once
#include "__zz_cib_internal/__zz_cib_Example-class-internal-def.h"

```

We see it includes __zz_cib_Example-class-internal-def.h. Lets look at this file.

**File**: __zz_cib_internal/__zz_cib_Example-class-internal-def.h.:

```c++
/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include "__zz_cib_Example-class-helper.h"
#include "__zz_cib_Example-delegator.h"
#include "__zz_cib_Example-generic.h"

/**
 * @def __ZZ_CIB_CLASS_NAME
 * Helps passing template class name as parameter to anoher macro.
 * @note It is basically a workaround to avoid error when template class name with angle bracket and parameters is
 * passed to a MACRO.
 */
#define __ZZ_CIB_CLASS_NAME(...) __VA_ARGS__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS
 * Defines common elements all proxy classes should have.
 */
#define __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(className, fullName)                                                     \
public:                                                                                                                \
  using __zz_cib_AbiType = class __zz_cib_Impl*;                                                                       \
                                                                                                                       \
private:                                                                                                               \
  friend struct __zz_cib_::__zz_cib_Helper<fullName>;                                                                  \
  friend struct __zz_cib_::__zz_cib_Delegator<fullName>;                                                               \
  using __zz_cib_MyHelper = __zz_cib_::__zz_cib_Helper<fullName>;                                                      \
  __zz_cib_AbiType __zz_cib_h_;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_PROXY_CLASS_INTERNALS
 * Allows cib to add it's hook in proxy classes in a minimally invasive way.
 */
#define __ZZ_CIB_PROXY_CLASS_INTERNALS(className, fullName)                                                            \
  __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(className, fullName)                                                           \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_TEMPLATE_CLASS_INTERNALS
 * Allows cib to add it's hook in proxy template specialization classes in a minimally invasive way.
 */
#define __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(className, fullName)                                                         \
  __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))                 \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h)                                                                               \
    : __zz_cib_h_(h)                                                                                                   \
  {                                                                                                                    \
    __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);                                                           \
  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS
 * Allows cib to add it's hook in classes that share layout with library in a minimally invasive way.
 */
#define __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS(className, fullName)                                                   \
public:                                                                                                                \
  using __zz_cib_AbiType = className*;                                                                                 \
                                                                                                                       \
private:                                                                                                               \
  using __zz_cib_MyHelper = __zz_cib_::__zz_cib_Helper<fullName>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_FACADE_CLASS_INTERNALS
 * Allows cib to add it's hook in classes that act as facade for classes in a minimally invasive way.
 */
#define __ZZ_CIB_FACADE_CLASS_INTERNALS(className, fullName)                                                           \
  friend class __zz_cib_::__zz_cib_Generic<fullName>;                                                                  \
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))

```

**The only thing of this file that is of interest as of now is definition of `__ZZ_CIB_PROXY_CLASS_INTERNALS`.**

Macro `__ZZ_CIB_PROXY_CLASS_INTERNALS`:
  1. defines `__zz_cib_AbiType`,
  2. declares specializations of `__zz_cib_Helper` and `__zz_cib_Delegator` as friends,
  3. defines an alias `__zz_cib_MyHelper`,
  4. adds a private data member `__zz_cib_h_`, and
  5. adds a protected constructor.

`__zz_cib_AbiType` is a pointer to incomplete nested type `class __zz_cib_Impl`. Client side `class A` is not same as library side `class A`. The incomplete type `A::__zz_cib_Impl` on client side is same as `class A` of library side. For client library side class is actually the implementation class and client side class uses that in the same way implementation class is used in bridge pattern or [pImpl idiom](https://en.cppreference.com/w/cpp/language/pimpl).

The data member `__zz_cib_h_` is the opaque pointer of `class __zz_cib_Impl`. The constructor is to construct object from opaque pointer. We call client facing class as proxy class because the "real" object is on the library side and the proxy class only holds an opaque pointer of that. The type `__zz_cib_AbiType` is the type of object that crosses component boundary. It is the pointer to class defined on library side and never derefenced on client side.

In this example we can skip `__zz_cib_Delegator` as it is needed only when the class is an interface class. Let's now see the the defintion of `__zz_cib_Helper`.

**File**: __zz_cib_internal/__zz_cib_Example-class-helper.h.:

```c++
/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

namespace __zz_cib_ {

/**
 * Helpful in taking away the dirty details of implementing methods of a proxy class.
 * The second parameter is only used as a trick to delay the specialization of __zz_cib_Helper until it is actually
 * needed.
 */
template <typename _ProxyClass, typename _SpecializationDelayer = _ProxyClass>
struct __zz_cib_Helper
{
};

} // namespace __zz_cib_

```

Basically it is an empty template class and so the real content of this class is in it's specialization which we will soon see but before that we need to see `MethodTableHelper`.

### MethodTableHelper class
We know that library only exports MethodTable. So, let's see `class __zz_cib_MethodTableHelper` that makes it easy to use the MethodTable.

**File**: exp/__zz_cib_internal/__zz_cib_Example-mtable-helper.h:

```c++
#ifndef __zz_cib_MethodTableHelper_defined
#define __zz_cib_MethodTableHelper_defined

#include "__zz_cib_Example-mtable.h"

#include <cassert>
#include <functional>

namespace __zz_cib_ {

//! Helps in using MethodTable.
class __zz_cib_MethodTableHelper
{
public:
  __zz_cib_MethodTableHelper(const __zz_cib_MethodTable* _mtbl)
    : mtbl(_mtbl)
  {
  }
  //! Invokes function by fetching it from MethodTable using index value of method.
  //! @tparam _MethodType Prototype of function that is present at given index.
  //! @tparam methodId Id of the method to invoke, it is actualy the index at which the function is present in the
  //! MethodTable.
  //! @tparam _TArgs All parameters that have to be passed to the function getting invoked.
  //! @note Throws std::bad_function_call() if MethodTable doesn't contain
  //! method at specified index or the fetched method is null.
  template <typename _MethodType, std::uint32_t methodId, typename... _TArgs>
  auto Invoke(_TArgs... args) const
  {
    auto method = GetMethod<_MethodType>(methodId);
    if (method == nullptr)
#ifndef __ZZ_CIB_NO_EXCEPTION
      throw std::bad_function_call();
#else
      assert(false && "Bad function call");
#endif
    return method(args...);
  }

private:
  //! Utility method to get method from MethodTable.
  //! @param methodId ID for which method has to be fetched.
  //! @return Method of type specified as template parameter.
  //! @warning returned value can be a nullptr.
  template <typename _MethodType>
  _MethodType GetMethod(std::uint32_t methodId) const
  {
    return reinterpret_cast<_MethodType>(__zz_cib_GetMTableEntry(mtbl, methodId));
  }

private:
  const __zz_cib_MethodTable* const mtbl;
};

} // namespace __zz_cib_

#endif

```

We will now see the usage of `__zz_cib_MethodTableHelper`.

### Helper class definition
We now move to the file that was included at the end of proxy class definition file that contains the specialization of `__zz_cib_Helper`.

**File**: exp/__zz_cib_internal/example-postdef.h. _Helper of proxy class_:

```c++
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
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_ExampleGetMethodTable(__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId))
  {}
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
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
};
}

```

The template parameter `::A` is because it is a specialization for `class A` and parameter `T` is just a trick to delay the template instantiation for specialization of `struct __zz_cib_Helper` until it is actually used. _Use of template parameter `T` can be ignored for understanding CIB architecture_.

We see that `struct __zz_cib_Helper<::A, T>` is derived from `__zz_cib_::__zz_cib_MethodTableHelper`. We have just seen `__zz_cib_MethodTableHelper`.
Notice that `struct __zz_cib_Helper<::A, T>` is a singleton which fetches MethodTable on construction and passes that to base __zz_cib_MethodTableHelper. As the name suggest, this class is helper of proxy class.

Amongst other things this has static methods `__zz_cib_New_0`, `__zz_cib_Copy_1`, `__zz_cib_Delete_2`, and `SomeFunc_3`. Some are templates just to make usage of compiler's capabilities rather than cib tool doing all the difficult work. These methods call `Invoke` of `__zz_cib_MethodTableHelper` by passing appropriate template parameters and also function parameters.

Now we are sufficiently equiped to see the implementation of methods of proxy class.

### Proxy class implementation

**File**: exp/example.cpp. _Implementation of proxy class methods_:

```c++
#include "example.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

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

As you can see that implementation is to just delegate calls to functions of `__zz_cib_Helper`.

First one is the constructor that constructs from `__zz_cib_AbiType` which is basically pointer to library side class and is opaque on the client side. This constructor is meant to be called from only CIB generated code.

Implementation of next three are mostly done by delegating to appropriate methods of `__zz_cib_Helper`. Implementation of constructors are slightly different. They endup calling the very first constructor by passing returned value of method calls of `__zz_cib_Helper`.

All parameters go through conversion using `__zz_cib_::__zz_cib_ToAbiType` before they are passed to methods of `__zz_cib_MyHelper`. The return value from methods of `__zz_cib_MyHelper` is also converted using `__zz_cib_::__zz_cib_FromAbiType`.

In the implementation of destructor `__zz_cib_MyHelper::__zz_cib_ReleaseHandle` is called which detaches opaque pointer from proxy class. In this example it has actually no effect but we will see this in use when inheritance is used.

## CIB Architecture in action

Let's see what happens when following code is executed by client program:

**File**: example-client.cpp:

```c++
#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  A a;
  CHECK(a.SomeFunc(10) == 11);
}

```

This is simple code but involves integration of two C++ components. CIB ensures that integration is compiler independent and ABI stable and so call sequence is different than what it would be when CIB is not involved.
Below is the call sequence diagram for this sample, it will elaborate more about what code generated by CIB does:

[//]: # (Source of following sequence diagram: https://lucid.app/lucidchart/e7a84f9b-c279-48ae-9f8d-f2607db428eb/edit?page=0_0#?folder_id=home&browser=icon)

![Call sequence for simpla-class example](https://github.com/satya-das/cib/blob/master/examples/0010-simple-class/readme-assets/SAMPLE-1.svg "Call sequence for sample-1")

As mentioned before, no compiler generated stuff are shared between components, and we can see method-table generated by CIB is the only thing that are shared by `library` and `client`. This is the way CIB achieves compiler independence.
This sequence diagram doesn't mention destrutor but destructor will have similar call sequence like other methods.

## ABI Compatibility
ABI Compatibility of library with client applications are possible because:
  - Only `__zz_cib_Example_GetMethodTable` is exported from library which is a pure C function.
  - Classes are not exported, instead `MethodTable` is exported for every class.
  - Function pointers in `MethodTable` use specific calling convention and the same convention is used by client.
  - For every type for which objects need to cross component boundary there is a corresponding `AbiType`.
  - Object of type `__zz_cib_AbiType_t<T>` crosses component boundary when object of type `T` is intended.
  - `__zz_cib_ToAbiType` and `__zz_cib_FromAbiType` are used to convert objects back and forth.


**This ends the explanation of our first example that shows how CIB achieves compiler independence. In other examples we will see CIB architecture in use in ascertaining ABI stability.**

