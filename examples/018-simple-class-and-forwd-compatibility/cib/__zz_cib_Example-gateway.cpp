#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-export.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable.h"

namespace __zz_cib_ { namespace __zz_cib_Class258 { namespace __zz_cib_Class259 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Example_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Class259::__zz_cib_classid:
    return __zz_cib_::__zz_cib_Class258::__zz_cib_Class259::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
