#include "__zz_cib_internal/__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-def.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-mtable-helper.h"

#include "podofo/base/PdfLocale.h"
#include "podofo/base/PdfMemoryManagement.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfFontMetricsBase14.h"

namespace __zz_cib_ { namespace PoDoFo {
struct __zz_cib_Helper : public __zz_cib_MethodTableHelper {
using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_MethodId;

__zz_cib_Helper()
  : __zz_cib_MethodTableHelper(
    __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_classId))
{}
static __zz_cib_Helper& __zz_cib_Instance() {
  static __zz_cib_Helper helper;
  return helper;
}
static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
  return __zz_cib_Instance();
}

  template <typename _RT, typename ..._Args>
  static auto PdfLocaleImbue_0(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::PdfLocaleImbue_0>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto podofo_malloc_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::podofo_malloc_1>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto podofo_calloc_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::podofo_calloc_2>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto podofo_realloc_3(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::podofo_realloc_3>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto podofo_free_4(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::podofo_free_4>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto podofo_is_little_endian_5() {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::podofo_is_little_endian_5>(
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetAppearanceStreamForObject_6(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetAppearanceStreamForObject_6>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto PODOFO_Base14FontDef_FindBuiltinData_7(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::PODOFO_Base14FontDef_FindBuiltinData_7>(
      __zz_cib_args...);
  }
};
}}

void PoDoFo::PdfLocaleImbue(std::ios_base& __zz_cib_param0) {
    __zz_cib_::PoDoFo::__zz_cib_Helper::PdfLocaleImbue_0<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
    );
  }

void* PoDoFo::podofo_malloc(size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_malloc_1<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void* PoDoFo::podofo_calloc(size_t count, size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_calloc_2<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(count)>(std::move(count)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void* PoDoFo::podofo_realloc(void* buffer, size_t size) {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_realloc_3<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(buffer)>(std::move(buffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    )
  );
}

void PoDoFo::podofo_free(void* buffer) {
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_free_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(buffer)>(std::move(buffer))
    );
  }

bool PoDoFo::podofo_is_little_endian() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::podofo_is_little_endian_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(

    )
  );
}

void PoDoFo::SetAppearanceStreamForObject(::PoDoFo::PdfObject* pForObject, ::PoDoFo::PdfXObject* pObject, ::PoDoFo::EPdfAnnotationAppearance eAppearance, const ::PoDoFo::PdfName& state) {
    __zz_cib_::PoDoFo::__zz_cib_Helper::SetAppearanceStreamForObject_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pForObject)>(std::move(pForObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAppearance)>(std::move(eAppearance)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(state)
    );
  }

const ::PoDoFo::PdfFontMetricsBase14* PoDoFo::PODOFO_Base14FontDef_FindBuiltinData(const char* font_name) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontMetricsBase14*>(
    __zz_cib_::PoDoFo::__zz_cib_Helper::PODOFO_Base14FontDef_FindBuiltinData_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfFontMetricsBase14*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(font_name)>(std::move(font_name))
    )
  );
}
