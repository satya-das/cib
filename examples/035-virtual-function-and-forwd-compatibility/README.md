## Example - Virtual Function and Forward Compatibility

**Please note that forward compatibility of library also means backward compatibility of client.**

Like previous example the library of this too is next version of library of `virtual-function` example. In the new library there is one more virtual function added to an existing class:

```diff
--- 020-virtual-function/pub/example.h
+++ 035-virtual-function-and-forwd-compatibility/pub/example.h
@@ -1,20 +1,21 @@
 #pragma once
 
 //! Example to see what cib does for classes with virtual methods.
 class A
 {
 public:
   A();
+  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
   //! This is to know what cib does with virtual functions.
-  virtual int VirtFunc() { return 1; }
+  virtual int VirtFunc() { return 2; }
   virtual ~A() {}
 };
 
 class B : public A
 {
 public:
   B();
   int VirtFunc() override { return 15; }
 
   static B* Create() { return new B; }
 };

```

In the previous example, i.e. in `virtual-function-and-bkwd-compatibility`, we saw that client remains compatible with newer library. But in this example we demonstrate that new client remains compatible with old library.

Since, new library has an additional method and if new client calls this new method then it will not be compatible with old library. So, only thing that can be done is that the client should to not call new methods:

```diff
--- 020-virtual-function/src/example-client.cpp
+++ 035-virtual-function-and-forwd-compatibility/src/example-client.cpp
@@ -1,20 +1,29 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 void PerformTest(A* pA)
 {
   CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
-  CHECK(pA->A::VirtFunc() == 1);        // A regular call without use of virtual table.
+  if (pA->A::VirtFunc() == 2)
+  {
+    // New function should be available to newer clients.
+    CHECK(pA->AnotherVirtFunc() == 100);
+  }
+  else
+  {
+    // When new function is called with old library exception should be thrown.
+    CHECK_THROWS_AS(pA->AnotherVirtFunc(), std::bad_function_call);
+  }
 }
 
 TEST_CASE("ABI stable virtual function call across component boundary")
 {
   // Test for object created by client on heap
   PerformTest(new B());
   // Test for object created by library
   PerformTest(B::Create());
   // Test for object created on stack
   B b;
   PerformTest(&b);
 }

```

As we can see that when client invokes new method with old library then an exception is raised which client can catch and take necessary steps. Client can still take precaution before calling the new method. So, basically if new client wants to be backward compatible then it has to be the responsibility of the client developer to ensure compatibility.

### Running CIB
To make CIB ensure ABI stability we need to run cib with additional parameter to supply ID file of previous version of library:

```sh
cib -i pub -o exp -b cib -m Example -c ../020-virtual-function/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability and CIB generates glue code accordingly.

