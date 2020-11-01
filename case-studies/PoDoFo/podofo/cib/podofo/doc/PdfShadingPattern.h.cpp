#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfShadingPattern.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfShadingPattern> : public ::PoDoFo::PdfShadingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfShadingPattern>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfShadingPattern>;

  using ::PoDoFo::PdfShadingPattern::PdfShadingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetIdentifier_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfShadingPattern::GetIdentifier()
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::EPdfShadingPatternType> eShadingType, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfShadingPatternType>(eShadingType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::EPdfShadingPatternType> eShadingType, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfShadingPatternType>(eShadingType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfShadingPattern* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfShadingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class466 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::GetIdentifier_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfShadingPattern>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern> : public ::PoDoFo::PdfAxialShadingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfAxialShadingPattern>;

  using ::PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rStart, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rEnd, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rStart),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rEnd),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rStart, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rEnd, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rStart),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rEnd),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfAxialShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfAxialShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfAxialShadingPattern*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfShadingPattern* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class466(::PoDoFo::PdfAxialShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfAxialShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class466(::PoDoFo::PdfShadingPattern* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfAxialShadingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class467 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_CastTo__zz_cib_Class466),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAxialShadingPattern>::__zz_cib_CastFrom__zz_cib_Class466)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern> : public ::PoDoFo::PdfFunctionBaseShadingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFunctionBaseShadingPattern>;

  using ::PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rLL, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rUL, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rLR, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rUR, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rMatrix, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rLL),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rUL),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rLR),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rUR),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rMatrix),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rLL, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rUL, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rLR, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rUR, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rMatrix, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rLL),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rUL),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rLR),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rUR),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rMatrix),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfFunctionBaseShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFunctionBaseShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFunctionBaseShadingPattern*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfShadingPattern* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class466(::PoDoFo::PdfFunctionBaseShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFunctionBaseShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class466(::PoDoFo::PdfShadingPattern* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFunctionBaseShadingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class468 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_CastTo__zz_cib_Class466),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFunctionBaseShadingPattern>::__zz_cib_CastFrom__zz_cib_Class466)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern> : public ::PoDoFo::PdfRadialShadingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfRadialShadingPattern>;

  using ::PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<double> dR0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<double> dR1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rStart, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rEnd, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dR0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dR1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rStart),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rEnd),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<double> dR0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<double> dR1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rStart, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rEnd, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dR0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dR1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rStart),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rEnd),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfRadialShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfRadialShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfRadialShadingPattern*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfShadingPattern* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class466(::PoDoFo::PdfRadialShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfRadialShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class466(::PoDoFo::PdfShadingPattern* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfRadialShadingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class469 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_CastTo__zz_cib_Class466),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRadialShadingPattern>::__zz_cib_CastFrom__zz_cib_Class466)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern> : public ::PoDoFo::PdfTriangleShadingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfTriangleShadingPattern>;

  using ::PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color1, __zz_cib_AbiType_t<double> dX2, __zz_cib_AbiType_t<double> dY2, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color2, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX2),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY2),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color2),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<double> dX0, __zz_cib_AbiType_t<double> dY0, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color0, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color1, __zz_cib_AbiType_t<double> dX2, __zz_cib_AbiType_t<double> dY2, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> color2, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dX0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY0),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color0),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color1),
    __zz_cib_::__zz_cib_FromAbiType<double>(dX2),
    __zz_cib_::__zz_cib_FromAbiType<double>(dY2),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(color2),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfTriangleShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfTriangleShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfTriangleShadingPattern*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfShadingPattern* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class466(::PoDoFo::PdfTriangleShadingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfTriangleShadingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class466(::PoDoFo::PdfShadingPattern* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfTriangleShadingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class470 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_CastTo__zz_cib_Class466),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTriangleShadingPattern>::__zz_cib_CastFrom__zz_cib_Class466)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
