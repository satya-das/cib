/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-type-converter-base.h"

#include "__zz_cib_templates-type-traits.h"

namespace __zz_cib_ {

template <>
class __zz_cib_CoreTypeToAbiType<void>
{
public:
  void Convert() const {}

  __zz_cib_CoreTypeToAbiType(void) {}
};

// clang-format off
template <typename B, typename T>
constexpr bool IsBasicConversionNeededHelper_v =
      (!std::is_class_v<B> && !std::is_function_v<B>)
  ||  (__zz_cib_IsPlainClass_v<B> && !__zz_cib_IsProxyClass_v<B> && !__zz_cib_IsProxiedClass_v<B>)
  ||  (__zz_cib_IsProxiedClass_v<B> && !__zz_cib_IsProxyClass_v<B> && (std::is_reference_v<T> || std::is_pointer_v<T>));
// clang-format on

template <typename T>
constexpr bool IsBasicConversionNeeded_v = IsBasicConversionNeededHelper_v<__zz_cib_RemoveAllDecorations_t<T>, T>;

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<!std::is_reference_v<T> && IsBasicConversionNeeded_v<T>, void>>
{
  using AbiType = std::decay_t<T>;
  AbiType m;

public:
  AbiType Convert()
  {
    return m;
  }

public:
  __zz_cib_CoreTypeToAbiType(T x)
    : m(x)
  {
  }

  operator AbiType() const
  {
    return Convert();
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&, std::enable_if_t<IsBasicConversionNeeded_v<T&>, void>>
{
  T& m;

public:
  using AbiType = T*;

  T* Convert()
  {
    return &m;
  }

public:
  __zz_cib_CoreTypeToAbiType(T& x)
    : m(x)
  {
  }

  operator T*()
  {
    return Convert();
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&&, std::enable_if_t<IsBasicConversionNeeded_v<T&&>, void>>
{
  T& m;

public:
  using AbiType = T*;

  T* Convert()
  {
    return &m;
  }

public:
  __zz_cib_CoreTypeToAbiType(T&& x)
    : m(x)
  {
  }

  operator T*()
  {
    return Convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<!std::is_reference_v<T> && IsBasicConversionNeeded_v<T>, void>>
{
  using AbiType = std::decay_t<T>;
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T>, AbiType>);
  AbiType m;

public:
  __zz_cib_AbiTypeToCoreType(AbiType x)
    : m(x)
  {
  }

  AbiType Convert() const
  {
    return m;
  }

  operator AbiType() const
  {
    return Convert();
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&, std::enable_if_t<IsBasicConversionNeeded_v<T&>, void>>
{
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T&>, T*>);
  __zz_cib_AbiType_t<T&> m;

public:
  __zz_cib_AbiTypeToCoreType(T* x)
    : m(x)
  {
  }

  T& Convert()
  {
    return *m;
  }

  operator T&()
  {
    return Convert();
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&&, std::enable_if_t<IsBasicConversionNeeded_v<T&&>, void>>
{
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T&&>, T*>);
  __zz_cib_AbiType_t<T&&> m;

public:
  __zz_cib_AbiTypeToCoreType(T* x)
    : m(x)
  {
  }

  T&& Convert()
  {
    return std::move(*m);
  }

  operator T &&()
  {
    return Convert();
  }
};

} // namespace __zz_cib_
