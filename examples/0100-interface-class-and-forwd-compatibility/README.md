## Interface Class and Forward Compatibility

In example [`0080-interface-class`](../0080-interface-class) we had only tackled the cases that is very much expected from a C++ library/program. In this example we will see how CIB ensures ABI stability in the case when virtual table of it's interface class is disrupted. This example is actually next version of  [`0080-interface-class`](../0080-interface-class).

Below I am showing the diff of new header with previous one.

```diff
--- 0080-interface-class/pub/example.h
+++ 0090-interface-class-and-bkwd-compatibility/pub/example.h
@@ -1,22 +1,42 @@
 #pragma once
 
+#include <functional>
+
 class Interface
 {
 public:
+  //! Just to disrupt vtable.
+  virtual int Gunc() = 0;
   virtual int Func() = 0;
+
   virtual ~Interface() {}
 private:
   virtual int PrivateVirtualFunc() = 0;
 
   friend class A;
 };
 
 class A
 {
 public:
   A();
   int UseInterface(Interface* pInterface) const
   {
-    return pInterface->Func() + pInterface->PrivateVirtualFunc();
+    return pInterface->Func() + pInterface->PrivateVirtualFunc() + CallNewMethod(pInterface);
+  }
+
+private:
+  int CallNewMethod(Interface* pInterface) const
+  {
+    try
+    {
+      // new client
+      return pInterface->Gunc();
+    }
+    catch (const std::bad_function_call&)
+    {
+      // old client
+      return 0;
+    }
   }
 };

```

As it can be seen that only new virtual methods are added to an existing interface. But the new virtual method is added before the existing one and that is the key change. If CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:

```diff
--- 0080-interface-class/src/example-client.cpp
+++ 0090-interface-class-and-bkwd-compatibility/src/example-client.cpp
@@ -1,19 +1,26 @@
 #include "example.h"
 
 #include <catch/catch.hpp>
 
 class Implement : public Interface
 {
 public:
+  int Gunc() override { return 193; };
   int Func() override { return 167; }
 private:
   int PrivateVirtualFunc() override { return 168; }
 };
 
 TEST_CASE("Interface callback: library should be able to call client implemented function")
 {
   A a;
   Implement i;
-  CHECK(a.UseInterface(&i) == 167+168);
+  CHECK(a.UseInterface(&i) == 167 + 168 + 193);
 }
 
+TEST_CASE("Interface callback: new method should be available to new clients")
+{
+  A a;
+  Implement i;
+  CHECK(i.Gunc() == 193);
+}

```

There is no surprise that this new client will work with new library. But the new client, the client of this example, should continue working with old library, the library of [`0080-interface-class`](../0080-interface-class). The automated test `0100-interface-class-and-forwd-compatibility` ensures the client of [`0080-interface-class`](../0080-interface-class) works with library of this example.

There isn't much to talk about in this example, just that client is careful in it's expectation based on which version of library it is being used. And that is a must for clients desiring backward compatibility.

### Running CIB
To make CIB ensures ABI stability we needed to run cib with additional parameter and supply ID file of previous example:

```sh
cib --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example -c ../0080-interface-class/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

