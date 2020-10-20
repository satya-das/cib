# Feature Progress of CIB tool

| Feature                                   | Description | Status |
| ---------------------------------         | :---------- | :----- |
| Basic                                     | CIB should work for a simple library that exports classes with non-virtual functions. | Done |
| Virtual functions and inheritance         | CIB should make virtual function and inheritance available to clients. | Done |
| Function overloading                      | Same named functions of a class should be seamlessly exported. | Done |
| Function overridding                      | Allow library to use interface implemented by client. | Done |
| Forward compatibility of client           | Older client works with newer library. | Done |
| Forward compatibility of library          | Library should be ABI compatible with newer client. As of now library and client can catch exception when non existing function is called and should take corrective measures to work with newer component. | Done |
| Backward compatibility of client          | When newer client invokes a method present only in new SDK then std::bad\_function\_call exception will be thrown. Clients that want to be backward compatible should handle this exception when invoking methods present only in newer SDK. | Done |
| Backward compatibility of library         | When library invokes a method of interface implemented by only newer client then std::bad\_function\_call exception will be thrown. Library developer should be aware about this to remain backward compatible when invoking new methods of it's own public interface. | Done   |
| Create correct proxy class                | A base class pointer returned by an API of library may actually be pointing to an object of a derived class. At client side we should create proxy class of exact same type to which the returned pointer is pointing to. It is needed so that dynamic_cast at client side should work as expected. | Done |
| Operator overloading                      | It is common for C++ classes to have overloaded operators. | Done |
| Typecast operator overloading             | Typecast operator overloading of user defined types is common in C++. | Done |
| Simple Template class support             | Support for simple template classes when it crosses component boundary. Simple template means without template template argument, or any of other fancy stuff. | Done|
| Return existing proxy class               | If a function returns pointer or reference of object for which proxy class already exists then existing proxy class should be returned. | Done|
| Support protected methods                 | Protected methods are accessible to derived class and they should be exported so that client's derived class can call them. | Done|
| Support private pure virtual              | Private pure virtual is used in template method design pattern. | Done|
| Rvalue reference parameter                | RValue references need to cross component boundary. | Done|
| Support of free functions                 | Free functions in global and orher namespaces too should be supported. | Done |
| Support deleted members                   | Constructors and operators marked as `delete` should be deleted for proxy classes as well. | Done |
| Enum and enum classes                     | Enums used as parameter or return type. | Done|
| Support unique_ptr with default deleter   | It's a Modern C++ programing paradigm and must be supported. | Done|
| proxy object management by library        | Library manages proxy objects deletion when original object is deleted. | Done|
| Support for intrusive pointer             | Many libraries use intrusive pointer to manage object life cyle and functions can return smart pointer for intrusively managed reference count of object. | Done |
| Support of stl classes, e.g. std::vector  | stl classes are very likely part of all C++ programs. | Done |
| Support std::function                     | std::function can be used as function parameter. | Done |
| std::string                               | Support of std::string will be good as string is like a basic data type in many libraries. ||
| Exception support                         | Make exception object travel across component boundary in a compatible way. |
| Support shared_ptr                        | Modern C++ libraries use shared_ptr. |
| Support unique_ptr with custom deleter    | Sometimes unique_ptr is used with custom deleter. |
| Function pointer as parameter             | Function pointers can be used as parameter or return type of another function. ||
| Non-const pointer ref return type         | When a reference of pointer of non-POD is returned from a function a change in that should be propagated to the library.|
| Support public data members               | Public data members of a class should be exported in ABI stable way. |

---