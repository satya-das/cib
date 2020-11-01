#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfElement.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfStreamedDocument.h"

namespace PoDoFo {

PoDoFo::PdfStreamedDocument::PdfStreamedDocument(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDocument(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class417(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStreamedDocument::PdfStreamedDocument(PdfStreamedDocument&& rhs)
  : ::PoDoFo::PdfDocument(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStreamedDocument::PdfStreamedDocument(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfVersion eVersion, ::PoDoFo::PdfEncrypt* pEncrypt, ::PoDoFo::EPdfWriteMode eWriteMode)
  : PoDoFo::PdfStreamedDocument(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eVersion)>(std::move(eVersion)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))))
{}

PoDoFo::PdfStreamedDocument::PdfStreamedDocument(const char* pszFilename, ::PoDoFo::EPdfVersion eVersion, ::PoDoFo::PdfEncrypt* pEncrypt, ::PoDoFo::EPdfWriteMode eWriteMode)
  : PoDoFo::PdfStreamedDocument(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eVersion)>(std::move(eVersion)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))))
{}

PoDoFo::PdfStreamedDocument::~PdfStreamedDocument() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfStreamedDocument::Close() {
    __zz_cib_MyHelper::Close_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::EPdfWriteMode PoDoFo::PdfStreamedDocument::GetWriteMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
    __zz_cib_MyHelper::GetWriteMode_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfVersion PoDoFo::PdfStreamedDocument::GetPdfVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::GetPdfVersion_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsLinearized() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLinearized_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPrintAllowed_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsEditAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditAllowed_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsCopyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCopyAllowed_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsEditNotesAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditNotesAllowed_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsFillAndSignAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsFillAndSignAllowed_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsAccessibilityAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAccessibilityAllowed_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsDocAssemblyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDocAssemblyAllowed_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfStreamedDocument::IsHighPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsHighPrintAllowed_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
