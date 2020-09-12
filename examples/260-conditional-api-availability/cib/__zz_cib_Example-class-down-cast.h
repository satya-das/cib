/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include <type_traits>

template <typename _D, typename _B, typename = void>
struct __zz_cib_IsStaticCastable : std::false_type
{
};

//* Togglable comment

// I wish this could have been simpler
// A simpler implementation below doesn't work to test static-castability.
// To see that replace '//*' by '/*' few lines above.
template <typename _T, _T*>
using __zz_cib_Void_t = void;

#define __ZZ_CIB_VOID_T(V) __zz_cib_Void_t<decltype(V), V>

// This too is still failing for non-polymorphic class
template <typename _D, typename _B>
struct __zz_cib_IsStaticCastable<_B, _D, __ZZ_CIB_VOID_T(static_cast<_D>(reinterpret_cast<_B>(0xabad1dea)))>
  : std::true_type
{
};

/*/

// This implementation of __zz_cib_IsStaticCastable doesn't work
template <typename _D, typename _B>
struct __zz_cib_IsStaticCastable<_B, _D, std::void_t<decltype(static_cast<_D>(reinterpret_cast<_B>(nullptr)))>>
  : std::true_type
{
};

//*/

template <typename _D, typename _B>
constexpr bool __zz_cib_IsStaticCastable_v = __zz_cib_IsStaticCastable<_D, _B>::value;

template <typename _D, typename _B, typename = void>
struct __zz_cib_DownCastHelper
{
  _B& p;
  __zz_cib_DownCastHelper(_B& _p)
    : p(_p)
  {
  }
  operator _D() const
  {
    return dynamic_cast<_D>(p);
  }
};

template <typename _D, typename _B>
struct __zz_cib_DownCastHelper<_D, _B, std::enable_if_t<__zz_cib_IsStaticCastable_v<_D, _B>, void>>
{
  _B& p;
  __zz_cib_DownCastHelper(_B& _p)
    : p(_p)
  {
  }
  operator _D() const
  {
    return static_cast<_D>(p);
  }
};

template <typename _D, typename _B>
_D __zz_cib_DownCast(_B& p)
{
  return __zz_cib_DownCastHelper<_D, _B>(p);
}
