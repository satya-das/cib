#pragma once

#include "__zz_cib_StlDependencyTest-class-types.h"

#include <type_traits>

namespace __zz_cib_ {

template <typename _T, typename = void>
struct __zz_cib_IsProxyClass : std::false_type
{
};

template <typename _T>
struct __zz_cib_IsProxyClass<_T, std::enable_if_t<__zz_cib_UsesMethodTable_v<_T> && !__zz_cib_SharesLayout_v<_T>, void>>
  : std::true_type
{
};

template <typename _T>
constexpr bool __zz_cib_IsProxyClass_v = __zz_cib_IsProxyClass<_T>::value;

template <typename _T>
constexpr bool __zz_cib_IsConstructibleProxy_v = (__zz_cib_IsProxyClass_v<_T> && !std::is_abstract_v<_T>);

template <typename _T>
constexpr bool __zz_cib_IsAbstractProxy_v = (__zz_cib_IsProxyClass_v<_T> && std::is_abstract_v<_T>);

} // namespace __zz_cib_
