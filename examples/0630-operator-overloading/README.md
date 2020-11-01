## Example - A Simple Class
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
  int SomeFunc() { return x; }

private:
  int x {1};
};


```

**File**: src/example-client.cpp _Client's expectation from library_:

```c++
#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  A a;
  CHECK(a.SomeFunc() == 1);
}

```

**Please note that the client code is in form of automated test. It is written using `catch test framework`. I have chosen this way to clearly convey what we expect and also to use these code as automated tests.**

With this tiny library and client code we would like to see what pieces of CIB architecture should be there to make method call across component boundary in an ABI compatible way.

### Running CIB
CIB  is expected to be run with public headers that a library wants to publish.

Assuming `pub/` is the folder that contains public headers that library wants to publish. `exp/` is the folder where cib creates headers (and also some source files) that forms the part of published SDK. `cib/` is the folder where cib creates glue code for library. Library is expected to compile these sources as part of itself. `Example` is the name of the module (or library). It is a mandatory command line argument required by cib to define glue code.

Assuming current working directory is `examples/0010-simple-class/` we can run CIB as shown below:

```shell
cib -i pub/ -o exp/ -b cib/ -m Example
```

After above command we will see quite a good number of files created in folder cib/ and exp/.
We will go into the details of these files. Broadly there are 2 sets of files. One set is for library (files in folder `cib/`) that it will have to compile when it builds itself and other set (files in folder `exp/`) is for clients of the library to use.
Undoudtedly in this example we have a vividly simple class, but we do see lots of code getting generated. These codes are required for CIB to guarentee compiler independence and ABI stability. They are not complex but there are few pieces that we will look closer. Please brace yourself for a deep dive. :)

Let's first look at some of the fundamental types and definitions CIB uses in generated code.

### Symbol `__zz_cib_`
We are going to see CIB generate code that will contain lots of symbols that will start with `__zz_cib_` and there will be top level namespace with exact same name. CIB has chosen this so that:

  - Genearted code doesn't pollute global namespace.
  - Generated code doesn't clash with any possible name used in library or client code.
  - Since the name starts with double underscore it is expected that developers will stay away from directly using it. There are safeguards in place to not allow that even when developer wants to use them, but still it is better to not let developer think these symbols can be accessed.
  - In an ordered listing of symbols `__zz_cib_` should appear towards the end and so intellisense suggestions of IDE will possibly not contain it before some more meaningful symbols.
  - Uniqueness is not required but it is better not to pollute namespace used by core program. So, CIB puts all it's generated symbols inside an umbrella namespace `__zz_cib_` which is very unlikely to be the name used by core programs.

### MethodTable

CIB's basic functioning is that it doesn't let compiler generated ABI of C++ features of one component being used by another. CIB uses it's own simple ABI that only facilitates function call across component boundary. This ABI ensures compiler independence and also guarentees stability. Basically CIB uses MethodTable to facilitate function call across component. We will go into the detail of how it solves ABI compatibility and stability issues of C++ but let's first see the definition of MethodTable:

**MethodTable and helper function**:

**File**: cib/__zz_cib_Example-mtable.h and also **File**: exp/__zz_cib_internal/__zz_cib_Example-mtable.h:

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

Above we have definition of MethodTable and helper function to fetch method from method-table. So, basically MethodTable is an array of function pointers. This is the table that crosses component boundary instead of any other compiler generated ABI elements. We will see how but as of now it is enough to know what exactly is MethodTable.

#### Design choice of MethodTable (can be skipped in first reading)
MethodTable can have alternate design choice of being a `struct` of function pointers instead of array of function pointers. And that too can serve the purpose and in some cases be better. But CIB uses array for following reasons:
- Array helps in reducing total number of constructs. In case MethodTable is a struct of function pointers we will need many structs.
- Using array we can fetch function pointer by an index. Those index can be treated as function ID. If those ID is changed or removed it will be easy to detect and warn the library author of breaking the compatibility.
- With array we only export one function from library. In case of struct all the structs would have to be exported.

_Nevertheless `struct` MethodTable would have benefits too but I decided to use array._

#### Helpful macros
**Macro for import, export, and calling convention for functions**:
In the glue code we will see macros `__zz_cib_export`, `__zz_cib_import`, and `__zz_cib_decl`.

We will see `__zz_cib_export` used exactly once in generated code and that too in library glue code. That will tell us that the function for which it is used is the only function that will cross component boundary with it's *name*. All other functions cross component boundary only as function pointer. Since an exported function needs to be called by client there has to be a macro for import attribute of function. So we have `__zz_cib_import` too.

Like `__zz_cib_export` we will see `__zz_cib_import` used exactly once in generated code for client. That will tell us that the function for which it is used is the only function that will be imported with it's *name*. All other functions of library will be used by client only as function pointer.

`__zz_cib_decl` is needed to ensure both library and clients use same calling convention for calling functions across the component boundary. `stdcall` is chosen by default because that is what most compilers support. It can be changed to something different if library vendor wants to use other appropriate calling convention.

#### MethodTableHelper class

**File**: cib/__zz_cib_Example-mtable-helper.h and also **File**: exp/__zz_cib_internal/__zz_cib_Example-mtable-helper.h:

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

`class __zz_cib_MethodTableHelper` is used to easily invoke functions from method-table.

As you can guess these types are independent of headers that library wants to publish and so these are generated for all libraries. Now we will look into other parts of generated code that depend on header files of the library.

### Unique IDs for all entities.

**File**: cib/__zz_cib_Example-ids.h and also **File**: exp/__zz_cib_internal/__zz_cib_Example-ids.h:

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
    //#= int SomeFunc();
    SomeFunc_3 = 3,
    __zz_cib_nextMethodId = 4
  };
}}}


```

Every entity is given a unique integer ID. These integer values remain same irrespective of changes in the public headers. CIB reads these generated IDs in subsequennt runs and keeps the value unchanged while generating the IDs again in next run. *For allowing cib to keep the value unchanged `-c` or `--cib-ids-file` option should be used to pass the file-name of previously generated id-file to CIB*.
There are few points to note about this id file:

1. There is always a top level namespace with name `__zz_cib_`, reason for this is mentioned before.
2. There are namespaces with same name as class name (e.g. for class A there is a namespace A). That's the way CIB arranges IDs of entities. Going forward we will see lots of uses of namespace in code generated by CIB.
3. For every method IDs there is a comment starting with `//#=`. It is meant for next run of CIB which uses these comments to identify previously assigned IDs to methods. So, in the next run if the path of the ID file is provided to CIB it will ensure that IDs of entities don't change. **This is very important part of CIB that guarantees ABI stability of C++ componenets.**
4. ID names corresponding to methods end with an integer. It is for ensuring unique name for overloaded methods.
5. ID names are created for default constructor, copy constructor, and destructor even when they were not present in original class definition. We will shortly know why.
6. ID name for constructor starts with `__zz_cib_new`, for copy constructor it is `__zz_cib_copy`, and for destructor it is `__zz_cib_delete`. These are the names CIB gives.
7. There are some more symbols like `__zz_cib_next_class_id` and `__zz_cib_next_method_id`. They are for CIB to know what IDs to use for next entity.

### Library Glue Code
CIB will generate library glue code and library is expected to compile these source code while building itself. The aim here for CIB is to generate compiler independent and ABI stable glue code. So, for the `class A` following will be the generated library glue code:

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
  static __zz_cib_AbiType_t<int> __zz_cib_decl SomeFunc_3(::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::SomeFunc()
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

As mentioned earlier CIB uses namespace in plenty to isolate it's generated code from main code and also to avoid any possible name clashes.
There are mainly 2 parts in this file. In the first part we see plain C-style static functions that are implemented by just delegating to C++ methods. For example function `SomeFunc_3` is implemented by calling `::Example::A::SomeFunc()`. Similarly there are functions for constructors and destructor too and they call `new` and `delete`. As you can see these free functions are members of `namespace __zz_cib_Delegator`, as the name suggest these functions are there just to delegate.

The second part of this file defines a function `__zz_cib_GetMethodTable`.
The implementation of `__zz_cib_GetMethodTable` is to return a static table of methods. We will later see how this MethodTable is used by the client side glue code to implement classes that client would use but I want to make a point here that CIB guarentees that the items in the table will not be shuffled around when CIB is run again. **That's the backbone of how CIB guarentees ABI stability.** So, even when new methods are added to `class A` the new items in the MethodTable will only get added at the end irrespective of where the new method is added in the class. So, older client of library that were compiled with older SDK will continue working with new library if no existing methods are removed.

#### Function Name Suffix
If you notice the names of delegator functions in library glue code has suffix `_n`, where `n` is an integer. These numbers are IDs of respective functions. ID is appended in function names so that even if there are functions with same name we will end up with unique function names within one `__zz_cib_Delegator` namespace.

### Library Gateway function

**File**: __zz_cib_Example-gateway.cpp:

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

We see implementation of function `__zz_cib_Example_GetMethodTable`. *`Example` in name is because it is the name of module supplied as value of `-m` command line parameter*. This function is like gateway for client to access all functionality of the library. This function returns the MethodTable for a given class-id. In previous section we had already seen implementation of `__zz_cib_GetMethodTable` for classes which is called from here. Since our trivial example had just one class there is just one `case` statement, had there been more classes there would have been more case statements. In later examples we will see those cases as well.

Now we will visit code that will be part of SDK and will be used by clients.

### Import of library gateway function
Let's begin to look at client side with the part that imports library gateway function.

**File**: __zz_cib_Example-def.h:

```c++
#pragma once

#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-import.h"
#include "__zz_cib_Example-mtable.h"

extern "C" __zz_cib_import const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl
                                                                  __zz_cib_ExampleGetMethodTable(std::uint32_t classId);

```

As you can see it is counter part of what library code defined which had used `__zz_cib_export` instead of `__zz_cib_import`. With this declaration client code gets access to `__zz_cib_Example_GetMethodTable` and we will shortly see use of this below.

### SDK Headers and Proxy Classes
Now we will look into the headers that will be used by client developers. This is the only part of generated code that is meant to be seen by developers and so CIB tries to keep this as close to original as possible. Below is the header for  `class A` that CIB produced from the header library developer wanted to publish.

#### Proxy class definition
**File**: example.h:

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
  int SomeFunc();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"

```

You can notice certain differences between this class and the original class in folder pub/. Below is the diff between original and cib generated header:

```diff
--- pub/example.h
+++ exp/example.h
@@ -1,20 +1,22 @@
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
-  int SomeFunc() { return x; }
+  int SomeFunc();
 
 private:
-  int x {1};
+  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
 };
 
+#include "__zz_cib_internal/example-postdef.h"

```

We can see that the header is *almost* same as original, except some "hook points" that CIB inserted. There is one file inclusion in the beginning and one at the end. Class definition is same functionality wise. CIB added *missing* default constructor, copy constructor, destructor and also a move constructor. A macro `__ZZ_ CIB _CLASS_INTERNAL_DEF` is also inserted in private section of the class. *The `private:` before __ZZ_ CIB _CLASS_INTERNAL_DEF is a lie, we will later see why.* These extra insertions in the header certainly makes the header a bit ugly but they are worth the price because they add lots of value which were simply not present earlier. 

### Client side glue code
Now, let's have a look at the `predef` file that is `#include`d in the beginning.

**File**: __zz_cib_internal/example-predef.h:

```c++
#pragma once
#include "__zz_cib_internal/__zz_cib_Example-class-internal-def.h"

```

We see a #include and forward declarations of `struct __zz_cib_Helper`, and `struct __zz_cib_Delegator`. __zz_cib_Helper class is the one that will do most of the heavy lifting. It is there to take away all the dirty details and keep the client facing header as clean as possible. We will look into that in next part. __zz_cib_Delegator is the struct that is needed when the class is an interface like class. We will see use of that in other example. Let's see what is the definition of the macro `__ZZ_ CIB _CLASS_INTERNAL_DEF` that is present inside the class.

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
 * @def __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC
 * Defines common elements all proxy classes should have.
 */
#define __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(className, fullName)                                                      \
public:                                                                                                                \
  using __zz_cib_AbiType = class __zz_cib_Opaque*;                                                                     \
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
  __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(className, fullName)                                                            \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_TEMPLATE_CLASS_INTERNALS
 * Allows cib to add it's hook in proxy template specialization classes in a minimally invasive way.
 */
#define __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(className, fullName)                                                         \
  __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))                  \
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

Macro `__ZZ_ CIB _CLASS_INTERNAL_DEF` adds a protected constructor, declares `__zz_cib_Helper` as a friend class and adds a private data member. The data member `__zz_cib_h_` is the opaque pointer of original class that is created on library side. The constructor is to construct object from opaque pointer. We call client facing class as proxy class because the "real" object is on the library side and the proxy class only holds an opaque pointer of that.

#### Helper class definition
We will now move to see the content of file that was #include'd at the end of proxy class definition file.

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
  template <typename _RT>
  static auto SomeFunc_3(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SomeFunc_3>(
      __zz_cib_obj
      );
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

This file contains definition of `struct __zz_cib_Helper`.

We see that class `__zz_cib_::Example::A::__zz_cib_Helper` is derived from `__zz_cib_::__zz_cib_MethodTableHelper`, and `__zz_cib_HandleHelper`. We had already seen __zz_cib_MethodTableHelper before. `__zz_cib_HandleHelper` has methods to convert handle to proxy class and vice versa.
Notice that class `__zz_cib_::Example::A::__zz_cib_Helper` is a singleton which fetches MethodTable on construction and passes that to base __zz_cib_MethodTableHelper. The implementation of methods are done by delegating calls to function whose pointer is fetched using `getMethod<>()`. As the name suggest, this class is helper of proxy class.

#### Proxy class implementation
We will next see use of this class in implementation of methods.

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

int A::SomeFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SomeFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


```

This file contains the implementation of proxy class methods. As you can see that implementation is to just delegate calls to functions of MethodTable. Use of `__zz_cib_Helper` is just to make it easy to deal with MethodTable and handle objects.

First one is the constructor that constructs from opaque handle. This constructor is meant to be called from only CIB generated code. The next is a move constructor that CIB almost always geneartes. Since the proxy class holds handle of original class it makes sense for this optimization of always defining move constructor. There is one exception to that, if move constructor is deleted in original class definition then it is deleted in proxy class too.
Implementation of next three are mostly about delegating to methods of `__zz_cib_Helper`. Implementation of constructors are slightly different. They endup calling the very first constructor by passing returned value of method calls of `__zz_cib_Helper`.
Let's see what happens when following code is executed by client program:

**File**: example-client.cpp:

```c++
#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  A a;
  CHECK(a.SomeFunc() == 1);
}

```

This is simple code but involves integration of two C++ components. CIB ensures that integration is compiler independent and ABI stable and so call sequence is different than what it would be when CIB is not involved.
Below is the call sequence diagram for this sample, it will elaborate more about what code generated by CIB does:
![Call sequence for simpla-class example](https://github.com/satya-das/cib/blob/master/examples/0010-simple-class/readme-assets/SAMPLE-1.svg "Call sequence for sample-1")

As mentioned before, no compiler generated stuff are shared between components, and we can see method-table generated by CIB is the only thing that are shared by `library` and `client`. This is the way CIB achieves compiler independence.
This sequence diagram doesn't mention destrutor but destructor will have similar call sequence like other methods.


**This ends the explanation of our first example that shows how CIB achieves compiler independence. We will now move on to next example to see what happens to classes with virtual methods.**

