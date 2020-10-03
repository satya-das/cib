/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_TemplateTests-type-converter-base.h"

#include "__zz_cib_TemplateTests-type-traits.h"

namespace __zz_cib_ {

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<std::is_enum_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
{
  T m;

public:
  T convert() const
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

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<std::is_enum_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
{
  __zz_cib_AbiType_t<T> m;

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
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

} // namespace __zz_cib_
