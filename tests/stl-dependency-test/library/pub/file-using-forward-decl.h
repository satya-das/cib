#pragma once

#include <vector>

class ExampleClass;

// Below lines will force specialization of std::vector<ExampleClass*>
// and at this point ExampleClass still has incomplete definition.
using VectorOfExampleClassPtr           = std::vector<ExampleClass*>;
using IteratorOfVectorOfExampleClassPtr = VectorOfExampleClassPtr::iterator;
