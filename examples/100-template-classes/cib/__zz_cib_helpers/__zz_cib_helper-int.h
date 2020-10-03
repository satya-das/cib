#pragma once

#include "int.h"
#include "__zz_cib_Example-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<Example::Int> : std::true_type {};
}
