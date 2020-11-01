# Example - Simple Class and Backward Compatibility

In this example we will see the case when library modifies it's class and how the old client will keep working without recompiling. The library in this example is actually the next version of library from immediate previous example. So, let's just see the diff of the header file:

```diff
--- 0010-simple-class/pub/example.h
+++ 0020-simple-class-and-bkwd-compatibility/pub/example.h
@@ -1,19 +1,20 @@
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
+  double f {0.0};
   int m {1};
 };

```

As we can see that only change in the class is addition of new data members. If the library and client are linked together in traditional way then this is certain to cause ABI stability issue. But with CIB old client keeps working with new library. Actually a bridge pattern is in use here which is a well known design pattern to achieve ABI stability when object layout is changed. The only difference in CIB is that the bridge is across component boundary. The client has a proxy class in one end and library has the implementation class.

Below is the output when this test it run:

```sh
$ ninja && ctest -R 015-simple-class-and-bkwd-compatibility
Test project /home/dassat/github/cib/build
    Start 4: 015-simple-class-and-bkwd-compatibility
1/2 Test #4: 015-simple-class-and-bkwd-compatibility ...........................   Passed    0.00 sec
    Start 5: 015-simple-class-and-bkwd-compatibility-new-lib-with-old-client
2/2 Test #5: 015-simple-class-and-bkwd-compatibility-new-lib-with-old-client ...   Passed    0.00 sec

100% tests passed, 0 tests failed out of 2

Total Test time (real) =   0.01 sec
```

We see total of 2 test runs, one of them has `new-lib-with-old-client` in it's name. This test runs the old client with new library and ensures it runs as expected.

That's it about this example.

