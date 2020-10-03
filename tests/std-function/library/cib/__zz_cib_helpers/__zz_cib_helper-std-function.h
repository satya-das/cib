#pragma once

#include "std-function.h"
#include "__zz_cib_StdFunctionTests-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<B> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<C> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<T> : std::true_type {};
}
