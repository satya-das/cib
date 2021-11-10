// This file is almost a copy from skia project.

/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
#ifndef SkRefCnt_DEFINED
#  define SkRefCnt_DEFINED
#  include <atomic>
#  include <cassert>
#  include <cstddef>
#  include <iosfwd>
#  include <memory>
#  include <type_traits>
#  include <utility>

#include "__zz_cib_internal/SkRefCnt-predef.h"

class SkRefCntBase
{
public:
  /** Default construct, initializing the reference count to 1.
  */
  SkRefCntBase();
  /** Destruct, asserting that the reference count is 1.
  */
  virtual ~SkRefCntBase();
  /** Increment the reference count. Must be balanced by a call to unref().
  */
  void ref() const;
  /** Decrement the reference count. If the reference count is 1 before the
      decrement, then delete the object. Note that if this is the case, then
      the object needs to have been allocated via new, and not on the stack.
  */
  void unref() const;
  /**
   *  Called when the ref count goes to 0.
   */
  virtual void internal_dispose() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(SkRefCntBase, SkRefCntBase);
};

///////////////////////////////////////////////////////////////////////////////

/** Call obj->ref() and return obj. The obj must not be nullptr.
 */
template <typename T>
static T* SkRef(T* obj)
{
  assert(obj);
  obj->ref();
  return obj;
}
/** Check if the argument is non-null, and if so, call obj->ref() and return obj.
 */
template <typename T>
static T* SkSafeRef(T* obj)
{
  if (obj)
  {
    obj->ref();
  }
  return obj;
}
/** Check if the argument is non-null, and if so, call obj->unref()
 */
template <typename T>
static void SkSafeUnref(T* obj)
{
  if (obj)
  {
    obj->unref();
  }
}
///////////////////////////////////////////////////////////////////////////////////////////////////

/**
 *  Shared pointer class to wrap classes that support a ref()/unref() interface.
 *
 *  This can be used for classes inheriting from SkRefCnt, but it also works for other
 *  classes that match the interface, but have different internal choices: e.g. the hosted class
 *  may have its ref/unref be thread-safe, but that is not assumed/imposed by sk_sp.
 */
template <typename T>
class sk_sp
{
public:
  using element_type = T;
  sk_sp()
    : fPtr(nullptr)
  {
  }
  sk_sp(std::nullptr_t)
    : fPtr(nullptr)
  {
  }
    /**
     *  Shares the underlying object by calling ref(), so that both the argument and the newly
     *  created sk_sp both have a reference to it.
     */
  sk_sp(const sk_sp<T>& that)
    : fPtr(SkSafeRef(that.get()))
  {
  }
  template <typename U, typename  = typename std::enable_if<std::is_convertible<U*, T*>::value>::type>
  sk_sp(const sk_sp<U>& that)
    : fPtr(SkSafeRef(that.get()))
  {
  }
    /**
     *  Move the underlying object from the argument to the newly created sk_sp. Afterwards only
     *  the new sk_sp will have a reference to the object, and the argument will point to null.
     *  No call to ref() or unref() will be made.
     */
  sk_sp(sk_sp<T>&& that)
    : fPtr(that.release())
  {
  }
  template <typename U, typename  = typename std::enable_if<std::is_convertible<U*, T*>::value>::type>
  sk_sp(sk_sp<U>&& that)
    : fPtr(that.release())
  {
  }
    /**
     *  Adopt the bare pointer into the newly created sk_sp.
     *  No call to ref() or unref() will be made.
     */
  explicit sk_sp(T* obj)
    : fPtr(obj)
  {
  }
    /**
     *  Calls unref() on the underlying object pointer.
     */
  ~sk_sp()
  {
    SkSafeUnref(fPtr);
  }
  sk_sp<T>& operator=(std::nullptr_t)
  {
    this->reset();
    return *this;
  }
    /**
     *  Shares the underlying object referenced by the argument by calling ref() on it. If this
     *  sk_sp previously had a reference to an object (i.e. not null) it will call unref() on that
     *  object.
     */
  sk_sp<T>& operator=(const sk_sp<T>& that)
  {
    if (this != &that)
    {
      this->reset(SkSafeRef(that.get()));
    }
    return *this;
  }
  template <typename U, typename  = typename std::enable_if<std::is_convertible<U*, T*>::value>::type>
  sk_sp<T>& operator=(const sk_sp<U>& that)
  {
    this->reset(SkSafeRef(that.get()));
    return *this;
  }
    /**
     *  Move the underlying object from the argument to the sk_sp. If the sk_sp previously held
     *  a reference to another object, unref() will be called on that object. No call to ref()
     *  will be made.
     */
  sk_sp<T>& operator=(sk_sp<T>&& that)
  {
    this->reset(that.release());
    return *this;
  }
  template <typename U, typename  = typename std::enable_if<std::is_convertible<U*, T*>::value>::type>
  sk_sp<T>& operator=(sk_sp<U>&& that)
  {
    this->reset(that.release());
    return *this;
  }
  T& operator*() const
  {
    assert(this->get() != nullptr);
    return *this->get();
  }
  operator bool() const
  {
    return this->get() != nullptr;
  }
  T* get() const
  {
    return fPtr;
  }
  T* operator->() const
  {
    return fPtr;
  }
    /**
     *  Adopt the new bare pointer, and call unref() on any previously held object (if not null).
     *  No call to ref() will be made.
     */
  void reset(T* ptr = nullptr)
  {
        // Calling fPtr->unref() may call this->~() or this->reset(T*).
        // http://wg21.cmeerw.net/lwg/issue998
        // http://wg21.cmeerw.net/lwg/issue2262
    T* oldPtr = fPtr;
    fPtr = ptr;
    SkSafeUnref(oldPtr);
  }
    /**
     *  Return the bare pointer, and set the internal object pointer to nullptr.
     *  The caller must assume ownership of the object, and manage its reference count directly.
     *  No call to unref() will be made.
     */
  T* release()
  {
    T* ptr = fPtr;
    fPtr = nullptr;
    return ptr;
  }
  void swap(sk_sp<T>& that)
  {
    using std::swap;
    swap(fPtr, that.fPtr);
  }
private:
  T* fPtr;
};

template <typename T>
inline void swap(sk_sp<T>& a, sk_sp<T>& b)
{
  a.swap(b);
}
template <typename T, typename U>
inline bool operator==(const sk_sp<T>& a, const sk_sp<U>& b)
{
  return a.get() == b.get();
}
template <typename T>
inline bool operator==(const sk_sp<T>& a, std::nullptr_t)
{
  return !a;
}
template <typename T>
inline bool operator==(std::nullptr_t, const sk_sp<T>& b)
{
  return !b;
}
template <typename T, typename U>
inline bool operator!=(const sk_sp<T>& a, const sk_sp<U>& b)
{
  return a.get() != b.get();
}
template <typename T>
inline bool operator!=(const sk_sp<T>& a, std::nullptr_t)
{
  return static_cast<bool>(a);
}
template <typename T>
inline bool operator!=(std::nullptr_t, const sk_sp<T>& b)
{
  return static_cast<bool>(b);
}
template <typename C, typename CT, typename T>
auto operator<<(std::basic_ostream<C, CT>& os, const sk_sp<T>& sp) -> decltype(os << sp.get())
{
  return os << sp.get();
}
/*
 *  Returns a sk_sp wrapping the provided ptr AND calls ref on it (if not null).
 *
 *  This is different than the semantics of the constructor for sk_sp, which just wraps the ptr,
 *  effectively "adopting" it.
 */
template <typename T>
sk_sp<T> sk_ref_sp(T* obj)
{
  return sk_sp<T>(SkSafeRef(obj));
}
template <typename T>
sk_sp<T> sk_ref_sp(const T* obj)
{
  return sk_sp<T>(const_cast<T*>(SkSafeRef(obj)));
}
// Make cib aware about sk_sp smart pointer
#  include "sk_sp-cib-input.h"
#include "__zz_cib_internal/SkRefCnt-postdef.h"
#endif
