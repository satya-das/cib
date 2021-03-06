/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include <type_traits>

namespace __zz_cib_ {

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// __zz_cib_RemoveAllPointers_t

template <typename T>
struct __zz_cib_Identity
{
  using type = T;
};

template <typename T>
struct __zz_cib_RemoveAllPointers
  : std::conditional_t<std::is_pointer_v<T>, __zz_cib_RemoveAllPointers<std::remove_pointer_t<T>>, __zz_cib_Identity<T>>
{
};

template <typename T>
using __zz_cib_RemoveAllPointers_t = typename __zz_cib_RemoveAllPointers<T>::type;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// __zz_cib_RemoveAllDecorations_t

/**
 * Converts a type to the most basic type on which the given type is based on.
 * T*         -> T
 * T&         -> T
 * const T    -> T
 * const T&   -> T
 * const T*&  -> T
 */
template <typename T>
struct __zz_cib_RemoveAllDecorations
{
  using type = __zz_cib_RemoveAllPointers_t<std::decay_t<std::remove_cv_t<T>>>;
};

template <>
struct __zz_cib_RemoveAllDecorations<va_list>
{
  using type = va_list;
};

template <>
struct __zz_cib_RemoveAllDecorations<va_list&>
{
  using type = va_list&;
};

template <>
struct __zz_cib_RemoveAllDecorations<va_list&&>
{
  using type = va_list&&;
};

template <>
struct __zz_cib_RemoveAllDecorations<va_list*>
{
  using type = va_list*;
};

template <typename T>
using __zz_cib_RemoveAllDecorations_t = typename __zz_cib_RemoveAllDecorations<T>::type;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// clang-format off

template <typename T>
constexpr bool __zz_cib_IsNativeType_v =
  std::is_integral_v<__zz_cib_RemoveAllDecorations_t<T>> ||
  std::is_floating_point_v<__zz_cib_RemoveAllDecorations_t<T>> ||
  std::is_enum_v<__zz_cib_RemoveAllDecorations_t<T>> ||
  (std::is_pointer_v<T> && std::is_void_v<__zz_cib_RemoveAllDecorations_t<T>>) ||
  std::is_same_v<T, va_list> ||
  std::is_same_v<T, va_list&> ||
  std::is_same_v<T, va_list*>
  ;

// clang-format on

} // namespace __zz_cib_
