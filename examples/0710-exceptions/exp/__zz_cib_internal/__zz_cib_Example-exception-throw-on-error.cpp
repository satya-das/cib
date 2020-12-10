#include "__zz_cib_Example-exception-throw-on-error.h"
#include "__zz_cib_Example-ids.h"

#include "example.h"

namespace __zz_cib_ {

void __zz_cib_ThrowExceptionOnError(__zz_cib_AbiException* __zz_cib_exception) {
  const auto classId = __zz_cib_exception->classId;
  const auto handle = __zz_cib_exception->handle;
  __zz_cib_AbiExceptionDelete(__zz_cib_exception);
  switch(classId) {
    case __zz_cib_ids::__zz_cib_Class259::__zz_cib_classId: {
      auto __zz_cib_obj = reinterpret_cast<__zz_cib_AbiType_t<CustomDerivedException>>(handle);
      throw __zz_cib_AbiTypeToCoreType<CustomDerivedException>(__zz_cib_obj).Convert();
    }
    case __zz_cib_ids::__zz_cib_Class258::__zz_cib_classId: {
      auto __zz_cib_obj = reinterpret_cast<__zz_cib_AbiType_t<CustomBaseException>>(handle);
      throw __zz_cib_AbiTypeToCoreType<CustomBaseException>(__zz_cib_obj).Convert();
    }
  }
  throw __zz_cib_UnknownException();
}

}
