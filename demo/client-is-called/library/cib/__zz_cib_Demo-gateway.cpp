#include "__zz_cib_Demo-decl.h"
#include "__zz_cib_Demo-export.h"
#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-mtable.h"

namespace __zz_cib_ { namespace __zz_cib_Class258 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace __zz_cib_Class257 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Demo_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid:
    return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid:
    return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
