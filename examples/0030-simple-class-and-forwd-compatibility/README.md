## Example - A Simple Class and Forward Compatibility

Forward compatiblity of library also means backward compatibility of client. If a new client uses new functions of library then there will be an issue when the new client is used with old library. As long as that is not done CIB architecture ensures ABI stability. Even when client uses new function CIB has mechanism in place to throw exception at runtime that client can catch and mend it's ways. This example demonstrates 2 things:
 1. **Forward compatibility**: New client is compatible with old library if it doesn't call functions that are only available in newer library,
 2. **Robustness**: An exception is thrown when client calls newer API not available in old library.

Consider the library of this example as next version of library of very first example. So, let's see the diff of library headers:

```diff
--- 0010-simple-class/pub/example.h
+++ 0030-simple-class-and-forwd-compatibility/pub/example.h
@@ -1,19 +1,23 @@
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
 
+  //! Added method in new version
+  int AnotherFunction() { return 109; }
+  
 private:
-  int m {1};
+  char c {0x1f};
+  int  m {2};
 };

```

There is a change in data members and we have already seen in previous example that it doesn't cause ABI instability. There is a new method added in the class. So, new client can access that method. But, this example is for forward compatibility of library, i.e. backward compatibility of client. So, lets see what does client do in this example:

```c++
#include "example.h"

#include <catch/catch.hpp>

#include <exception>

TEST_CASE("Method call")
{
  A a;
  if(a.SomeFunc(30) == 32)
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

**For backward compatibility of a component, the component must ensure that it either does not call functions that are not present in the old version of component it depends upon or it handles `std::bad_function_call` exception.**

Since, cross component calls happen using `MethodTable` CIB can check for existence of function pointer in MethodTable and accordingly it can throw exception. This is one of the reason why usage of `MethodTable` is chosen as a design decision.

Below is the output when this test it run:

```sh
$ ninja && ctest -R 0020-simple-class-and-bkwd-compatibility
Test project /home/dassat/github/cib/build
    Start 6: 0020-simple-class-and-bkwd-compatibility
1/2 Test #6: 0020-simple-class-and-bkwd-compatibility ...........................   Passed    0.00 sec
    Start 7: 0020-simple-class-and-bkwd-compatibility-new-client-with-old-lib
2/2 Test #7: 0020-simple-class-and-bkwd-compatibility-new-client-with-old-lib ...   Passed    0.00 sec

100% tests passed, 0 tests failed out of 2

Total Test time (real) =   0.01 sec
```

We see total of 2 test runs, one of them has `new-client-with-old-lib` in it's name. This test runs the new client with old library and ensures it runs as expected.

That's it about this example.

