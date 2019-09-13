## Example - A Simple Class and Forward Compatibility

Forward compatiblity of library also means backward compatibility of client. If a new client uses new functions of library then there will be an issue when the new client is used with old library. As long as that is not done CIB architecture ensures ABI stability. Even when client uses new function CIB has mechanism in place to throw exception at runtime that client can catch and mend it's ways. This example demonstrates 2 things:
 1. **Forward compatibility**: New client is compatible with old library if it doesn't call functions that are only available in newer library,
 2. **Robustness**: An exception is thrown when client calls newer API not available in old library.

Consider the library of this example as next version of library of very first example. So, let's see the diff of library header:

```diff
--- 010-simple-class/pub/example.h
+++ 018-simple-class-and-forwd-compatibility/pub/example.h
@@ -1,20 +1,23 @@
 #pragma once
 
 //! Contains example definitions to explain cib's functioning
 namespace Example
 {
   //! A vividly trivial class
   //! Contains just a simple method.
   class A
   {
   public:
     A();
     //! Doesn't do anything meaningful
     //! @note It is just for explaining how cib works.
     int SomeFunc() { return x; }
     
+    //! Adde method in new version
+    int AnotherFunction() { return 109; }
+    
   private:
-    int x {1};
+    char c {0x1f};
+    int x {2};
   };
 }
-

```

There is a change in data members and that change is bound to cause ABI stability unless CIB is used. There is a new method added in the class. So, new client can access that method. But, this example is for forward compatibility of library, i.e. backward compatibility of client. So, lets see what does client do in this example:

```c++
#include "example.h"

#include <catch/catch.hpp>

#include <exception>

TEST_CASE("Method call")
{
  Example::A a;
  if(a.SomeFunc() == 2)
  {
    // When run with new library
    CHECK(a.AnotherFunction() == 109);
  }
  else
  {
    // When run with old library
    CHECK_THROWS_AS(a.AnotherFunction(), std::bad_function_call);
  }
}

```

Client first checks if new `AnotherFunction` is available in the library and if it does then invokes it and expects a particular return value. When the `AnotherFunction` is not available then also client is invoking it and expects `std::bad_function_call` to be thrown. And that's what exactly CIB ensures.

**For baackward compatibility of a component, the component must ensure that it should not be calling functions that are not present in old version of component it depends upon.**

If it does then CIB throws `std::bad_function_call` exception that should be caught and handled by the components.

Since, cross component calls happen using `MethodTable` CIB can check for existence of function pointer in MethodTable and accordingly it can throw exception if the required function pointer is not present. Let's see how functions from MethodTable are invoked:

[**File**: cib/__zz_cib_Example-mtable-helper.h]:

```c++
#ifndef __zz_cib_MethodTableHelper_defined
#define __zz_cib_MethodTableHelper_defined

#include "__zz_cib_Example-mtable.h"

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
  //! @note Will throw std::bad_function_call() if MethodTable doesn't contain
  //! method or the fetched method is null.
  template <typename _MethodType, std::uint32_t methodId, typename... _TArgs>
  auto invoke(_TArgs... args) const
  {
    auto method = getMethod<_MethodType>(methodId);
    if (method == nullptr)
      throw std::bad_function_call();
    return method(args...);
  }

private:
  //! Utility method to get method from MethodTable.
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

#endif

```

We see that when the fetched method from MethodTable is `nullptr` then `std::bad_function_call` exception is thrown. That's the way CIB let the caller know if it calls non-existing function which can happen when a component is used with older version of component on which it depends upon.

So, backward compatibility is also a responsibility of developer and CIB can help in a great way to achieve this goal by ensuring ABI stability at the component boundary.

Below is the output when this test it run:

```sh
dassat:~/github/cib/build$ ninja && ctest -R 018-simple-class-and-forwd-compatibility
Test project /home/dassat/github/cib/build
    Start 6: 018-simple-class-and-forwd-compatibility
1/2 Test #6: 018-simple-class-and-forwd-compatibility ...........................   Passed    0.00 sec
    Start 7: 018-simple-class-and-forwd-compatibility-new-client-with-old-lib
2/2 Test #7: 018-simple-class-and-forwd-compatibility-new-client-with-old-lib ...   Passed    0.00 sec

100% tests passed, 0 tests failed out of 2

Total Test time (real) =   0.01 sec
```

We see total of 2 test runs, one of them has `new-client-with-old-lib` in it's name. This test runs the new client with old library and ensures it runs as expected.

That's it about this example. Slowly we are understanding pieces of CIB architecture.

