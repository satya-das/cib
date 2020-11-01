/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include <type_traits>

template <typename _D, typename _B, typename = void>
struct __zz_cib_IsStaticCastable : std::false_type
{
};

template <typename _D, typename _B>
struct __zz_cib_IsStaticCastable<_D, _B, std::void_t<decltype(static_cast<_D>(reinterpret_cast<_B>(0xabad1dea)))>>
  : std::true_type
{
};

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
struct __zz_cib_DownCastHelper<_D, _B, std::enable_if_t<__zz_cib_IsStaticCastable_v<_D, _B>>>
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
