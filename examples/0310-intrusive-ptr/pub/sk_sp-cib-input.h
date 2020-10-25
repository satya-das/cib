#pragma once

namespace __zz_cib_ {

template <typename T>
auto* __zz_cib_GetRawPtr(const sk_sp<T>& p)
{
  return p.get();
}

template <typename T>
auto* __zz_cib_ReleaseRawPtr(sk_sp<T>& p)
{
  return p.release();
}

}
