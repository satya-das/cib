#include "__zz_cib_Example-exception-convert-to-error.h"
#include "__zz_cib_Example-ids.h"

#include "example.h"

namespace __zz_cib_ {

__zz_cib_AbiException* __zz_cib_ConvertException() {
  try { throw;
  } catch (const CustomDerivedException& e) {
    return __zz_cib_AbiExceptionNew(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classId, new CustomDerivedException(e));
  } catch (const CustomBaseException& e) {
    return __zz_cib_AbiExceptionNew(__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId, new CustomBaseException(e));
  } catch (...) {
    return __zz_cib_AbiExceptionNew(0, nullptr);
  }
  return nullptr;
}

}
