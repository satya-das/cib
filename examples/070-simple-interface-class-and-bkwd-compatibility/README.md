## Simple Interface Class and ABI Stability

In example `Simple Interface Class` we have only tackled the cases that is very much expected from a C++ library/program. In this example we will see how CIB ensures ABI stability in the case when virtual table of it's interface class is disrupted. This example is actually next version of previous, `Simple Interface Class`, example.

Below I am showing the diff of new header with previous one.


As it can be seen that only new virtual methods are added to an existing interface. But the new virtual method is added before the existing one and that is the key change. If CIB architecture is not used then such change will break the binary compatibility.

Below is the diff of client code from the previous example:


There is no surprise that this new client will work with new library. But the old client, the client of previous example `simple-interface-class`, should continue working with new library without any change or recompilation. The automated test `simple-interface-class-and-bkwd-compatibility` ensures the client of `simple-interface-class` works with library of this example.

The reason of this **ABI stability** is that virtual tables are not shared across components. CIB shares **MethodTable** instead. Let's see the diff of method table of new library:


As it can be seen that the new method caused a new entry in method table and that happened at the very end of the table, irrespective of the fact that new virtual function was added before the existing one. **So, the older client will continue seeing the method table precisely how they expects it to be and that ensures ABI stability**.

### Running CIB
To make CIB ensure ABI stability we needed to run cib with additional parameter and supplied ID file of previous example:

```sh
cib -i pub -o exp -b cib -m Example -c ../060-simple-interface-class/cib/__zz_cib_Example-ids.h
```

This makes cib understand that we want ABI stability with previous example and CIB generates glue code accordingly.

