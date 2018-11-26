Component Interface Binder (CIB)
================================

# CIB

**In a nutshell CIB is the answer to the problem for which C is used for exporting APIs of an application/library even when the application/library itself uses C++ for most of its implementation. C++ is great in expressing API but compiler generated ABI makes it difficult to use to publish compiler independent and forward compatible SDK.**

## Abstract
*Because there is no way for C++ to be ABI compatible programmers use C for exporting APIs that can be called from across a component boundary.  
There are some proposals about standard C++ ABI, like [Itanium C++ ABI](http://mentorembedded.github.io/cxx-abi/), that if used by all compilers and that does not change based on compiler switch, will make the situation better but still much will be left unsolved.  
A C++ class definition also contains private methods which a programmer may not want its client to see. Also, change in data members, even private members, will introduce incompatibility. So, a C++ programmer will have to use a design pattern like [bridge](en.wikipedia.org/wiki/Bridge_pattern) or segregation of interface and implementation as used in COM. There will be other problems too, like some changes in libray can make client program incompatible, forward and backward compatibility are something that will not be supported by just making all compilers generate same ABI for C++ programs.
CIB doesn't only solve the incompatible ABI problem, but also makes component resilient against non-breaking changes, and supports forward and backward compatibility. CIB supports all these without enforcing use of any particular design pattern or new way of writing program. CIB does not use low level compiler tricks, it does not try to exploit how any compiler implements C++ language feature. Basically CIB uses plain basic C/C++ to provide all its functionality.*

1\.  [Overview](#overview)  
2\.  [CIB Features:](#cibfeatures:)  
3\.  [CIB Goals](#cibgoals)  
4\.  [CIB Stretch goals (may be future goals)](#cibstretchgoalsmaybefuturegoals)  
5\.  [Other Solutions](#othersolutions)  
6\.  [Non breaking changes](#nonbreakingchanges)  
7\.  [CIB Architecture](#cibarchitecture)  
8\.  [How CIB works](#howcibworks)  
8.1\.  [Example](#example)  
9\.  [Building CIB](#buildingcib)  
10\.  [Feature Progress](#featureprogress)  
11\.  [CIB Terminology](#cibterminology)  
11.1\.  [Inline Class](#inlineclass)  
11.2\.  [Shared Class](#sharedclass)  
11.3\.  [Facade Class](#facadeclass)  
11.4\.  [Interface Class](#interfaceclass)  
11.5\.  [Proxy Class](#proxyclass)  
11.6\.  [Handle](#handle)  
12\.  [Running CIB](#runningcib)  
13\.  [Disection of CIB generated code](#disectionofcibgeneratedcode)  
13.1\.  [Example-1: A Simple Class](#example-1:asimpleclass)  
13.2\.  [Symbol __zz_cib_](#symbol__zz_cib_)  
13.3\.  [Method Table](#methodtable)  
13.3.1\.  [Unique IDs for all entities.](#uniqueidsforallentities.)  
13.3.2\.  [Library Glue Code](#librarygluecode)  
13.3.3\.  [Library Gateway function](#librarygatewayfunction)  
13.3.4\.  [Import of library gateway function](#importoflibrarygatewayfunction)  
13.3.5\.  [SDK Headers and Proxy Classes](#sdkheadersandproxyclasses)  
13.4\.  [Example-2: Virtual function and runtime polymorphism:](#example-2:virtualfunctionandruntimepolymorphism:)  
13.5\.  [Example-3: Facade Classes and RTTI:](#example-3:facadeclassesandrtti:)  
13.6\.  [Example-4: Interface Classes:](#example-4:interfaceclasses:)  
13.7\.  [Example-5: Template Classes:](#example-5:templateclasses:)  
14\.  [Implementation Details](#implementationdetails)  
14.1\.  [Parsing Technique](#parsingtechnique)  
14.2\.  [Creating proxy class from handle](#creatingproxyclassfromhandle)  

<a name="overview"></a>

## 1\. Overview
CIB is an automated way to generate code that allows one binary component to use classes and functions defined in another binary component that may be built using different compiler.
For example it can be used by an application program to export C++ SDK which can be used to write plugins of the application. And plugin writers don't need to use exactly same compiler that was used to build the application. Since ABI compatibility and forward compatibility cannot be guaranteed by C++ compilers, we can use CIB to publish C++ SDK of an application.

*In this document the binary component that exposes its classes will be called Library, a library can be an executable or a DLL/SO. The component that uses SDK of the library will be called client of that library.*

<a name="cibfeatures:"></a>

## 2\. CIB Features:
  - Clients don't need to recompile just because library headers are modified unless breaking changes are done by library.
  - Clients of library will keep working, without recompiling, with new version of library.
  - Newer library will work with older library.
  - Functions, methods (including virtual methods) can be reordered in SDK without breaking ABI compatibility. **This feature of CIB makes it superior to any other solution we know.**
  - Clients can use library provided classes without linking with the library at compile time.
  - Clients and library will remain compatible even when there are changes that generally make them incompatible. Lists of such changes are mentioned below. **This too is something that no ABI compatible standard will be able to support.**

 **Some of these features are provided by COM. But CIB has other advantages over COM.**

  - Clients can define new classes by deriving from concrete classes provided by library (*note that it is made possible even when complete class definition is not available to client*).
  - No need to write interface definition files (.idl/.odl files).
  - No need to maintain order of virtual functions across releases.
  - No need to maintain order of data members of structs.
  - No need to have a size member in struct. *This is a big hack almost all C/C++ library uses*.
  - No need to declare all functions as pure virtual. CIB allows a class to export all kind of methods like static, virtual, pure virtual, inline etc. Only thing is that an inline function will actually make a proper function call when called from across the component boundary.
  - CIB, unlike COM, works on all platforms.

 **CIB allows client of a library to use all exported classes as if those classes are part of the client code itself without exposing the internals of classes.**

<a name="cibgoals"></a>

## 3\. CIB Goals
 - To become an easier and superior alternative of COM used as in-proc.
 - To work on all platforms without any gotcha.
 - Client that is written using traditional linking with library can easily migrate to **CIB**. This requires that CIB should be designed in such a way that it should not have any footprint in the code of client as well as library. There will ofcourse be a small boiler plate code on both side but that's about it, the rest of the code will remain aloof about existence of CIB.

<a name="cibstretchgoalsmaybefuturegoals"></a>

## 4\. CIB Stretch goals (may be future goals)
 - To become an easier and superior alternative of out-proc COM.
 - To become an easier and superior alternative of DCOM.

<a name="othersolutions"></a>

## 5\. Other Solutions
I have come across some solutions that try to solve the same problem but none of them is good enough. Some wants you to write separate layer on top of existing classes so that vtable is exported across component boundary in a portable manner or some exploits how compiler behaves and uses hacks to achieve goals or some is too specific to the project it was developed for.

 - **CppComponent**: It basically uses hand written vtable to solve ABI problem. It looks like a clone of COM without idl. More details can be found here: https://github.com/jbandela/cppcomponents.
 - **DynObj**: It exploits how compiler implements vtable. For details here: http://dynobj.sourceforge.net.
 - **Libcef's translator**: Its a python script that parses C++ headers to produce automatic C layer for client and library. But it is too much specific to libcef and cannot be used in other project.
 
 **And none of these solutions I am aware of are for forward compatibility, they only target ABI compatibility for different compilers.** This is my understanding, of course I can be wrong.

<a name="nonbreakingchanges"></a>

## 6\. Non breaking changes
  Some changes are conceptually unimportant for clients of a library but they break binary compatiblity of library and client. CIB makes client resilient against such changes and so client and library remain binary compatible even when such changes are made. Below is a list of changes that don't affect compatibility of client and library if SDK is published using CIB:
- Any change in internal data member of a class.
- Addition of new virtual methods anywhere in the class.
- Change in order of virtual functions of a class.
- Change in inheritance that doesn't violate previous is-a relationship. For example:
    - if a class starts deriving from one more base class without removing previous base class.
    - if a class changes it's base class to another derived class of it's previous base class.
    - inheritance type is changes to/from `virtual` inheritance.
- Change in `inline`ness of a function. For CIB generated SDKs all inline functions are basically non-inlined and so it doesn't make any difference if `inline`ness of a function is changed.
- Change in parameter type from by-value to by-const-ref or vice verse. Client shouldn't bother if the passed parameter is passed by value or by const-ref (ignoring performance concern of course).

We have been accepting incompatibility of library and client after such changes are done because we justify it from implementation point of view. For a second, just refuse to go into the detail of how C++ language features are implemented by compilers and demand for adherence to the contract a library makes through it's APIs. For example if SDK header contains `class A` that inherits from `class B`, all it says is `class A` has is-A relation with `class B`. That is-A relation is still intact if `class A` starts inheriting from yet another class. Another example can be addition of new virtual function. Making client incompatible in such cases is like breaking the previous deal. `cib` makes sure a deal once made is not broken just because compiler choses to break it. If the deal has to be broken it would be broken by library developer explicitly.

<a name="cibarchitecture"></a>

## 7\. CIB Architecture
**Or rather the architecture CIB produces for integration of library and it's client**

![Integration architecture produced by CIB](cib_design.png "Integration architecture produced by CIB")

**CIB achieves all its functionalities by using few simple design rules:**

1. CIB produces glue code for both library and clients.
2. Library side glue code creates method tables for all compound objects like class/struct/union/namespace.
3. Client side glue code only uses opaque pointer and function pointer of method-tables that are exported by library.
4. Only PODs cross component boundary.
5. All function calls between two CIB layers (i.e. library glue code and client glue code) use calling convention that is supported by all compilers, e.g. **__stdcall** convention for x86 architecture.
6. Pointer of an object belonging to one binary component is never dereferenced by another and they are only treated as opaque objects.
7. Virtual function table of one component is not directly accessed by another component.
8. CIB generates table of functions called MethodTable that are independent of compiler and remain binary compatible because new functions are only added at the end and removal of function does not affect other functions.

All in all `cib` avoids sharing of compiler generated problematic stuffs across component boundary. Below is the list of such compiler generated stuffs:
1. Mangled function name.
2. Virtual function table.
3. Object layout.
4. Underlying integer type of `enum`.
5. RTTI.
6. Funnction calling mechanism which is affected by function calling convention. For this problem `cib` just uses same calling convention for both library and clients.

<a name="howcibworks"></a>

## 8\. How CIB works
 Following are the broad things that CIB does:

  - CIB parses all public header files of library and creates two sets of files.
  - One set of files should be compiled with the library. We will call it library side glue code
  - The other set should be used by the client of the library. This is client side glue code.
  - Library side glue code defines raw C APIs for all functions including class methods, constructors, and destructors.
  - Implementation of such C APIs are just to delegate the call to original function/method/constructor/destructor/etc.
  - All C APIs are assigned an integer value as its ID. This ID for an API will remain same across releases.
  - For every class/struct/union/namespace a **MethodTable** is defined which is basically an array of function pointers.
  - Library side glue code exports a C function that returns **MethodTable** for given class/struct/union/namespace ID.
  - Class definitions for client is generated with same class-name but without any data member other than an opaque pointer to original class defined by library. In *CIB terminology* classes that are seen by client are called **proxy-classes** and the opaque pointer held by proxy-class is called **handle**. This is basically pimpl pattern (aka bridge pattern) with pimpl pointing to object across component boundary.
  - Function ID is used as an index to fetch function pointer from **MethodTable**.
  - Implementation of all functions including class methods, constructors, and destructors for classes at client side are provided by means of invoking function pointer.

<a name="example"></a>

### 8.1\. Example
For working example see projects **shape** and **draw** in test folders.

**shape** is the library that provides definition of various shape classes, like Circle, Rectangle, etc.  
**draw** is the client of **shape** that uses it to draw various shapes inside a window.  
Folder **shape/pub** contains files that shape library wants to make public.

When **cib.exe** is run as pre-build steps of **shape** project it creates files in **shape/cib** and **shape/exp**. These generated files uses files in **shape/pub** as input.   
Files in **shape/cib** are meant for **shape** library to compile with it.  
Files in **shape/exp** are meant for **draw** project to compile.

Look at files in **shape/cib** and **shape/exp** folders to know how exactly **CIB** makes it possible to use C++ as an interface between two binary components even when C++ comes with inherent ABI incompatibility problem.

<a name="buildingcib"></a>

## 9\. Building CIB
To build CIB you need to pull **common**, **cppparser**, and **cib** source code in such a way that you get folders with these names in same parent folder. Basically you need to run git clone in same folder for all these projects.

<a name="featureprogress"></a>

## 10\. Feature Progress

| Feature                           | Description | Status |
| --------------------------------- | :---------- | :----- |
| Basic                             | CIB should work for a simple library that exports some classes with virtual functions. | Done |
| Function overloading              | Same named functions of a class should be seamlessly exported. | Done |
| Function overridding              | Allow library to use interface implemented by client. | Done |
| Forward compatibility of client   | Older client works with newer library. | Done |
| Forward compatibility of library  | Library should be forward compatible with newer client. | Done |
| Backward compatibility of client  | When newer client invokes a method present only in new SDK then std::bad\_function\_call exception will be thrown. Clients that want to be backward compatible should handle this exception when invoking methods present only in newer SDK. | Done |
| Backward compatibility of library | When library invokes a method of interface implemented by only newer client then std::bad\_function\_call exception will be thrown. Library developer should be aware about this to remain backward compatible when invoking new methods of it's own public interface. | Done   |
| Create correct proxy class        | A base class pointer returned by an API of library may actually be pointing to an object of a derived class. At client side we should create proxy class of exact same type to which the returned pointer is pointing to. It is needed so that dynamic_cast at client side should work as expected. | Done |
| Operator overloading              | It is common for C++ classes to have overloaded operators. | Done |
| Simple Template class support     | Support for simple template classes when it crosses component boundary. Simple template means without template template argument, or any of other fancy stuff. ||
| Return existing proxy class       | If a function returns pointer or reference of object for which proxy class already exists then existing proxy class should be returned. |
| Rvalue reference parameter        | RValue references need to cross component boundary. |
| Enum and enum classes             | Enums used as parameter or return type. |
| STL classes                       | It is common for a C++ programs to use stl classes. CIB should make it possible to export STL classes in the same way it does for every other classes. |
| Exception support                 | Make exception object travel across component boundary in a compatible way. |
| Support for intrusive pointer     | Many libraries use intrusive pointer to manage object life cyle and functions can return smart pointer for intrusively managed reference count of object. |
| Support shared_ptr and unique_ptr | Modern C++ programing expects these to be used more often. |
| Support struct                    | Automatically add getter/setter for public data members. |
| Support struct in a better way    | Add smart objects as data members in proxy classes so that user does not need to explicitly call getter and setter for public data members defined in class/struct exported by library. Instead, user can write code as if the structs are locally defined. |
| Support exporting protected methods ||
| Multiple library integration      | A program can use 2 cibified libraries which are also interdependent. Objects of one library can be passed to another|

---

<a name="cibterminology"></a>

## 11\. CIB Terminology
<a name="inlineclass"></a>

### 11.1\. Inline Class
A class that has all methods inline. *For example a template class is surely an inline class*.
<a name="sharedclass"></a>

### 11.2\. Shared Class
A C++ class that crosses component boundary: *if there exists a public function that returns an object/pointer/reference of a C++ class or takes an object/reference/pointer as parameter then such class is called a shared class*.
<a name="facadeclass"></a>

### 11.3\. Facade Class
A C++ class that acts as facade for other classes: *A class that has public virtual method and there exists public function/method that returns a pointer/reference of this class*.
<a name="interfaceclass"></a>

### 11.4\. Interface Class
A C++ class that has public virtual method and there exists a way for library to call methods of an object of class defined by client.
*A simplest example can be that when a C++ class that has public virtual method and there is a function that accepts pointer/reference of that class as parameter*.
<a name="proxyclass"></a>

### 11.5\. Proxy Class
For each public class of a library CIB produces another class with same name and methods but with small changes so that `cib` can do it's job that it promises to do. Such client usable classes are called proxy classes because they act as a proxy of original class to the client.
<a name="handle"></a>

### 11.6\. Handle
Each proxy class instance owns opaque pointer of the original class. Such opaque pointer are called handle.

<a name="runningcib"></a>

## 12\. Running CIB
CIB is expected to be run with public headers that a library wants to publish.
Below is the example of running cib:

```shell
cib -i pub/ -o exp/ -b cib/ -m Example
```

Assuming `pub/` is the folder that contains public headers that library wants to publish. `exp/` is the folder where cib creates headers (and also some source files) that forms the part of published SDK. `cib/` is the folder where cib creates glue code for library. Library is expected to compile these sources as part of itself. `Example` is the name of the module (or library). It is a mandatory command line argument required by cib to define glue code.

<a name="disectionofcibgeneratedcode"></a>

## 13\. Disection of CIB generated code
For better understanding of what CIB does we will consider examples to see what will happen if we want to publish SDK using CIB. We will start with trivial example and slowly build on that to understand what `cib` will do in more complex cases. Most part of code generated by `cib` are solely for compilers. Developers (of both library and client) don't even need to look into them. But we will look into generated code to understand internal working of `cib`.
**Note**: All examples mentioned below are real programs, however tiny, they are working piece of code and also serve the purpose of testing `cib`.

<a name="example-1:asimpleclass"></a>

### 13.1\. Example-1: A Simple Class
To begin with we will consider following example:

[**File: pub/example.h**]:

```c++
#pragma once

//! Contains example definitions to explain cib's functioning
namespace Example
{
  //! A vividly trivial class
  //! Contains just a simple method.
  class A
  {
  public:
    //! Doesn't do anything meaningful
    //! @note It is just for explaining how cib works.
    void SomeFunc();
  };
}


```

Assuming current working directory is `examples/example1/` we can run `cib` as shown below:

```shell
cib -i pub/ -o exp/ -b cib/ -m Example
```

After above command we will see quite a good number of files created in folder cib/ and exp/.
We will go into the details of these files. Broadly there will be 2 sets of files. One set is for library (files in folder `cib/`) that it will have to compile when it builds itself and other set (files in folder `exp/`) is for clients of the library to use.
Undoudtedly in this example we have a vividly simple class, but we do see lots of code getting generated. These codes are required for `cib` to guarentee compiler independence and forward compatibility. They are not complex but there are few pieces that we will look closer. Please brace yourself for a deep dive. :)

Let's first look at some of the fundamental types and definitions `cib` uses in generated code.

<a name="symbol__zz_cib_"></a>

### 13.2\. Symbol __zz_cib_
We are going to see `cib` generate code that will contain lots of symbols that will start with `__zz_cib_` and there will be top level namespace with exact same name. `cib` has chosen this so that:
    - Genearted code doesn't pollute global namespace.
    - Generated code doesn't clash with any possible name used in library or client code.
    - Since the name starts with double underscore it is expected that developers will stay away from directly using it.
    - In an ordered listing of symbols `__zz_cib_` should appear towards the end and so intellisense suggestions of IDE will possibly not contain it before some more meaningful symbols.
    - Symbol `__zz_cib_` is expected to be unique because no one in his/her right mind will use this symbol for other purpose. :)

<a name="methodtable"></a>

### 13.3\. Method Table

`cib`'s basic functioning is that it doesn't let compiler generated problematic stuff cross component boundary. Compiler generates many things and among them are mangled function name and virtual tables. `cib` bypasses the use of mangled function name and virtual table by having it's own table of functions that in cib's terminology is called method table. So, `cib` uses mechanism to use method table instead of mangled function name and virtual function table. Let's look at what this method table is exactly:

**Method table and helper function**:

[**File: cib/__zz_cib_Example-mtable.h** and also **File: exp/__zz_cib_internal/__zz_cib_Example-mtable.h**]:

```c++
#ifndef __zz_cib_MethodTable_defined

#  include "__zz_cib_Example-decl.h"

#  include <cassert>
#  include <cstdint>

namespace __zz_cib_ {

//! Generic type for function pointer.
using __zz_cib_MTableEntry = int(__zz_cib_decl*)();
using __zz_cib_MethodArray = const __zz_cib_MTableEntry*;

extern "C" struct __zz_cib_MethodTable
{
  const __zz_cib_MethodArray methods;
  const std::uint32_t        numMethods; //!< Number of methods in method table.
};

//! Fetches method from a method table
//! @param mtbl Method table from which to fetch the method.
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

#  define __zz_cib_MethodTable_defined
#endif

```

Above we have definition of method table and helper function to fetch method from method-table. So, basically method table is an array of function pointers. This is the table that crosses component boundary instead of mangled function name or virtual table. We will see how but as of now it is enough to know what exactly is method table.

**Macro for export function attribute**:

[**File: cib/__zz_cib_Example-export.h**]:

```c++
//! @def __zz_cib_export
//! Function attribute that makes symbol externally visible
#ifdef __zz_cib_export
#  undef __zz_cib_export
#endif

#if defined _WIN32 || defined __CYGWIN__
#  ifdef __GNUC__
#    define __zz_cib_export __attribute__((dllexport))
#  else
#    define __zz_cib_export __declspec(dllexport)
#  endif
#else
#  if __GNUC__ >= 4
#    define __zz_cib_export __attribute__((visibility("default")))
#  else
#    define __zz_cib_export
#  endif
#endif

```

We will see `__zz_cib_export` used exactly once in generated code and that too in library glue code. That will tell us that the function for which it is used is the only function that will cross component boundary with it's *name*. All other functions cross component boundary only as function pointer. Since an exported funtion needs to be called by client there has to be a macro for import attribute of function. So, let's see that:

**Macro for import function attribute**:

[**File: exp/__zz_cib_internal/__zz_cib_Example-import.h**]:

```c++
//! @def __zz_cib_import
//! Function attribute that makes external symbol accessible
#ifdef __zz_cib_import
#  undef __zz_cib_import
#endif

#if defined _WIN32 || defined __CYGWIN__
#  ifdef __GNUC__
#    define __zz_cib_import __attribute__((dllimport))
#  else
#    define __zz_cib_import __declspec(dllimport)
#  endif
#else
#  if __GNUC__ >= 4
#    define __zz_cib_import __attribute__((visibility("default")))
#  else
#    define __zz_cib_import
#  endif
#endif

```

Like `__zz_cib_export` we will see `__zz_cib_import` used exactly once in generated code for client. That will tell us that the function for which it is used is the only function that will be imported with it's *name*. All other functions of library will be used by client only as function pointer.

**Macro to define calling convention**:

[**File: cib/__zz_cib_Example-decl.h** and also **File: exp/__zz_cib_internal/__zz_cib_Example-decl.h**]:

```c++
//! @def __zz_cib_decl
//! Calling convention to be used for functions
//! called from across component boundary
#ifdef __zz_cib_decl
#  undef __zz_cib_decl
#endif

#ifdef __GNUC__
#  define __zz_cib_decl __attribute__((stdcall))
#elif defined(_WIN32)
#  define __zz_cib_decl __stdcall
#endif

```

`__zz_cib_decl` is needed to ensure both library and clients use same calling convention for calling functions across the component boundary. `stdcall` is chosen by default because that is what most compilers support. It can be changed to something different if library vendor wants to use other appropriate calling convention.

**Type definiton of opaque pointers used by client**:

[**File: exp/__zz_cib_internal/__zz_cib_Example-handle.h**]:

```c++
#pragma once

namespace __zz_cib_ {

//! Objects of classes defined by library travels to client as handles.
//! Only object pointers travel across component boundary and objects of library
//! go to client as opaque pointer of __zz_cib_HANDLE.
class __zz_cib_HANDLE;

} // namespace __zz_cib_

```

**Type definiton of opaque pointers used by library**:

[**File: cib/__zz_cib_Example-proxy.h**]:

```c++
#pragma once

namespace __zz_cib_ {

//! Objects of classes defined by client travels to library as proxies.
//! Only object pointers travel across component boundary and objects of client
//! go to library as opaque pointer of __zz_cib_PROXY.
class __zz_cib_PROXY;

} // namespace __zz_cib_

```

As I have mentioned earlier that `cib` doesn't let compiler generated "problematic" stuff to cross component boundary. Among those stuff is object layout too. `cib` uses opaque pointer for objects belonging to other component and completely avoids accessing compiler generated object layout of another component. For this purpose `cib` defines `__zz_cib_HANDLE` and `__zz_cib_PROXY` to represent library side and client side objects to vice versa in opaque manner.

**MethodTableHelper class**

[**File: cib/__zz_cib_Example-mtable-helper.h** and also **File: exp/__zz_cib_internal/__zz_cib_Example-mtable-helper.h**]:  

```c++
#include "__zz_cib_Example-mtable.h"

#ifndef __zz_cib_MethodTableHelper_defined
#  include <functional>

namespace __zz_cib_ {

//! Helps in using method table.
class __zz_cib_MethodTableHelper
{
public:
  __zz_cib_MethodTableHelper(const __zz_cib_MethodTable* _mtbl)
    : mtbl(_mtbl)
  {
  }
  //! @note Will throw std::bad_function_call() if method table doesn't contain
  //! method or the fetched method is null.
  template <typename _MethodType, typename... _TArgs>
  auto invoke(std::uint32_t methodId, _TArgs... args) const
  {
    auto method = getMethod<_MethodType>(methodId);
    if (method == nullptr)
      throw std::bad_function_call();
    return method(args...);
  }

private:
  //! Utility method to get method from method table.
  //! @param methodId ID for which method has to be fetched.
  //! @return Method of type specified as template parameter.
  //! @warning returned value can be a nullptr.
  template <typename _MethodType>
  _MethodType getMethod(std::uint32_t methodId) const
  {
    return reinterpret_cast<_MethodType>(__zz_cib_GetMTableEntry(mtbl, methodId));
  }

private:
  const __zz_cib_MethodTable* const mtbl;
};

} // namespace __zz_cib_

#  define __zz_cib_MethodTableHelper_defined
#endif

```

`class __zz_cib_MethodTableHelper` is used to easily invoke functions from method-table.

As you can guess these types are independent of headers that library wants to publish and so these are generated for all libraries. Now we will look into other parts of generated code that depend on header files of the library.

<a name="uniqueidsforallentities."></a>

#### 13.3.1\. Unique IDs for all entities.

**File: cib/__zz_cib_Example-ids.h** and also **File: exp/__zz_cib_internal/__zz_cib_Example-ids.h**:

```c++
// DO NOT EDIT THIS FILE

#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 2 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new_0 = 0,
    //#= A(const ::Example::A&);
    __zz_cib_copy_1 = 1,
    //#= ~A();
    __zz_cib_delete_2 = 2,
    //#= void SomeFunc();
    SomeFunc_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}}


```

Every entity is given a unique integer ID. These integer values remain same irrespective of changes in the public headers. `cib` reads these generated IDs in subsequennt runs and keeps the value unchanged while generating the IDs again in next run. *For allowing cib to keep the value unchanged `-c` or `--cib-ids-file` option should be used to pass the file-name of previously generated id-file to `cib`*.
There are few points to note about this id file:

1. There is always a top level namespace with name `__zz_cib_`, reason for this is mentioned before.
2. There are namespaces with same name as class name (e.g. for class A there is a namespace A). That's the way `cib` arranges IDs of entities. Going forward we will see lots of uses of namespace in code generated by `cib`.
3. For every method IDs there is a comment starting with `//#=`. It is meant for next run of `cib` which uses these comments to identify previously assigned IDs to methods. So, in the next run if the path of the ID file is provided to `cib` it will ensure that IDs of entities don't change. **This is very important part of `cib` that guarantees forward compatibility of C++ componenets.**
4. ID names corresponding to methods end with an integer. It is for ensuring unique name for overloaded methods.
5. ID names are created for default constructor, copy constructor, and destructor even when they were not present in original class definition. We will shortly know why.
6. ID name for constructor starts with `__zz_cib_new`, for copy constructor it is `__zz_cib_copy`, and for destructor it is `__zz_cib_delete`. These are the names`cib` gives.
7. There are some more symbols like `__zz_cib_next_class_id` and `__zz_cib_next_method_id`. They are for `cib` to know what IDs to use for next entity.

<a name="librarygluecode"></a>

#### 13.3.2\. Library Glue Code
`cib` will generate library glue code and library is expected to compile these source code while building itself. The aim here for `cib` is to generate compiler independent and forward compatible glue code. So, for the `class A` of example-1 following will be the generated library glue code:

**File: cib/example.h.cpp**:

```c++
#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace A {
static ::Example::A* __zz_cib_decl __zz_cib_new_0() {
  return new ::Example::A();
}
static ::Example::A* __zz_cib_decl __zz_cib_copy_1(const ::Example::A* __zz_cib_param0) {
  return new ::Example::A(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_2(::Example::A* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl SomeFunc_3(::Example::A* __zz_cib_obj) {
  __zz_cib_obj->::Example::A::SomeFunc();
}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&SomeFunc_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}

```

As mentioned earlier `cib` uses namespace in plenty to isolate it's generated code from main code and also to avoid any possible name clashes.
There are mainly 2 parts in this file. In the first part we see plain C-style static functions that are implemented by just delegating to C++ methods. For example function `SomeFunc_3` is implemented by calling `::Example::A::SomeFunc()`. Similarly there are functions for constructors and destructor too and they call `new` and `delete`.
The second part of this file defines a function `__zz_cib_GetMethodTable`.
The implementation of `__zz_cib_GetMethodTable` is to return a static table of methods. We will later see how this method table is used by the client side glue code to implement classes that client would use but I want to make a point here that `cib` guarentees that the items in the table will not be shuffled around when `cib` is run again. **That's the backbone of how `cib` guarentees forward compatibility.** So, even when new methods are added to `class A` the new items in the method table will only get added at the end irrespective of where the new method is added in the class. So, older client of library that were compiled with older SDK will continue working with new library if no existing methods are removed.

<a name="librarygatewayfunction"></a>

#### 13.3.3\. Library Gateway function

**File: __zz_cib_Example.cpp**:

```c++
#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-export.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable.h"

namespace __zz_cib_ { namespace Example { namespace A { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Example_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::Example::A::__zz_cib_classid:
    return __zz_cib_::Example::A::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}

```

We see implementation of function `__zz_cib_Example_GetMethodTable`. *`Example` in name is because it is the name of module supplied as value of `-m` command line parameter*. This function is like gateway for client to access all functionality of the library. This function returns the method table for a given class-id. In previous section we had already seen implementation of `__zz_cib_GetMethodTable` for classes which is called from here. Since our trivial example had just one class there is just one `case` statement, had there been more classes there would have been more case statements. In later examples we will see those cases as well.

Now we will visit code that will be part of SDK and will be used by clients.

<a name="importoflibrarygatewayfunction"></a>

#### 13.3.4\. Import of library gateway function
Let's begin to look at client side with the part that imports library gateway function.

**File: __zz_cib_Example-def.h**:

```c++
#pragma once

#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-import.h"
#include "__zz_cib_Example-mtable.h"

extern "C" __zz_cib_import const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl
                                                           __zz_cib_Example_GetMethodTable(std::uint32_t classId);

```

As you can see it is counter part of what library code defined which had used `__zz_cib_export` instead of `__zz_cib_import`. With this declaration client code gets access to `__zz_cib_Example_GetMethodTable` and we will shortly see use of this below.

<a name="sdkheadersandproxyclasses"></a>

#### 13.3.5\. SDK Headers and Proxy Classes
Now we will look into the headers that will be used by client developer. This is the only part of generated code that is meant to be seen by developers and so `cib` tries to keep this as close to original as possible. Below is the header for  `class A` that `cib` produced from the header library developer wished to publish.

**File: example.h**:

```c++
#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
  //! A vividly trivial class
  //! Contains just a simple method.
  class A
  {
  public:
    A(A&& rhs);
  public:
    A();
    A(const A& );
    ~A();
    //! Doesn't do anything meaningful
    //! @note It is just for explaining how cib works.
    void SomeFunc();

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-impl.h"

```

You can notice certain differences between this class and the original class in folder pub/. Below is the diff between original and cib generated header:

```diff
--- pub/example.h	2018-10-31 21:20:03.717219007 +0100
+++ exp/example.h	2018-11-26 18:30:10.843781962 +0100
@@ -1,16 +1,27 @@
 #pragma once
 
+#include "__zz_cib_internal/example-predef.h"
+
 //! Contains example definitions to explain cib's functioning
 namespace Example
 {
   //! A vividly trivial class
   //! Contains just a simple method.
   class A
   {
   public:
+    A(A&& rhs);
+  public:
+    A();
+    A(const A& );
+    ~A();
     //! Doesn't do anything meaningful
     //! @note It is just for explaining how cib works.
     void SomeFunc();
+
+  private:
+    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
   };
 }
 
+#include "__zz_cib_internal/example-impl.h"

```

We can see that the header is *almost* same as original, except some "hook points" that `cib` inserted. There is one file inclusion in the beginning and one at the end. Class definition is same functionality wise. `cib` added *missing* default constructor, copy constructor, destructor and also a move constructor. A macro `__ZZ_CIB_CLASS_INTERNAL_DEF` is also inserted in private section of the class. *The `private:` before __ZZ_CIB_CLASS_INTERNAL_DEF is a lie, we will later see why.* These extra insertions in the header certainly makes the header a bit ugly but they are worth the price because they add lots of value which were simply not present earlier. 

Now, let's have a look at the `predef` file that is `#include`d in the beginning.

**File: __zz_cib_internal/example-predef.h**:

```c++
#include "__zz_cib_internal/__zz_cib_Example-class-internal-def.h"

namespace __zz_cib_ { namespace Example { namespace A {
class __zz_cib_Helper;
}}}

```

We see a #include and a forward declaration of `class __zz_cib_Helper`. __zz_cib_Helper class is the one that will do most of the heavy lifting. It is there to take away all the dirty details and keep the client facing header clean as much as possible. We will look into that in next part. Let's see what is the definition of that macro `__ZZ_CIB_CLASS_INTERNAL_DEF` that is present inside the class.

**File: __zz_cib_internal/__zz_cib_Example-class-internal-def.h**:

```c++
#include "__zz_cib_Example-handle-helper.h"

#ifdef __ZZ_CIB_CLASS_INTERNAL_DEF
#  undef __ZZ_CIB_CLASS_INTERNAL_DEF
#endif

//! @def __ZZ_CIB_CLASS_INTERNAL_DEF
//! Macro that allows cib to add it's hook in proxy classes
//! in a minimally invasive way.
#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                                                               \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_::__zz_cib_HANDLE* h);                                                                   \
                                                                                                                       \
private:                                                                                                               \
  friend class __zz_cib_::fullName::__zz_cib_Helper;                                                                   \
  __zz_cib_::__zz_cib_HANDLE* __zz_cib_h_

```

Macro `__ZZ_CIB_CLASS_INTERNAL_DEF` adds a protected constructor, declares `__zz_cib_Helper` as a friend class and adds a private data member. The data member `__zz_cib_h_` is the opaque pointer of original class that is created on library side. The constructor is to construct object from opaque pointer. We call client facing class as proxy class because the "real" object is on the library side and the proxy class only holds an opaque pointer of that. We will now move to see how the methods of this proxy class are defined.

**Implementation detail of proxy class**:

```c++
#include "__zz_cib_Example-def.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace Example { namespace A {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper> {
private:
  friend class ::Example::A;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper>;

  static __zz_cib_HANDLE* __zz_cib_new_0() {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_0);
  }
  static __zz_cib_HANDLE* __zz_cib_copy_1(const __zz_cib_HANDLE* __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE* __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc>(
      __zz_cib_methodid::__zz_cib_copy_1,
      __zz_cib_param0);
  }
  static void __zz_cib_delete_2(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc>(
        __zz_cib_methodid::__zz_cib_delete_2,
        __zz_cib_obj);
    }
  }
  static void SomeFunc_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using SomeFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<SomeFuncProc>(
      __zz_cib_methodid::SomeFunc_3,
      __zz_cib_obj);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Example::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::A(h);
  }
public:
  static ::Example::A __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::A(h);
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A& __zz_cib_obj) {
    return __zz_cib_obj.__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::A* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
};
}}}

inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_0())
{}

inline Example::A::A(const ::Example::A& __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_2(h);
}

inline void Example::A::SomeFunc() {
  __zz_cib_::Example::A::__zz_cib_Helper::SomeFunc_3(__zz_cib_h_);
}

```

This file contains primarily two things. Definition of `class __zz_cib_Helper` and implementation of methods of proxy class.

**class __zz_cib_Helper definition**:

We see that class `__zz_cib_::Example::A::__zz_cib_Helper` is derived from `__zz_cib_::__zz_cib_MethodTableHelper`, and `__zz_cib_HandleHelper`. We had already seen __zz_cib_MethodTableHelper before `__zz_cib_HandleHelper` has methods to convert handle to proxy class and vice versa.
Notice that class `__zz_cib_::Example::A::__zz_cib_Helper` is a singleton which fetches method table on construction and passes that to base __zz_cib_MethodTableHelper. The implementation of methods are done by delegating calls to function whose pointer is fetched using `getMethod<>()`. Now, it should be clear how the methods of class defined by library are called by client and that how it is independent of compiler used to compile library and client.

**Implementation of proxy class methods**:

First one is the constructor that constructs from opaque handle. This constructor is meant to be called from only `cib` generated code. The next is a move constructor that `cib` always geneartes. Since the proxy class holds handle of original class it makes sense for this optiization of always defining move constructor. There is one exception to that, if move constriuctor is deleted in original class definition then it is deleted in proxy class too.
Implementation of next three are mostly about delegating to methods of `__zz_cib_Helper`. Implementation of constructors are slightly different. They endup calling the very first constructor by passing returned value of method calls of `__zz_cib_Helper`.
Let's see what happens when following code is executed by client program:

**File: example-client.cpp**:

```c++
#include "example.h"

int main()
{
  Example::A a;
  a.SomeFunc();
}


```

This is simple code but involves integration of two C++ components. `cib` ensures that integration is compiler independent and forward compatible and so call sequence is different than what it would be when `cib` is not involved.
Below is the call sequence diagram for this sample, it will elaborate more about what code generated by `cib` does:
![Call sequence for sample-1](examples/example1/SAMPLE-1.svg "Call sequence for sample-1")

As mentioned before, no compiler generated stuff are shared between components, and we can see method-table generated by `cib` is the only thing that are shared by `library` and `client`.
This sequence diagram doesn't mention destrutor because I didn't want to make it look complicated. Destructor will have similar call sequence like other methods.

This ends the explanation of our first example I hope the basics of how `cib` works should now be clear. We will now move on to next example to see what happens to classes with virtual methods.

<a name="example-2:virtualfunctionandruntimepolymorphism:"></a>

### 13.4\. Example-2: Virtual function and runtime polymorphism:

In this example we will see what `cib` does with virtual functions and how runtime polymorphism works across component boundary. The code for this example is the next version of previous example and so we will also know how `cib` ensures forward compatibility at binary level. Consider the following example:

```c++
#pragma once

//! Contains example definitions to explain cib's functioning
//! @attention
//! This example is like next version of example-1.
//! The compiled library of this example will remain binary 
//! compatible with client of previous example.
namespace Example
{
  //! Example to see what cib does for classes with virtual methods.
  class A
  {
  public:
    //! This is to know what cib does with virtual functions.
    virtual void VirtFunc();
    //! Doesn't do anything meaningful
    //! @note It is just for explaining how cib works.
    void SomeFunc();
  };
  
  class B : public A
  {
  public:
    void VirtFunc() override;
  };
}


```

This example defines 2 classes, `class A` is from previous example and has a new method that is a virtual function. I have intentionally added it before existing method to make a point about how `cib` guarantees forward compatibility of client. We will see that in detail later. `class B` is the new class that is added in this example that inherits from `class A` and overrides the virtual method. We will see how runtime polymorphism works across the component boundary.

Let's now run `cib`:

**Running cib for example-2**

```sh
cib -i pub/ -o exp/ -b cib/ -m Example -c ../example1/cib/__zz_cib_Example-ids.h 
```

*To run cib for example-2 we supply ids file of example-1 (option `-c`). It is because example-2 is next version of example-1 and we want the client of example-1 to remain binary compatible with library of example-2.*

We will now see what the ids file that got genearted for this example. We will see the diff with the corresponding file of previous example, because afterall this example is next version of previous example and so we expect binary compatibility to remain intact.

```diff
--- ../example1/cib/__zz_cib_Example-ids.h	2018-11-26 18:30:10.843781962 +0100
+++ cib/__zz_cib_Example-ids.h	2018-11-26 18:30:10.843781962 +0100
@@ -7,8 +7,13 @@
   enum { __zz_cib_classid = 1 };
 }}}
 
+namespace __zz_cib_ { namespace Example { namespace B {
+  //#= FullClassName: ::Example::B
+  enum { __zz_cib_classid = 2 };
+}}}
+
 namespace __zz_cib_ { namespace Example {
-  enum { __zz_cib_next_class_id = 2 };
+  enum { __zz_cib_next_class_id = 3 };
 }}
 
 namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
@@ -21,7 +26,25 @@
     __zz_cib_delete_2 = 2,
     //#= void SomeFunc();
     SomeFunc_3 = 3,
-    __zz_cib_next_method_id = 4
+    //#= void VirtFunc();
+    VirtFunc_4 = 4,
+    __zz_cib_next_method_id = 5
+  };
+}}}}
+
+namespace __zz_cib_ { namespace Example { namespace B { namespace __zz_cib_methodid {
+  enum {
+    //#= B();
+    __zz_cib_new_0 = 0,
+    //#= B(const ::Example::B&);
+    __zz_cib_copy_1 = 1,
+    //#= ~B();
+    __zz_cib_delete_2 = 2,
+    //#= void VirtFunc();
+    VirtFunc_3 = 3,
+    //#= __zz_cib_cast_to___Example__A
+    __zz_cib_cast_to___Example__A_4 = 4,
+    __zz_cib_next_method_id = 5
   };
 }}}}
 

```

Please note that none of the IDs that were used by previous version are changed, only the new IDs got added. This is the fundamental working of `cib` to ensure forward compatibility at binary level. This will be more clear when we see the diff of library glue code:

```diff
--- ../example1/cib/example.h.cpp	2018-11-26 18:30:10.843781962 +0100
+++ cib/example.h.cpp	2018-11-26 18:30:10.843781962 +0100
@@ -14,20 +14,55 @@
 static void __zz_cib_decl __zz_cib_delete_2(::Example::A* __zz_cib_obj) {
   delete __zz_cib_obj;
 }
+static void __zz_cib_decl VirtFunc_4(::Example::A* __zz_cib_obj) {
+  __zz_cib_obj->::Example::A::VirtFunc();
+}
 static void __zz_cib_decl SomeFunc_3(::Example::A* __zz_cib_obj) {
   __zz_cib_obj->::Example::A::SomeFunc();
 }
 }}}
 
+namespace __zz_cib_ { namespace Example { namespace B {
+static ::Example::B* __zz_cib_decl __zz_cib_new_0() {
+  return new ::Example::B();
+}
+static ::Example::B* __zz_cib_decl __zz_cib_copy_1(const ::Example::B* __zz_cib_param0) {
+  return new ::Example::B(*__zz_cib_param0);
+}
+static void __zz_cib_decl __zz_cib_delete_2(::Example::B* __zz_cib_obj) {
+  delete __zz_cib_obj;
+}
+static void __zz_cib_decl VirtFunc_3(::Example::B* __zz_cib_obj) {
+  __zz_cib_obj->::Example::B::VirtFunc();
+}
+static ::Example::A* __zz_cib_decl __zz_cib_cast_to___Example__A_4(::Example::B* __zz_cib_obj) {
+  return __zz_cib_obj;
+}
+}}}
+
 namespace __zz_cib_ { namespace Example { namespace A {
 const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
   static const __zz_cib_MTableEntry methodArray[] = {
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_0),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_1),
     reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_2),
-    reinterpret_cast<__zz_cib_MTableEntry> (&SomeFunc_3)
+    reinterpret_cast<__zz_cib_MTableEntry> (&SomeFunc_3),
+    reinterpret_cast<__zz_cib_MTableEntry> (&VirtFunc_4)
+  };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
+  return &methodTable;
+}
+}}}
+namespace __zz_cib_ { namespace Example { namespace B {
+const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
+  static const __zz_cib_MTableEntry methodArray[] = {
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_0),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_1),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_2),
+    reinterpret_cast<__zz_cib_MTableEntry> (&VirtFunc_3),
+    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Example__A_4)
   };
-  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
+  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
   return &methodTable;
 }
 }}}

```

The library glue code now has code for class B as well and it has modification for glue code of `class A`. If we look at the method table of `class A` we see that the order of items in the table is not disrupted from previous version. The items that were present in previous version of method table are still at exactly the same index. So, if we run the client of previous example with library of this example the client will see the method table exactly as it would see with library of older version. For the client there is no change at `ABI` level and so it will have no problem working with newer library. This is how `cib` acheives forward compatibility for client at binary level.

We will continue looking at the diffs and now we will look at diffs of proxy classes:

```diff
--- ../example1/exp/example.h	2018-11-26 18:30:10.843781962 +0100
+++ exp/example.h	2018-11-26 18:30:10.843781962 +0100
@@ -1,27 +1,45 @@
 #pragma  once
 
 #include "__zz_cib_internal/example-predef.h"
 
 //! Contains example definitions to explain cib's functioning
+//! @attention
+//! This example is like next version of example-1.
+//! The compiled library of this example will remain binary 
+//! compatible with client of previous example.
 namespace Example
 {
-  //! A vividly trivial class
-  //! Contains just a simple method.
+  //! Example to see what cib does for classes with virtual methods.
   class A
   {
   public:
     A(A&& rhs);
   public:
     A();
     A(const A& );
     ~A();
+    //! This is to know what cib does with virtual functions.
+    virtual void VirtFunc();
     //! Doesn't do anything meaningful
     //! @note It is just for explaining how cib works.
     void SomeFunc();
 
   private:
     __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
   };
+  class B : public ::Example::A
+  {
+  public:
+    B(B&& rhs);
+  public:
+    B();
+    B(const B& );
+    ~B();
+    virtual void VirtFunc();
+
+  private:
+    __ZZ_CIB_CLASS_INTERNAL_DEF(B, Example::B);
+  };
 }
 
 #include "__zz_cib_internal/example-impl.h"

```

Definition of proxy classes is as expected. No surprises there. The class definitions are almost same as original. Methods that were declared virtual are still virtial in proxy clases too. So, we will move on and see the diffs for implementation of proxy classes and also their helper classes.

```diff
--- ../example1/exp/__zz_cib_internal/example-impl.h	2018-11-26 18:30:10.843781962 +0100
+++ exp/__zz_cib_internal/example-impl.h	2018-11-26 18:30:10.843781962 +0100
@@ -29,6 +29,12 @@
         __zz_cib_obj);
     }
   }
+  static void VirtFunc_4(__zz_cib_HANDLE* __zz_cib_obj) {
+    using VirtFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
+    return instance().invoke<VirtFuncProc>(
+      __zz_cib_methodid::VirtFunc_4,
+      __zz_cib_obj);
+  }
   static void SomeFunc_3(__zz_cib_HANDLE* __zz_cib_obj) {
     using SomeFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
     return instance().invoke<SomeFuncProc>(
@@ -65,6 +71,75 @@
 };
 }}}
 
+namespace __zz_cib_ { namespace Example { namespace B {
+class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
+  , public __zz_cib_::__zz_cib_HandleHelper<::Example::B, __zz_cib_Helper> {
+private:
+  friend class ::Example::B;
+  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::B, __zz_cib_Helper>;
+
+  static __zz_cib_HANDLE* __zz_cib_new_0() {
+    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
+    return instance().invoke<__zz_cib_newProc>(
+      __zz_cib_methodid::__zz_cib_new_0);
+  }
+  static __zz_cib_HANDLE* __zz_cib_copy_1(const __zz_cib_HANDLE* __zz_cib_param0) {
+    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE* __zz_cib_param0);
+    return instance().invoke<__zz_cib_copyProc>(
+      __zz_cib_methodid::__zz_cib_copy_1,
+      __zz_cib_param0);
+  }
+  static void __zz_cib_delete_2(__zz_cib_HANDLE* __zz_cib_obj) {
+    if (__zz_cib_obj) {
+      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
+      return instance().invoke<__zz_cib_deleteProc>(
+        __zz_cib_methodid::__zz_cib_delete_2,
+        __zz_cib_obj);
+    }
+  }
+  static void VirtFunc_3(__zz_cib_HANDLE* __zz_cib_obj) {
+    using VirtFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
+    return instance().invoke<VirtFuncProc>(
+      __zz_cib_methodid::VirtFunc_3,
+      __zz_cib_obj);
+  }
+  static __zz_cib_HANDLE* __zz_cib_cast_to___Example__A_4(__zz_cib_HANDLE* __zz_cib_obj) {
+    using __zz_cib_cast_to___Example__AProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
+    return instance().invoke<__zz_cib_cast_to___Example__AProc>(
+      __zz_cib_methodid::__zz_cib_cast_to___Example__A_4,
+      __zz_cib_obj);
+  }
+  __zz_cib_Helper()
+    : __zz_cib_::__zz_cib_MethodTableHelper(
+      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
+  {}
+  static const __zz_cib_Helper& instance() {
+    static __zz_cib_Helper helper;
+    return helper;
+  }
+
+  static ::Example::B* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
+    return new ::Example::B(h);
+  }
+public:
+  static ::Example::B __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
+    return ::Example::B(h);
+  }
+static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::B* __zz_cib_obj) {
+    return __zz_cib_obj->__zz_cib_h_;
+  }
+static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::B& __zz_cib_obj) {
+    return __zz_cib_obj.__zz_cib_h_;
+  }
+  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::B* __zz_cib_obj) {
+    auto h = __zz_cib_obj->__zz_cib_h_;
+    __zz_cib_obj->__zz_cib_h_ = nullptr;
+    __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
+    return h;
+  }
+};
+}}}
+
 inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
   : __zz_cib_h_(h)
 {}
@@ -88,6 +163,39 @@
   __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_2(h);
 }
 
+inline void Example::A::VirtFunc() {
+  __zz_cib_::Example::A::__zz_cib_Helper::VirtFunc_4(__zz_cib_h_);
+}
+
 inline void Example::A::SomeFunc() {
   __zz_cib_::Example::A::__zz_cib_Helper::SomeFunc_3(__zz_cib_h_);
 }
+
+inline Example::B::B(__zz_cib_::__zz_cib_HANDLE* h)
+  : ::Example::A::A(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_cast_to___Example__A_4(h))
+  , __zz_cib_h_(h)
+{}
+
+inline Example::B::B(B&& rhs)
+  : ::Example::A::A(std::move(rhs))
+  , __zz_cib_h_(rhs.__zz_cib_h_)
+{
+  rhs.__zz_cib_h_ = nullptr;
+}
+
+inline Example::B::B()
+  : Example::B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_new_0())
+{}
+
+inline Example::B::B(const ::Example::B& __zz_cib_param0)
+  : Example::B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
+{}
+
+inline Example::B::~B() {
+  auto h = __zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_release_handle(this);
+  __zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_delete_2(h);
+}
+
+inline void Example::B::VirtFunc() {
+  __zz_cib_::Example::B::__zz_cib_Helper::VirtFunc_3(__zz_cib_h_);
+}

```

Here too we mostly see things as expected. There was a new method in `class A` and so there are lines corresponding to that. `class B` was a new addition and for that we see similar code. One important thing to note here is that `cib` didn't differentiate between virtual and non-virtual methods. It treated them alike. virtual methods do receive special treatment from `cib` but this example doesn't meet that creteria. In other examples when we will discuss `interface` and `facade` kind of classes we will see how `cib` generates special code for virtual methods. But for this example we will now see how runtime polymorphism is done across component boundary. Let's have a look at the client code of this example:

```c++
#include "example.h"

int main()
{
  Example::A* pA = new Example::B();
  pA->VirtFunc();
}


```

It's a trivial example but involves a polymorphic call. When this code is executed the expectation is that `B::VirtFunc()` should be called. As it can be seen that `B::VirtFunc()` will be called at the client side itself because proxy class B overrides the VirtFunc() method. The instructions generated by compiler of client code will make the call to `B::VirtFunc()` on client side. It is just that the implementation of `B::VirtFunc()` will delegate the call to library side `B::VirtFunc()` function through method table. As far as `cib` is concerened it has placed mechanism to call across component boundary for both virtual and non-virtual methods in exactly the same way. It is the instruction generated by compiler of client that will decide which method to call on the client side itself. This is the way `cib` makes it possible for virtual function call to cross component boundary without sharing the compiler generated vtable of components. The vtables of components are used only by respective components themselves. For calling methods across component method table is used instead. Now we will move on to our next example and see what `cib` does with facade like classes.


<a name="example-3:facadeclassesandrtti:"></a>

### 13.5\. Example-3: Facade Classes and RTTI:

TODO: Documentation is in progress.

<a name="example-4:interfaceclasses:"></a>

### 13.6\. Example-4: Interface Classes:

TODO: Documentation is in progress.

<a name="example-5:templateclasses:"></a>

### 13.7\. Example-5: Template Classes:

TODO: Documentation is in progress.

<a name="implementationdetails"></a>

## 14\. Implementation Details
<a name="parsingtechnique"></a>

### 14.1\. Parsing Technique
We use cppparser to parse C++ headers. Clang can be an option but since we do not need full and complete compiler level type resolution clang is not suitable for us. For example if a function is declared as:

`
void ExampleFunction(wxInt32 i);
`

cib doesn't need to resolve wxInt32. In-fact if it resolves it completely then it will be a problem because wxInt32 can be an **int**, or a **long** depending upon platform and cib really should produce same definitions on all platforms. The idea of cib is that it should produce same headers for all platforms so that it can be used to publish SDK because different headers for different platforms don't sound like a good idea.

<a name="creatingproxyclassfromhandle"></a>

### 14.2\. Creating proxy class from handle
When a function returns pointer to base class then it is necessary to create instance of proxy class which represents exact same class that the returned pointer is pointing to. For example if a function return type is Shape* and when invoked it actually returns pointer to a Rectangle instance. On client side we will need to create instance of Rectangle proxy class instead of Shape proxy class. It is to be noted that it has to be done only for facade classes for other classes there is no need for this.
