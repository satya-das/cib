/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_StdFunctionTests-type-converter-base.h"

#include "__zz_cib_StdFunctionTests-type-traits.h"

namespace __zz_cib_ {

template <>
class __zz_cib_CoreTypeToAbiType<void>
{
public:
  void convert() const {}

  __zz_cib_CoreTypeToAbiType(void) {}
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<!std::is_reference_v<T> && __zz_cib_IsNativeType_v<T>, void>>
{
  T m;

public:
  T convert()
  {
    return m;
  }

public:
  __zz_cib_CoreTypeToAbiType(T x)
    : m(x)
  {
  }

  operator T() const
  {
    return convert();
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&, std::enable_if_t<__zz_cib_IsNativeType_v<T>, void>>
{
  T& m;

public:
  using AbiType = T*;

  T* convert()
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
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<!std::is_reference_v<T> && __zz_cib_IsNativeType_v<T>, void>>
{
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T>, T>);
  T m;

public:
  __zz_cib_AbiTypeToCoreType(T x)
    : m(x)
  {
  }

  T convert() const
  {
    return m;
  }

  operator T() const
  {
    return convert();
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&, std::enable_if_t<__zz_cib_IsNativeType_v<T>, void>>
{
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T&>, T*>);
  __zz_cib_AbiType_t<T&> m;

public:
  __zz_cib_AbiTypeToCoreType(T* x)
    : m(x)
  {
  }

  T& convert()
  {
    return *m;
  }

  operator T&()
  {
    return convert();
  }
};

} // namespace __zz_cib_
