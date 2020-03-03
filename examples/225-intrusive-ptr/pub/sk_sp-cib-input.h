#pragma once

namespace __zz_cib_ {

template <typename _T>
auto* __zz_cib_get(const sk_sp<_T>& p)
{
  return p.get();
}

template <typename _T>
auto* __zz_cib_release(sk_sp<_T>& p)
{
  return p.release();
}

}
