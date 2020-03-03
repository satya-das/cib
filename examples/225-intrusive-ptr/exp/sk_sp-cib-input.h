#pragma  once

#include "__zz_cib_internal/sk_sp-cib-input-predef.h"

namespace __zz_cib_
{
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

#include "__zz_cib_internal/sk_sp-cib-input-postdef.h"
