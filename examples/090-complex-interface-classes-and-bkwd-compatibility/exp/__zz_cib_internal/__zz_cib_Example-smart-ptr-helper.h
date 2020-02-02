/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#pragma once

namespace __zz_cib_
{

template <typename SmartPtrT, typename RawPtrBaseT>
SmartPtrT attach(RawPtrBaseT* rawPtr)
{
  return SmartPtrT(rawPtr);
}

template <typename SmartPtrT, typename RawPtrBaseT>
void attach(SmartPtrT& smartPtr, RawPtrBaseT* rawPtr)
{
  smartPtr.reset(rawPtr);
}

template <typename SmartPtrT>
auto* release(SmartPtrT& smartPtr)
{
  return smartPtr.release();
}

/**
 * Helper method to allow smart pointer (and pointer/reference of smart pointer)
 * to get converted into raw pointer.
 *
 * @note It is meant to be called mainly from implementation of proxy classes.
 */
template <typename SmartPtrT, typename RawPtrBaseT>
class __zz_cib_smart_to_raw_helper
{
  SmartPtrT*    smartPtr;
  RawPtrBaseT*  rawPtr;

public:
  __zz_cib_smart_to_raw_helper(__zz_cib_smart_to_raw_helper&& rhs)
    : smartPtr(rhs.smartPtr)
    , rawPtr  (rhs.rawPtr)
  {
    smartPtr = nullptr;
    rawPtr   = nullptr;
  }

public:
  __zz_cib_smart_to_raw_helper(SmartPtrT& _smartPtr)
    : smartPtr(&_smartPtr)
    , rawPtr  (nullptr)
  {
  }

  RawPtrBaseT* convert()
  {
    if (!smartPtr)
      return nullptr;
    auto* ret = release(*smartPtr);
    smartPtr = nullptr;
    return ret;
  }
};

template <typename SmartPtrT, typename RawPtrBaseT>
class __zz_cib_smart_to_raw_helper<SmartPtrT*, RawPtrBaseT>
{
  SmartPtrT*    smartPtr;
  RawPtrBaseT*  rawPtr;

public:
  __zz_cib_smart_to_raw_helper(__zz_cib_smart_to_raw_helper&& rhs)
    : smartPtr(rhs.smartPtr)
    , rawPtr  (rhs.rawPtr)
  {
    smartPtr = nullptr;
    rawPtr   = nullptr;
  }

public:
  __zz_cib_smart_to_raw_helper(SmartPtrT* _smartPtr)
    : smartPtr(_smartPtr)
    , rawPtr  (nullptr)
  {
  }

  RawPtrBaseT** convert()
  {
    if (!smartPtr)
      return nullptr;
    rawPtr = release(*smartPtr);
    return &rawPtr;
  }

  ~__zz_cib_smart_to_raw_helper()
  {
    if (rawPtr && smartPtr)
      attach(*smartPtr, rawPtr);
  }
};

/**
 * Helper method to allow raw pointer
 * to get converted into smart pointer.
 *
 * @note It is meant to be called mainly from glue code of library.
 */
template <typename SmartPtrT, typename RawPtrBaseT>
class __zz_cib_raw_to_smart_helper
{
  SmartPtrT     smartPtr;
  RawPtrBaseT** rawPtr;

public:
  __zz_cib_raw_to_smart_helper(__zz_cib_raw_to_smart_helper&& rhs)
    : smartPtr(std::move(rhs.smartPtr))
    , rawPtr  (rhs.rawPtr)
  {
    rhs.rawPtr = nullptr;
  }

public:
  __zz_cib_raw_to_smart_helper(RawPtrBaseT*& _rawPtr)
    : rawPtr(&_rawPtr)
  {
  }

  operator SmartPtrT()
  {
    auto* ret = rawPtr ? *rawPtr : nullptr;
    rawPtr = nullptr;
    return attach<SmartPtrT, RawPtrBaseT>(ret);
  }

public:
  __zz_cib_raw_to_smart_helper(RawPtrBaseT** _rawPtr)
    : rawPtr(_rawPtr)
  {
  }

  operator SmartPtrT*()
  {
    if (rawPtr == nullptr)
      return nullptr;
    attach(smartPtr, *rawPtr);
    return &smartPtr;
  }

  operator SmartPtrT&()
  {
    if (rawPtr != nullptr)
      attach(smartPtr, *rawPtr);
    return smartPtr;
  }

  ~__zz_cib_raw_to_smart_helper()
  {
    if (rawPtr)
      *rawPtr = release(smartPtr);
  }
};


template <typename SmartPtrT, typename RawPtrBaseT>
auto __zz_cib_make_smart_ptr_helper(SmartPtrT& smartPtr)
{
  return __zz_cib_smart_to_raw_helper<SmartPtrT, typename std::decay<RawPtrBaseT>::type>(smartPtr);
}

template <typename SmartPtrT, typename RawPtrBaseT>
auto __zz_cib_make_smart_ptr_helper(SmartPtrT* smartPtr)
{
  return __zz_cib_smart_to_raw_helper<SmartPtrT, typename std::decay<RawPtrBaseT>::type>(smartPtr);
}

template <typename SmartPtrT>
auto __zz_cib_make_smart_ptr_helper(SmartPtrT& smartPtr)
{
  return __zz_cib_make_smart_ptr_helper<SmartPtrT, decltype(*__zz_cib_::release(smartPtr))>(smartPtr);
}

template <typename SmartPtrT>
auto __zz_cib_make_smart_ptr_helper(SmartPtrT* smartPtr)
{
  return __zz_cib_make_smart_ptr_helper<SmartPtrT, decltype(*__zz_cib_::release(*smartPtr))>(smartPtr);
}

template <typename SmartPtrT>
auto __zz_cib_to_raw_ptr(SmartPtrT& smartPtr)
{
  return (__zz_cib_make_smart_ptr_helper<SmartPtrT, decltype(*__zz_cib_::release(smartPtr))>(smartPtr)).convert();
}

template <typename SmartPtrT>
auto __zz_cib_to_raw_ptr(SmartPtrT* smartPtr)
{
  return (__zz_cib_make_smart_ptr_helper<SmartPtrT, decltype(*__zz_cib_::release(*smartPtr))>(smartPtr)).convert();
}

template <typename SmartPtrT, typename RawPtrBaseT>
auto __zz_cib_to_smart_ptr(RawPtrBaseT* rawPtr)
{
  return __zz_cib_raw_to_smart_helper<SmartPtrT, RawPtrBaseT>(rawPtr);
}

template <typename SmartPtrT, typename RawPtrBaseT>
auto __zz_cib_to_smart_ptr(RawPtrBaseT** rawPtr)
{
  return __zz_cib_raw_to_smart_helper<SmartPtrT, RawPtrBaseT>(rawPtr);
}

}
