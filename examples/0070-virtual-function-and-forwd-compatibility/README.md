## Example - Virtual Function and Forward Compatibility

**Forward compatibility of library also means backward compatibility of client.**

Like previous example the library of this too is next version of library of [`0050-virtual-function`](../0050-virtual-function) example. In the new library there is one more virtual function added to an existing class:

```diff
--- 0050-virtual-function/pub/example.h
+++ 0070-virtual-function-and-forwd-compatibility/pub/example.h
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

In the previous example, i.e. in [`0060-virtual-function-and-bkwd-compatibility`](../0060-virtual-function-and-bkwd-compatibility), we saw that client remains compatible with newer library. But in this example we demonstrate that new client remains compatible with old library.

Since, new library has an additional method and if new client calls this new method then it will, generally speaking, not be compatible with old library. But with CIB client has 2 options:

```diff
--- 0050-virtual-function/src/example-client.cpp
+++ 0070-virtual-function-and-forwd-compatibility/src/example-client.cpp
@@ -1,24 +1,33 @@
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
   auto* pB1 = new B();
   PerformTest(pB1);
   delete pB1;
   // Test for object created by library
   auto* pB2 = B::Create();
   PerformTest(pB2);
   delete pB2;
   // Test for object created on stack
   B b;
   PerformTest(&b);
 }

```

Either don't call new functions if client's backward compatibility is desired or be ready for `std::bad_function_call` exception and handle it properly.

### Running CIB
To make CIB ensure ABI stability we need to run cib with additional parameter to supply ID file of previous version of library:

```sh
cib -i pub -o exp -b cib -m Example -c ../0050-virtual-function/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with binaries of `0050-virtual-function` example and CIB generates glue code accordingly.

