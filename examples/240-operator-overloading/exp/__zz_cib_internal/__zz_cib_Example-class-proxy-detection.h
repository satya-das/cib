#pragma once

#include "__zz_cib_Example-class-types.h"

#include <type_traits>

namespace __zz_cib_ {

template <typename T, typename = void>
struct __zz_cib_IsProxyClass : std::false_type
{
};

template <typename T>
struct __zz_cib_IsProxyClass<T, std::enable_if_t<__zz_cib_UsesMethodTable_v<T> && !__zz_cib_SharesLayout_v<T>, void>>
  : std::true_type
{
};

template <typename T>
constexpr bool __zz_cib_IsProxyClass_v = __zz_cib_IsProxyClass<T>::value;

template <typename T>
constexpr bool __zz_cib_IsConstructibleProxy_v = (__zz_cib_IsProxyClass_v<T> && !std::is_abstract_v<T>);

} // namespace __zz_cib_
