## Example - Virtual Function and backward compatibility
In previous example we have seen how CIB allows runtime polymorphism to work across component boundary. In this example we will see how CIB ensures ABI stability when virtual table is disrupted.

This example is next version of immediate previous one (i.e. *virtual-function*). The Library exports the same class but with additional virtual function. The new virtual function is added before the existing one. As you know such changes will require the client program to recompile with new headers. **But fortunately that is not true when CIB architecture is used for publishing SDK.**

Below I am showing the diff of new header with previous one.

```diff
--- 0050-virtual-function/pub/example.h
+++ 0060-virtual-function-and-bkwd-compatibility/pub/example.h
@@ -1,20 +1,21 @@
 #pragma once
 
 //! Example to see what cib does for classes with virtual methods.
 class A
 {
 public:
   A();
+  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
   //! This is to know what cib does with virtual functions.
   virtual int VirtFunc() { return 1; }
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

As it can be seen that only a new virtual method is added to an existing class. But the new virtual method is added before the existing one and that is the key change. If CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:

```diff
--- 0050-virtual-function/src/example-client.cpp
+++ 0060-virtual-function-and-bkwd-compatibility/src/example-client.cpp
@@ -1,24 +1,25 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 void PerformTest(A* pA)
 {
   CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
   CHECK(pA->A::VirtFunc() == 1);        // A regular call without use of virtual table.
+  CHECK(pA->AnotherVirtFunc() == 100);  // New function should be available to newer clients.
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

There is no surprises that this new client will work with new library. But the old client, the client of previous example [`0050-virtual-function`](../0050-virtualfunction), should continue working with new library without any change or recompilation. The automated test `0060-virtual-function-and-bkwd-compatibility` ensures the client of `0050-virtual-function` works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. In previous example we learnt how runtime polymorphism works across component boundary using MethodTable. Let's see the diff of MethodTable of new library:

```diff

```

As it can be seen that the new method caused a new entry in MethodTable and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the MethodTable precisely how they expect it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensure ABI stability we needed to run cib with additional parameter and supply ID file of previous example:

```sh
cib -i pub -o exp -b cib -m Example -c ../0050-virtual-function/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

