#include "podofo/base/PdfError.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

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
struct __zz_cib_Delegator<::PoDoFo::PdfErrorInfo> : public ::PoDoFo::PdfErrorInfo {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfErrorInfo::PdfErrorInfo;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<const char*> pszInfo) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(line),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInfo));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<std::string> pszInfo) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(line),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
    __zz_cib_::__zz_cib_FromAbiType<std::string>(pszInfo));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<const wchar_t*> pszInfo) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(line),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
    __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszInfo));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfErrorInfo&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfErrorInfo&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfErrorInfo&>(
      __zz_cib_obj->::PoDoFo::PdfErrorInfo::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfErrorInfo&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetLine_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfErrorInfo::GetLine()
    );
  }
  static __zz_cib_AbiType_t<const std::string&> __zz_cib_decl GetFilename_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::string&>(
      __zz_cib_obj->::PoDoFo::PdfErrorInfo::GetFilename()
    );
  }
  static __zz_cib_AbiType_t<const std::string&> __zz_cib_decl GetInformation_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::string&>(
      __zz_cib_obj->::PoDoFo::PdfErrorInfo::GetInformation()
    );
  }
  static __zz_cib_AbiType_t<const std::wstring&> __zz_cib_decl GetInformationW_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::wstring&>(
      __zz_cib_obj->::PoDoFo::PdfErrorInfo::GetInformationW()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInformation_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszInfo) {
    __zz_cib_obj->::PoDoFo::PdfErrorInfo::SetInformation(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInfo)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInformation_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<std::string> pszInfo) {
    __zz_cib_obj->::PoDoFo::PdfErrorInfo::SetInformation(
      __zz_cib_::__zz_cib_FromAbiType<std::string>(pszInfo)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInformation_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const wchar_t*> pszInfo) {
    __zz_cib_obj->::PoDoFo::PdfErrorInfo::SetInformation(
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszInfo)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class369 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_Copy_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::GetLine_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::GetFilename_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::GetInformation_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::GetInformationW_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::SetInformation_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::SetInformation_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfErrorInfo>::SetInformation_13)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfError> : public ::PoDoFo::PdfError {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfError::PdfError;

  static __zz_cib_AbiType_t<::PoDoFo::PdfError::LogMessageCallback*> __zz_cib_decl SetLogMessageCallback_0(__zz_cib_AbiType_t<::PoDoFo::PdfError::LogMessageCallback*> fLogMessageCallback) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfError::LogMessageCallback*>(
      ::PoDoFo::PdfError::SetLogMessageCallback(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfError::LogMessageCallback*>(fLogMessageCallback)
      )
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszInformation) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
    __zz_cib_::__zz_cib_FromAbiType<int>(line),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInformation));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<std::string> sInformation) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
    __zz_cib_::__zz_cib_FromAbiType<int>(line),
    __zz_cib_::__zz_cib_FromAbiType<std::string>(sInformation));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfError&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfError&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfError&>(
      __zz_cib_obj->::PoDoFo::PdfError::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfError&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfError&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfError&>(
      __zz_cib_obj->::PoDoFo::PdfError::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfError&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfError::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfError&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfError::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfError&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfError::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfError&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfError::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfError> __zz_cib_decl GetError_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfError>(
      __zz_cib_obj->::PoDoFo::PdfError::GetError()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::TDequeErrorInfo&> __zz_cib_decl GetCallstack_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::TDequeErrorInfo&>(
      __zz_cib_obj->::PoDoFo::PdfError::GetCallstack()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetError_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<std::string> sInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::SetError(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
      __zz_cib_::__zz_cib_FromAbiType<int>(line),
      __zz_cib_::__zz_cib_FromAbiType<std::string>(sInformation)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetError_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfError&> eCode, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::SetError(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfError&>(eCode),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
      __zz_cib_::__zz_cib_FromAbiType<int>(line),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInformation)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetErrorInformation_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::SetErrorInformation(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInformation)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetErrorInformation_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const wchar_t*> pszInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::SetErrorInformation(
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszInformation)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToCallstack_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<const char*> pszInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::AddToCallstack(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
      __zz_cib_::__zz_cib_FromAbiType<int>(line),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszInformation)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToCallstack_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFile, __zz_cib_AbiType_t<int> line, __zz_cib_AbiType_t<std::string> sInformation) {
    __zz_cib_obj->::PoDoFo::PdfError::AddToCallstack(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFile),
      __zz_cib_::__zz_cib_FromAbiType<int>(line),
      __zz_cib_::__zz_cib_FromAbiType<std::string>(sInformation)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsError_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfError::IsError()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PrintErrorMsg_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfError::PrintErrorMsg();
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl what_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfError::what()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl ErrorName_23(__zz_cib_AbiType_t<::PoDoFo::EPdfError> eCode) {
    return __zz_cib_ToAbiType<const char*>(
      ::PoDoFo::PdfError::ErrorName(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfError>(eCode)
      )
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl ErrorMessage_24(__zz_cib_AbiType_t<::PoDoFo::EPdfError> eCode) {
    return __zz_cib_ToAbiType<const char*>(
      ::PoDoFo::PdfError::ErrorMessage(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfError>(eCode)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EnableLogging_25(__zz_cib_AbiType_t<bool> bEnable) {
    ::PoDoFo::PdfError::EnableLogging(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEnable)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl LoggingEnabled_26() {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfError::LoggingEnabled()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EnableDebug_27(__zz_cib_AbiType_t<bool> bEnable) {
    ::PoDoFo::PdfError::EnableDebug(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEnable)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl DebugEnabled_28() {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfError::DebugEnabled()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class370 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::SetLogMessageCallback_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_Copy_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorCmpEq_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorNotEq_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::__zz_cib_OperatorNotEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::GetError_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::GetCallstack_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::SetError_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::SetError_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::SetErrorInformation_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::SetErrorInformation_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::AddToCallstack_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::AddToCallstack_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::IsError_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::PrintErrorMsg_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::what_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::ErrorName_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::ErrorMessage_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::EnableLogging_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::LoggingEnabled_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::EnableDebug_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError>::DebugEnabled_28)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 29 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfError::LogMessageCallback> : public ::PoDoFo::PdfError::LogMessageCallback {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfError::LogMessageCallback>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfError::LogMessageCallback>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfError::LogMessageCallback::LogMessageCallback()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void LogMessage(::PoDoFo::ELogSeverity eLogSeverity, const wchar_t* pszPrefix, const wchar_t* pszMsg, va_list& args) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(eLogSeverity)>, __zz_cib_AbiType_t<decltype(pszPrefix)>, __zz_cib_AbiType_t<decltype(pszMsg)>, __zz_cib_AbiType_t<decltype(args)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::LogMessage_0>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eLogSeverity)>(std::move(eLogSeverity)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszMsg)>(std::move(pszMsg)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(args)>(args)
    );
  }
  void LogMessage(::PoDoFo::ELogSeverity eLogSeverity, const char* pszPrefix, const char* pszMsg, va_list& args) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(eLogSeverity)>, __zz_cib_AbiType_t<decltype(pszPrefix)>, __zz_cib_AbiType_t<decltype(pszMsg)>, __zz_cib_AbiType_t<decltype(args)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::LogMessage_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eLogSeverity)>(std::move(eLogSeverity)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszMsg)>(std::move(pszMsg)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(args)>(args)
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfError::LogMessageCallback)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback> : public ::PoDoFo::PdfError::LogMessageCallback {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfError::LogMessageCallback>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfError::LogMessageCallback>;

  using ::PoDoFo::PdfError::LogMessageCallback::LogMessageCallback;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfError::LogMessageCallback>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LogMessage_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::ELogSeverity> eLogSeverity, __zz_cib_AbiType_t<const char*> pszPrefix, __zz_cib_AbiType_t<const char*> pszMsg, __zz_cib_AbiType_t<va_list&> args) {
    __zz_cib_obj->LogMessage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::ELogSeverity>(eLogSeverity),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszMsg),
      __zz_cib_::__zz_cib_FromAbiType<va_list&>(args)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LogMessage_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::ELogSeverity> eLogSeverity, __zz_cib_AbiType_t<const wchar_t*> pszPrefix, __zz_cib_AbiType_t<const wchar_t*> pszMsg, __zz_cib_AbiType_t<va_list&> args) {
    __zz_cib_obj->LogMessage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::ELogSeverity>(eLogSeverity),
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszPrefix),
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszMsg),
      __zz_cib_::__zz_cib_FromAbiType<va_list&>(args)
    );
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfError::LogMessageCallback** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfError::LogMessageCallback))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class370 {
namespace __zz_cib_Class371 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::LogMessage_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::LogMessage_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}}
