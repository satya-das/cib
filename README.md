# Component Interface Binder (CIB)#
CIB is an automated way to generate code that allows one binary component to use classes and functions defined in another binary component.
For example it can be used by an application program to export classes which can be used by the plugins.
In this document the binary component that exposes its classes will be called Library and the component that uses those classes will be called client of that library.

## CIB features: ##
  - Client can use library provided classes without linking with the library at compile time.
  - Client don't need to compile just because library headers are modified unless the signature of API used by client is changed.
  - Clients of library will keep working, without compiling, with new version of library.
  - Functions, methods (including virtual methods) can be reordered in library code and client code will keep working without compiling with new headers.

 ***Most/all of these features are provided by COM. But CIB has other advantages over COM.***

  - Client can define new classes by deriving from concrete classes provided by library (*note that it is made possible even when complete class definition is not available to client*).
  - No need to write interface definition files (.idl/.odl files).
  - No need to maintain order of virtual functions across releases.
  - No need to declare all functions as pure virtual.

 **CIB allows client of a library to use all exported classes as if those classes are part of the client code itself without exposing the internals of classes.**

## CIB Goals ##
 - To become an easier and better alternative of COM.
 - To become an easier and better alternative of DCOM.
 - To work on all platforms without any gotcha.
 - To make it possible for client of a library to choose compiler of its own choice and not constrained by library vendor..

## How CIB works ##
 Following are the broad things that CIB does:

  - CIB parses all public C/C++ header files of library and creates similar files with slightly altered definition of classes for clients to use the library.
  - Raw C API with calling convention __stdcall are defined at library side for all functions including class methods, constructors, and destructors.
  - Implementation of such C APIs is just to delegate the call to original function/method/constructor/destructor/etc.
  - All C APIs are assigned an integer value as its ID.
  - At library side a map is created for each class/struct/union/namespace which maps the API Id to C API function pointer. Such map is called MetaInterface.
  - Library side glue code exports a function called GetMetaInterface() which returns MetaInterface for given class name.
  - Library side glue code also exports a function called GetMethod() which returns the function pointer for given API ID and MetaInterface.
  - Class definitions for client is generated with same class-name but without any data member other than an opaque pointer to original class defined by library.
  - Implementation of all functions including class methods, constructors, and destructors for classes at client side are provided by means of invoking function pointer returned by GetMethod().

### Example ###
 For example see projects shape and draw in test folders.

### Summary ###
 For every method of a C++ class there will be C function and name of the function will be called CAPIName.
 For every CAPIName will have an integer API ID. Library side glue code will map API ID with C API function.
 Client side glue code will use API ID to fetch function pointer from library using GetMethod() API.
 Client side will also define a function pointer type, ProcType, with same name as API ID to store the function pointer provided by Library.

## Building CIB ##
To build CIB you need two pull code of ***common***, ***cppparser***, and ***cib*** in such a way that you get folders with these names in same parent folder. Basically you need to run git clone in same folder for all these projects.