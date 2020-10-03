#pragma once

#include "A.h"
#include "__zz_cib_Demo-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A> : std::true_type {};
}
