#pragma once

#include "example.h"
#include "__zz_cib_Example-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<Facade> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<PublicFacadeImpl> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A::PrivateFacadeImpl1> : std::true_type {};
}
namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<A::PrivateFacadeImpl2> : std::true_type {};
}
