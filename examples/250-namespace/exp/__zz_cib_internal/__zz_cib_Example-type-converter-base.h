/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include <type_traits>

namespace __zz_cib_ {

/**
 * Primary template __zz_cib_CoreTypeToAbiType
 */
template <typename T, typename = void>
class __zz_cib_CoreTypeToAbiType
{
  static_assert(std::is_same_v<T*, T>,
                "Primary template must never be instantiated."
                "Make sure specialization is available for specific types.");

public:
  __zz_cib_CoreTypeToAbiType(T x);

  T convert() const;

  operator T() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
auto __zz_cib_ToAbiType(__zz_cib_CoreTypeToAbiType<std::remove_const_t<T>> obj)
{
  return obj.convert();
}

template <typename T>
using __zz_cib_AbiType_t =
  decltype((static_cast<__zz_cib_CoreTypeToAbiType<std::remove_const_t<T>>*>(nullptr))->convert());

template <typename T, typename D1, typename D2>
using __zz_cib_LazyAbiTypeHelper = __zz_cib_AbiType_t<std::enable_if_t<std::is_same_v<D1, D2>, T>>;

template <typename D, typename T>
using __zz_cib_LazyAbiType_t = __zz_cib_LazyAbiTypeHelper<T, typename D::first_type, typename D::second_type>;

template <typename D, typename T>
auto __zz_cib_LazyAbiType(
  __zz_cib_CoreTypeToAbiType<std::enable_if_t<std::is_same_v<typename D::first_type, typename D::second_type>, T>> obj)
{
  return obj.convert();
}

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Primary template __zz_cib_AbiTypeToCoreType
 */
template <typename T, typename = void>
class __zz_cib_AbiTypeToCoreType
{
  static_assert(std::is_same_v<T*, T>,
                "Primary template must never be instantiated."
                "Make sure specialization is available for specific types.");

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x);

  T convert() const;
    operator T() const;
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
auto __zz_cib_FromAbiType(__zz_cib_AbiType_t<std::remove_const_t<T>> obj)
{
  return __zz_cib_AbiTypeToCoreType<std::remove_const_t<T>>(obj);
}

} // namespace __zz_cib_
