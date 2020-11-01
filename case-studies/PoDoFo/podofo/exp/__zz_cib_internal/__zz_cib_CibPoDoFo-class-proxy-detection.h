#pragma once

#include "__zz_cib_CibPoDoFo-class-types.h"

#include <type_traits>

namespace __zz_cib_ {

template <typename T>
struct __zz_cib_IsProxyClass<T, std::enable_if_t<__zz_cib_UsesMethodTable_v<T> && !__zz_cib_SharesLayout_v<T>>>
  : std::true_type
{
};

} // namespace __zz_cib_
