#include "__zz_cib_Demo-decl.h"
#include "__zz_cib_Demo-export.h"
#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-mtable.h"

namespace __zz_cib_ { namespace __zz_cib_Class260 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace __zz_cib_Class257 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace __zz_cib_Class256 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_DemoGetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_classId:
    return __zz_cib_::__zz_cib_Class260::__zz_cib_GetMethodTable();
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classId:
    return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_classId:
    return __zz_cib_::__zz_cib_Class256::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
