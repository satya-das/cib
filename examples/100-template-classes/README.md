## Example - C++ Template Classes

Supporting template classes by CIB in ABI compatible and stable way is very interesting because of the fact that an object can only be of concrete type. So, we only need to export concretized types of the template class. And that we can do in the same way as we export other non-template classes. So, let's consider an example:

**FILE**: examples/template-classes/pub/value.h

This is a simple template class that has one template parameter. Now, suppose if there is no function anywhere in the rest of the SDK headers that has a parameter or return type using this template class `Value`. In that case we do not need to do anything for this template class because no instance of any concretized type of this template class is crossing component boundary. But, consider the case when there are functions that use this template class:

**File**: examples/template-classes/pub/example.h

As we can see that `class A` has methods that has parameters of concretized type of template `class Value`. In one instance the template parameter is a built-in type, i.e. `int`, in another case the template parameter is `class Int` which is basically a wrapper of `int`. I have used `class Int` because we do not need anything complex as far as this example is concerned, we only need an example where another class is used as template parameter. Just for sake of completeness, below is the definiton of `class Int`:

**File**: examples/template-classes/pub/int.h

Since, there are 2 concretized types of template `class Value` that crosses component boundary, we basically have 2 new classes instead of 1 templated class. So, we need to export those 2 classes instead of exporting `class Value`. Those classes will have exactly same members as the `class Value` but obviously without any template parameter. But CIB's way of exporting classes is to export their `MethodTable` which is then used to reconstruct classes back on the client side. So, below is the library side glue code to export `MethodTable`s of concretized types of template class:

**File**: examples/template-classes/cib/value.h.cpp

The library side code is very familiar to what we have seen in other cases like `simple-class` example. Only thing new are the name of namespaces `__zz_cib_Class3` and `__zz_cib_Class4`. For regular classes the name of these namespaces are same as class name but the name of concretized type of template class is unsuitable to be used as namespace name. For instance names of concretized types in this example are `Value<int>`, and `Value<Int>`, these cannot be used as namespace name. So, CIB makes up unique names of these classes. It doesn't matter as long as developers don't need to use these names and they are only used in glue code.

Now we need to look what does client side glue code contain to make these types available to clients. To begin with let's have a look at client side header file containing the template class definition. For explanation purpose I have produced below the `diff` of this file with original:


We see that class definiton is exactly same as original class definition, and the header contains usual extra inclusion.
But, what we want is that when client code uses something like `Value<int>` or `Value<Int>` the corresponding concretized types on library side should be used instead of compiler generated type on client side. For that what we need is specialization of these types on client side uses `MethodTable` exported by library. So, let's have a look at the specialization of `Value<int>`:

**File**: examples/template-classes/exp/__zz_cib_internal/__zz_cib_Class4.h

Here we have specialization of `Value<int>`, if you notice the definition is very similar to what we see for other classes. Only thing is that the template class specialization present in somewhat _hidden_ file. But we need this specialization available to client code so that wherever client does `Value<int>` this specialization should be picked by compiler instead of concretizing on it's own.
If you notice there is an inclusion of file `__zz_cib_internal/value-impl.h` at the end in the header file that contains definition of template `class Value`.

Let's see what that `value-impl.h` contains:

**File**: examples/template-classes/exp/__zz_cib_internal/value-impl.h

There you go, this file has `#include "__zz_cib_Class4.h"` which brings the template specialization of type `Value<int>` to whoever includes `value.h`. So, whenever client code has something like `Value<int>` the library side instance of `Value<int>` is used in the same way as any other regular class is used.

Now, we will look at what happens when client code uses another class as template parameter, for example what happens when client code has something like `Value<Int>`. In this case also we need to have a template specialization that uses library exported `MethodTable`. For sake of brevity I am not going to show code anymore, I will just outline how things are done.

For this case also client side glue code has template specialization of `Value<Int>` in file `__zz_cib_internal/__zz_cib_Class3.h`, exactly in the same way it did for previous case. Here also, we want to make sure this specialization is avaliable to the client whenever client code has `Value<Int>`. The specialization gets delivered to the client whenever client code includes `int.h` file, because file `__zz_cib_internal/__zz_cib_Class3.h` is included in `__zz_cib_internal/int-impl.h` which is included in `exp/int.h`.

So, whenever client code has something like `Value<Int>` the library side instance of `Value<Int>` is used in the same way as any other regular class is used.

This concludes our discussion about how templates can be supported using CIB architecture. As of now `cib` tool supports many other cases of template classes but more
complex case like template template parameters will be supported in future.

