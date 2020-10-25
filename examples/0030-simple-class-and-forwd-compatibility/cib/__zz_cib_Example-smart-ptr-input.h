/*
    This file is for helping cib handle smart pointers.

    Please provide definitions of __zz_cib_GetRawPtr(), __zz_cib_ReleaseRawPtr(), and __zz_cib_AttachRawPtr().
*/

#pragma once

#include <memory>

namespace __zz_cib_ {

template <typename T>
auto* __zz_cib_GetRawPtr(const std::unique_ptr<T>& p)
{
  return p.get();
}

template <typename T>
auto* __zz_cib_ReleaseRawPtr(std::unique_ptr<T>& p)
{
  return p.release();
}

template <typename _SmartPtrT, typename T>
_SmartPtrT __zz_cib_AttachRawPtr(T* rawPtr)
{
  return _SmartPtrT(rawPtr);
}

template <typename T>
using __zz_cib_SmartPtrUnderlyingType_t = decltype(__zz_cib_GetRawPtr(T()));

} // namespace __zz_cib_
