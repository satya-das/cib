## Example - Simple Class and Backward Compatibility

In this example we will see the case when library modifies it's class and how the old client will keep working without recompiling. The library in this example is actually the next version of library from immediate previous example. So, let's just see the diff of the header file:

```diff
--- 010-simple-class/pub/example.h
+++ 015-simple-class-and-bkwd-compatibility/pub/example.h
@@ -1,20 +1,21 @@
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
     
   private:
+    double f {0.0};
     int x {1};
   };
 }
 

```

As we can see that only change in the class is addition of new data members. If the library and client are linked together in traditional way then this is certain to cause ABI stability issue. But with CIB we achieve perfect isolation and old client will keep working with new library.
If you see the diff of all the glue code of this example with the glue code of previous example, we are not going to see any difference. And since glue code defines and uses ABI at component boundary the ABI bound to remain stable.


