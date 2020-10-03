#pragma once

#include "example.h"
#include "__zz_cib_Example-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<I> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A> : std::true_type {};
}
