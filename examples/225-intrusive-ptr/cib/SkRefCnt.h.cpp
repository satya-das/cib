#include "SkRefCnt.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace SkRefCntBase {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::SkRefCntBase;
static ::SkRefCntBase* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl ref(const __zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::SkRefCntBase::ref();
}
static void __zz_cib_decl unref(const __zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::SkRefCntBase::unref();
}
}
}}

namespace __zz_cib_ { namespace SkRefCntBase {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ref),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::unref)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
