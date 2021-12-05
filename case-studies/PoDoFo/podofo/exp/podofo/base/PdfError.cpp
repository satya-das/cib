#include "podofo/base/PdfError.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfErrorInfo::PdfErrorInfo(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfErrorInfo::PdfErrorInfo(PdfErrorInfo&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfErrorInfo::~PdfErrorInfo() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfErrorInfo::PdfErrorInfo()
  : PoDoFo::PdfErrorInfo(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfErrorInfo::PdfErrorInfo(int line, const char* pszFile, const char* pszInfo)
  : PoDoFo::PdfErrorInfo(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))))
{}

PoDoFo::PdfErrorInfo::PdfErrorInfo(int line, const char* pszFile, std::string pszInfo)
  : PoDoFo::PdfErrorInfo(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))))
{}

PoDoFo::PdfErrorInfo::PdfErrorInfo(int line, const char* pszFile, const wchar_t* pszInfo)
  : PoDoFo::PdfErrorInfo(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))))
{}

PoDoFo::PdfErrorInfo::PdfErrorInfo(const ::PoDoFo::PdfErrorInfo& rhs)
  : PoDoFo::PdfErrorInfo(__zz_cib_MyHelper::__zz_cib_Copy_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

const ::PoDoFo::PdfErrorInfo& PoDoFo::PdfErrorInfo::operator=(const ::PoDoFo::PdfErrorInfo& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfErrorInfo&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfErrorInfo&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

int PoDoFo::PdfErrorInfo::GetLine() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetLine_7<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const std::string& PoDoFo::PdfErrorInfo::GetFilename() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::GetFilename_8<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const std::string& PoDoFo::PdfErrorInfo::GetInformation() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::GetInformation_9<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const std::wstring& PoDoFo::PdfErrorInfo::GetInformationW() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::wstring&>(
    __zz_cib_MyHelper::GetInformationW_10<__zz_cib_::__zz_cib_AbiType_t<const std::wstring&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfErrorInfo::SetInformation(const char* pszInfo) {
    __zz_cib_MyHelper::SetInformation_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))
    );
  }

void PoDoFo::PdfErrorInfo::SetInformation(std::string pszInfo) {
    __zz_cib_MyHelper::SetInformation_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))
    );
  }

void PoDoFo::PdfErrorInfo::SetInformation(const wchar_t* pszInfo) {
    __zz_cib_MyHelper::SetInformation_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInfo)>(std::move(pszInfo))
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfError::PdfError(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfError::PdfError(PdfError&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

::PoDoFo::PdfError::LogMessageCallback* PoDoFo::PdfError::SetLogMessageCallback(::PoDoFo::PdfError::LogMessageCallback* fLogMessageCallback) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfError::LogMessageCallback*>(
    __zz_cib_MyHelper::SetLogMessageCallback_0<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfError::LogMessageCallback*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(fLogMessageCallback)>(std::move(fLogMessageCallback))
    )
  );
}

PoDoFo::PdfError::PdfError()
  : PoDoFo::PdfError(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfError::PdfError(const ::PoDoFo::EPdfError& eCode, const char* pszFile, int line, const char* pszInformation)
  : PoDoFo::PdfError(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszInformation)>(std::move(pszInformation))))
{}

PoDoFo::PdfError::PdfError(const ::PoDoFo::EPdfError& eCode, const char* pszFile, int line, std::string sInformation)
  : PoDoFo::PdfError(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sInformation)>(std::move(sInformation))))
{}

PoDoFo::PdfError::PdfError(const ::PoDoFo::PdfError& rhs)
  : PoDoFo::PdfError(__zz_cib_MyHelper::__zz_cib_Copy_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfError::~PdfError() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_5(
    h
  );
}

const ::PoDoFo::PdfError& PoDoFo::PdfError::operator=(const ::PoDoFo::PdfError& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfError&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfError&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

const ::PoDoFo::PdfError& PoDoFo::PdfError::operator=(const ::PoDoFo::EPdfError& eCode) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfError&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfError&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode)
    )
  );
}

bool PoDoFo::PdfError::operator==(const ::PoDoFo::PdfError& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfError::operator==(const ::PoDoFo::EPdfError& eCode) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode)
    )
  );
}

bool PoDoFo::PdfError::operator!=(const ::PoDoFo::PdfError& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfError::operator!=(const ::PoDoFo::EPdfError& eCode) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode)
    )
  );
}

::PoDoFo::EPdfError PoDoFo::PdfError::GetError() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfError>(
    __zz_cib_MyHelper::GetError_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfError>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::TDequeErrorInfo& PoDoFo::PdfError::GetCallstack() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TDequeErrorInfo&>(
    __zz_cib_MyHelper::GetCallstack_13<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TDequeErrorInfo&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfError::SetError(const ::PoDoFo::EPdfError& eCode, const char* pszFile, int line, std::string sInformation) {
    __zz_cib_MyHelper::SetError_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sInformation)>(std::move(sInformation))
    );
  }

void PoDoFo::PdfError::SetError(const ::PoDoFo::EPdfError& eCode, const char* pszFile, int line, const char* pszInformation) {
    __zz_cib_MyHelper::SetError_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(eCode),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInformation)>(std::move(pszInformation))
    );
  }

void PoDoFo::PdfError::SetErrorInformation(const char* pszInformation) {
    __zz_cib_MyHelper::SetErrorInformation_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInformation)>(std::move(pszInformation))
    );
  }

void PoDoFo::PdfError::SetErrorInformation(const wchar_t* pszInformation) {
    __zz_cib_MyHelper::SetErrorInformation_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInformation)>(std::move(pszInformation))
    );
  }

void PoDoFo::PdfError::AddToCallstack(const char* pszFile, int line, const char* pszInformation) {
    __zz_cib_MyHelper::AddToCallstack_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszInformation)>(std::move(pszInformation))
    );
  }

void PoDoFo::PdfError::AddToCallstack(const char* pszFile, int line, std::string sInformation) {
    __zz_cib_MyHelper::AddToCallstack_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFile)>(std::move(pszFile)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(line)>(std::move(line)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sInformation)>(std::move(sInformation))
    );
  }

bool PoDoFo::PdfError::IsError() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsError_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfError::PrintErrorMsg() const {
    __zz_cib_MyHelper::PrintErrorMsg_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

const char* PoDoFo::PdfError::what() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::what_22<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfError::ErrorName(::PoDoFo::EPdfError eCode) {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::ErrorName_23<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(std::move(eCode))
    )
  );
}

const char* PoDoFo::PdfError::ErrorMessage(::PoDoFo::EPdfError eCode) {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::ErrorMessage_24<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCode)>(std::move(eCode))
    )
  );
}

void PoDoFo::PdfError::EnableLogging(bool bEnable) {
    __zz_cib_MyHelper::EnableLogging_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEnable)>(std::move(bEnable))
    );
  }

bool PoDoFo::PdfError::LoggingEnabled() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::LoggingEnabled_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(

    )
  );
}

void PoDoFo::PdfError::EnableDebug(bool bEnable) {
    __zz_cib_MyHelper::EnableDebug_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEnable)>(std::move(bEnable))
    );
  }

bool PoDoFo::PdfError::DebugEnabled() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::DebugEnabled_28<__zz_cib_::__zz_cib_AbiType_t<bool>>(

    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfError::LogMessageCallback::LogMessageCallback(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfError::LogMessageCallback::LogMessageCallback(LogMessageCallback&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfError::LogMessageCallback::~LogMessageCallback() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfError::LogMessageCallback::LogMessageCallback()
  : PoDoFo::PdfError::LogMessageCallback(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfError::LogMessageCallback> : public ::PoDoFo::PdfError::LogMessageCallback {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfError::LogMessageCallback(h) {}
public:
  static ::PoDoFo::PdfError::LogMessageCallback* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void LogMessage(::PoDoFo::ELogSeverity eLogSeverity, const wchar_t* pszPrefix, const wchar_t* pszMsg, va_list& args) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(eLogSeverity)>, __zz_cib_AbiType_t<decltype(pszPrefix)>, __zz_cib_AbiType_t<decltype(pszMsg)>, __zz_cib_AbiType_t<decltype(args)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::LogMessage_3>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eLogSeverity)>(std::move(eLogSeverity)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszMsg)>(std::move(pszMsg)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(args)>(args)
    );
  }
  void LogMessage(::PoDoFo::ELogSeverity eLogSeverity, const char* pszPrefix, const char* pszMsg, va_list& args) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(eLogSeverity)>, __zz_cib_AbiType_t<decltype(pszPrefix)>, __zz_cib_AbiType_t<decltype(pszMsg)>, __zz_cib_AbiType_t<decltype(args)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::LogMessage_2>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eLogSeverity)>(std::move(eLogSeverity)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszMsg)>(std::move(pszMsg)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(args)>(args)
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfError::LogMessageCallback* __zz_cib_Helper<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfError::LogMessageCallback;
  static __zz_cib_AbiType_t<void> __zz_cib_decl LogMessage_0(::PoDoFo::PdfError::LogMessageCallback* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::ELogSeverity> eLogSeverity, __zz_cib_AbiType_t<const wchar_t*> pszPrefix, __zz_cib_AbiType_t<const wchar_t*> pszMsg, __zz_cib_AbiType_t<va_list&> args) {
    __zz_cib_obj->LogMessage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::ELogSeverity>(eLogSeverity),
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszPrefix),
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszMsg),
      __zz_cib_::__zz_cib_FromAbiType<va_list&>(args)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LogMessage_1(::PoDoFo::PdfError::LogMessageCallback* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::ELogSeverity> eLogSeverity, __zz_cib_AbiType_t<const char*> pszPrefix, __zz_cib_AbiType_t<const char*> pszMsg, __zz_cib_AbiType_t<va_list&> args) {
    __zz_cib_obj->LogMessage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::ELogSeverity>(eLogSeverity),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszMsg),
      __zz_cib_::__zz_cib_FromAbiType<va_list&>(args)
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::PoDoFo::PdfError::LogMessageCallback* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class370 {
namespace __zz_cib_Class371 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::LogMessage_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::LogMessage_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_Delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfError::LogMessageCallback>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class370::__zz_cib_Class371::__zz_cib_GetMethodTable();
}
}

