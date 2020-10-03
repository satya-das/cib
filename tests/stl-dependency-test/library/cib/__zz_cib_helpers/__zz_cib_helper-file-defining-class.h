#pragma once

#include "file-defining-class.h"
#include "__zz_cib_StlDependencyTest-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<ExampleClass> : std::true_type {};
}
