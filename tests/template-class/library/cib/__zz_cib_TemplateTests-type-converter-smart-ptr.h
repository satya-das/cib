/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include "__zz_cib_TemplateTests-type-converter-base.h"

#include "__zz_cib_TemplateTests-smart-ptr-detection.h"

namespace __zz_cib_ {

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T& m;

public:
  using AbiType =
    decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_ReleaseRawPtr(m))>(__zz_cib_ReleaseRawPtr(m)).Convert());

  auto Convert()
  {
    return __zz_cib_CoreTypeToAbiType<decltype(__zz_cib_ReleaseRawPtr(m))>(__zz_cib_ReleaseRawPtr(m)).Convert();
  }

public:
  __zz_cib_CoreTypeToAbiType(T& x)
    : m(x)
  {
  }
  __zz_cib_CoreTypeToAbiType(T&& x)
    : m(x)
  {
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T& mSmartPtr;

  using ClientTypeRawPtr = __zz_cib_SmartPtrUnderlyingType_t<T>;
  using AbiTypeRef       = typename __zz_cib_CoreTypeToAbiType<T>::AbiType;
  using AbiType          = AbiTypeRef*;

  AbiTypeRef mRawPtr;

public:
  auto Convert()
  {
    return &mRawPtr;
  }

public:
  __zz_cib_CoreTypeToAbiType(T& x)
    : mSmartPtr(x)
    , mRawPtr(__zz_cib_CoreTypeToAbiType<T>(x).Convert())
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    mSmartPtr = __zz_cib_FromAbiType<T>(mRawPtr);
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T*, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T* mSmartPtr;

  using ClientTypeRawPtr = __zz_cib_SmartPtrUnderlyingType_t<T>;
  using AbiTypeRef       = typename __zz_cib_CoreTypeToAbiType<T>::AbiType;
  using AbiType          = AbiTypeRef*;

  AbiTypeRef mRawPtr;

public:
  auto Convert()
  {
    return &mRawPtr;
  }

public:
  __zz_cib_CoreTypeToAbiType(T* x)
    : mSmartPtr(x)
    , mRawPtr(x ? __zz_cib_CoreTypeToAbiType<T>(*x).Convert() : nullptr)
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    if (mSmartPtr)
      *mSmartPtr = __zz_cib_FromAbiType<T>(mRawPtr);
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T m;

  using AbiType =
    decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_ReleaseRawPtr(m))>(__zz_cib_ReleaseRawPtr(m)).Convert());

public:
  auto Convert()
  {
    return __zz_cib_CoreTypeToAbiType<decltype(__zz_cib_ReleaseRawPtr(m))>(__zz_cib_ReleaseRawPtr(m)).Convert();
  }

public:
  __zz_cib_CoreTypeToAbiType(T& x)
    : m(std::move(x))
  {
  }
  __zz_cib_CoreTypeToAbiType(T&& x)
    : m(std::move(x))
  {
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  __zz_cib_AbiType_t<T> m;

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
    : m(x)
  {
  }

  operator T()
  {
    return __zz_cib_AttachRawPtr<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(m).Convert());
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T                     mSmartPtr;
  __zz_cib_AbiType_t<T> mRawPtr;
  using UnderlyingType =
    decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_ReleaseRawPtr(mSmartPtr))>(__zz_cib_ReleaseRawPtr(mSmartPtr))
               .Convert());
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T>, UnderlyingType*>);

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
    : mRawPtr(x)
    , mSmartPtr(
        __zz_cib_AttachRawPtr<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(*mRawPtr).Convert()))
  {
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    if (mRawPtr)
      *mRawPtr = __zz_cib_ReleaseRawPtr(mSmartPtr);
  }

  operator T&()
  {
    return mSmartPtr;
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T*, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  __zz_cib_AbiType_t<T*> mRawPtr;
  T                      mSmartPtr;
  using UnderlyingType = __zz_cib_SmartPtrUnderlyingType_t<T>;
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T*>, UnderlyingType*>);

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T*> x)
    : mRawPtr(x)
    , mSmartPtr(
        __zz_cib_AttachRawPtr<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(*mRawPtr).Convert()))
  {
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    if (mRawPtr)
      *mRawPtr = __zz_cib_ReleaseRawPtr(mSmartPtr);
  }

  operator T*()
  {
    return &mSmartPtr;
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  __zz_cib_AbiType_t<T> m;

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
    : m(x)
  {
  }

  operator T()
  {
    return __zz_cib_AttachRawPtr<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(m).Convert());
  }
};

} // namespace __zz_cib_
