/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-type-converter-base.h"

#include "__zz_cib_templates-class-types.h"
#include "__zz_cib_templates-type-traits.h"

namespace __zz_cib_ {

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<__zz_cib_IsProxiedClass_v<T>, void>>
{
  T m;

public:
  T* Convert()
  {
    return new T(std::move(m));
  }

public:
  __zz_cib_CoreTypeToAbiType(T x)
    : m(std::move(x))
  {
  }

  operator T*()
  {
    return Convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<__zz_cib_IsProxiedClass_v<T>, void>>
{
  static_assert(std::is_same_v<T*, __zz_cib_AbiType_t<T>>);

  T* m;

public:
  __zz_cib_AbiTypeToCoreType(T* x)
    : m(x)
  {
  }

  operator T()
  {
    return std::move(*m);
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    delete m;
  }
};

} // namespace __zz_cib_
