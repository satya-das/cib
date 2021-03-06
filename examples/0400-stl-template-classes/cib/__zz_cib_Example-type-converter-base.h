/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include <type_traits>

namespace __zz_cib_ {

/**
 * Responsible for converting from objects of core types to objects
 * of Abi types. Core types are types that are used by core of library and client. Abi types are types that cross
 * component boundary.
 *
 * Every specializations of __zz_cib_CoreTypeToAbiType should have at least those members that are declared here.
 * @note This is only a primary template and is never instantiated.
 */
template <typename T, typename = void>
class __zz_cib_CoreTypeToAbiType
{
  static_assert(std::is_same_v<T*, T>, "Primary template is never instantiated.");

public:
  __zz_cib_CoreTypeToAbiType(T x);

  T Convert() const;

  operator T() const
  {
    return Convert();
  }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
using __zz_cib_AbiType_t =
  decltype((static_cast<__zz_cib_CoreTypeToAbiType<std::remove_const_t<T>>*>(nullptr))->Convert());

template <typename T>
__zz_cib_AbiType_t<T> __zz_cib_ToAbiType(__zz_cib_CoreTypeToAbiType<std::remove_const_t<T>>&& obj)
{
  return obj.Convert();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T, typename D1, typename D2>
using __zz_cib_LazyAbiTypeHelper = __zz_cib_AbiType_t<std::enable_if_t<std::is_same_v<D1, D2>, T>>;

template <typename D, typename T>
using __zz_cib_LazyAbiType_t = __zz_cib_LazyAbiTypeHelper<T, typename D::first_type, typename D::second_type>;

template <typename D, typename T>
auto __zz_cib_LazyAbiType(
  __zz_cib_CoreTypeToAbiType<std::enable_if_t<std::is_same_v<typename D::first_type, typename D::second_type>, T>> obj)
{
  return obj.Convert();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Responsible for converting objects of Abi Type to objects of core type.
 *
 * All specializations should have at least those members that are declared here.
 * @note This is only a primary template and is never instantiated.
 */
template <typename T, typename = void>
class __zz_cib_AbiTypeToCoreType
{
  static_assert(std::is_same_v<T*, T>, "Primary template is never instantiated.");

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x);

  T Convert() const;
    operator T() const;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
auto __zz_cib_FromAbiType(__zz_cib_AbiType_t<std::remove_const_t<T>> obj)
{
  return __zz_cib_AbiTypeToCoreType<std::remove_const_t<T>>(obj);
}

} // namespace __zz_cib_
