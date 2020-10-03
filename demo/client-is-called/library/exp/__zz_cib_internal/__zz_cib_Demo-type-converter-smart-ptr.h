/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Demo-type-converter-base.h"

#include "__zz_cib_Demo-smart-ptr-detection.h"

namespace __zz_cib_ {

template <typename T>
class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T& m;

public:
  using AbiType = decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert());

  auto convert()
  {
    return __zz_cib_CoreTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert();
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

  operator AbiType() const
  {
    return convert();
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
  auto convert()
  {
    return &mRawPtr;
  }

public:
  __zz_cib_CoreTypeToAbiType(T& x)
    : mSmartPtr(x)
    , mRawPtr(__zz_cib_CoreTypeToAbiType<T>(x).convert())
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    mSmartPtr = __zz_cib_FromAbiType<T>(mRawPtr);
  }

  operator AbiType()
  {
    return convert();
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
  auto convert()
  {
    return &mRawPtr;
  }

public:
  __zz_cib_CoreTypeToAbiType(T* x)
    : mSmartPtr(x)
    , mRawPtr(x ? __zz_cib_CoreTypeToAbiType<T>(*x).convert() : nullptr)
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    if (mSmartPtr)
      *mSmartPtr = __zz_cib_FromAbiType<T>(mRawPtr);
  }

  operator AbiType()
  {
    return convert();
  }
};

template <typename T>
class __zz_cib_CoreTypeToAbiType<T&&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T m;

  using AbiType = decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert());

public:
  auto convert()
  {
    return __zz_cib_CoreTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert();
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

  operator AbiType()
  {
    return convert();
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
    return __zz_cib_attach<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(m).convert());
  }
};

template <typename T>
class __zz_cib_AbiTypeToCoreType<T&, std::enable_if_t<__zz_cib_IsSmartPtr_v<T>, void>>
{
  T                     mSmartPtr;
  __zz_cib_AbiType_t<T> mRawPtr;
  using UnderlyingType =
    decltype(__zz_cib_CoreTypeToAbiType<decltype(__zz_cib_release(mSmartPtr))>(__zz_cib_release(mSmartPtr)).convert());
  static_assert(std::is_same_v<__zz_cib_AbiType_t<T>, UnderlyingType*>);

public:
  __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
    : mRawPtr(x)
    , mSmartPtr(
        __zz_cib_attach<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(*mRawPtr).convert()))
  {
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    if (mRawPtr)
      *mRawPtr = __zz_cib_release(mSmartPtr);
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
        __zz_cib_attach<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(*mRawPtr).convert()))
  {
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    if (mRawPtr)
      *mRawPtr = __zz_cib_release(mSmartPtr);
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
    return __zz_cib_attach<T>(__zz_cib_AbiTypeToCoreType<__zz_cib_SmartPtrUnderlyingType_t<T>>(m).convert());
  }
};

} // namespace __zz_cib_
