# Appendix

## Symbol `__zz_cib_`
We see CIB generated code contain lots of symbols that start with `__zz_cib_` and there is a top level namespace with exact same name. CIB has chosen this so that:

  - Genearted code doesn't pollute global namespace.
  - Generated code doesn't clash with any possible name used in library or client code.
  - Since the name starts with double underscore it is expected that developers will stay away from directly using it. There are safeguards in place to not allow that even when developer wants to use them, but still it is better to not let developer think these symbols should be accessed.
  - In an ordered listing of symbols `__zz_cib_` should appear towards the end and so intellisense suggestions of IDE will possibly not contain it before some more meaningful symbols.
  - Uniqueness is not required but it is better not to pollute namespace used by core program. So, CIB puts all it's generated symbols inside an umbrella namespace `__zz_cib_` which is very unlikely to be the name used by core programs.
  - This has nothing to do with name mangling, I am mentioning because someone thought `cib` does some name mangling of it's own because of this weird looking symbol.

## Why MethodTable
For calling library functions we do not strictly need MethodTable. We could have just exported functions with extern "C" declrations. But there are reasons why MethodTable is chosen:
  - It is helpful in supporting overload functions.
  - We don't need to have unique names for every functions in entire library.
  - Helps supporting backward compatibility
    - When new client is run with old library then it can be problematic when client invokes methods that are present only in new library. Since `MethodTable` is a table of function pointers we can check if non-null pointer is present in the MethodTable otherwise we can throw `std::bad_function_call` from the glue code which client can catch and take adequate action. So, a client that wants to be backward compatible and still wants to use new functionalities can do that if it handles `std::bad_function_call` exception for methods present only in new library.
    - Same applies to new library with old client when library uses new method of interface.
  - Helpful in deprecating functions. A deprecated method can be removed from class declaration but it can still be present in MethodTable so that old client will keep working with new library and when same client is recompiled with new headers it will have to remove usage of new methods in order to make it compile without errors.

## Design choice of MethodTable
MethodTable can have alternate design choice of being a `struct` of function pointers instead of array of function pointers. And that too can serve the purpose and in some cases be better. But CIB uses array for following reasons:
- Array helps in reducing total number of constructs. In case MethodTable is a struct of function pointers we will need many structs.
- Using array we can fetch function pointer by an index. Those index can be treated as function ID. If those ID is changed or removed it will be easy to detect and warn the library author of breaking the compatibility.
- With array we only export one function from library. In case of struct all the structs and their getter functions need to be exported.
- Class methods may use parameter types defined within the class itself which in some cases may not accessible from outside. Creating a `struct` of function pointers whose parameters are of such types will be tricky.
