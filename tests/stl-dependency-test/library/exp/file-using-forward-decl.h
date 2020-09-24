#pragma  once
#include <vector>

#include "__zz_cib_internal/file-using-forward-decl-predef.h"

class ExampleClass;
// Below lines will force specialization of std::vector<ExampleClass*>
// and at this point ExampleClass still has incomplete definition.
using VectorOfExampleClassPtr = std::vector<ExampleClass*>;
using IteratorOfVectorOfExampleClassPtr = VectorOfExampleClassPtr::iterator;
#include "__zz_cib_internal/file-using-forward-decl-postdef.h"
