#include "template.h"

#include "__zz_cib_TemplateTests-class-down-cast.h"
#include "__zz_cib_TemplateTests-delegate-helper.h"
#include "__zz_cib_TemplateTests-generic.h"
#include "__zz_cib_TemplateTests-ids.h"
#include "__zz_cib_TemplateTests-type-converters.h"
#include "__zz_cib_TemplateTests-mtable-helper.h"
#include "__zz_cib_TemplateTests-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::TemplateClassWithOneParam<int>> : public ::TemplateClassWithOneParam<int> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::TemplateClassWithOneParam<int>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::TemplateClassWithOneParam<int>::TemplateClassWithOneParam;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<int> _a1) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(_a1));
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl get_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::TemplateClassWithOneParam<int>::get()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithOneParam<int>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithOneParam<int>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithOneParam<int>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithOneParam<int>>::get_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>> : public ::TemplateClassWithTwoParams<int, float> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<int> _a1, __zz_cib_AbiType_t<float> _a2) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(_a1),
    __zz_cib_::__zz_cib_FromAbiType<float>(_a2));
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl get1_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::TemplateClassWithTwoParams<int, float>::get1()
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl get2_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::TemplateClassWithTwoParams<int, float>::get2()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>::get1_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParams<int, float>>::get2_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>> : public ::TemplateClassWithTwoParamsAndDefaultParameter<int, int> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>::TemplateClassWithTwoParamsAndDefaultParameter;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<int> _a1, __zz_cib_AbiType_t<int> _a2) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(_a1),
    __zz_cib_::__zz_cib_FromAbiType<int>(_a2));
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl get1_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::TemplateClassWithTwoParamsAndDefaultParameter<int, int>::get1()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl get2_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::TemplateClassWithTwoParamsAndDefaultParameter<int, int>::get2()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>::get1_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>::get2_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::TemplateTest> : public ::TemplateTest {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::TemplateTest>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::TemplateTest::TemplateTest;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::TemplateClassWithOneParam<int>> __zz_cib_decl getTemplateClassWithOneParam_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::TemplateClassWithOneParam<int>>(
      __zz_cib_obj->::TemplateTest::getTemplateClassWithOneParam()
    );
  }
  static __zz_cib_AbiType_t<::TemplateClassWithTwoParams<int, float>> __zz_cib_decl getTemplateClassWithTwoParams_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::TemplateClassWithTwoParams<int, float>>(
      __zz_cib_obj->::TemplateTest::getTemplateClassWithTwoParams()
    );
  }
  static __zz_cib_AbiType_t<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>> __zz_cib_decl getTemplateClassWithTwoParamsAndDefaultParameter_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>(
      __zz_cib_obj->::TemplateTest::getTemplateClassWithTwoParamsAndDefaultParameter()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::getTemplateClassWithOneParam_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::getTemplateClassWithTwoParams_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::TemplateTest>::getTemplateClassWithTwoParamsAndDefaultParameter_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
