#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfImmediateWriter.h"
#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfHintStream.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"

namespace PoDoFo {

PoDoFo::PdfWriter::PdfWriter(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfWriter::PdfWriter(PdfWriter&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfWriter::PdfWriter(const ::PoDoFo::PdfWriter& __zz_cib_param0)
  : PoDoFo::PdfWriter(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfWriter::PdfWriter(::PoDoFo::PdfParser* pParser)
  : PoDoFo::PdfWriter(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParser)>(std::move(pParser))))
{}

PoDoFo::PdfWriter::PdfWriter(::PoDoFo::PdfVecObjects* pVecObjects, const ::PoDoFo::PdfObject* pTrailer)
  : PoDoFo::PdfWriter(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer))))
{}

PoDoFo::PdfWriter::~PdfWriter() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfWriter::Write(const char* pszFilename) {
    __zz_cib_MyHelper::Write_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    );
  }

void PoDoFo::PdfWriter::Write(::PoDoFo::PdfOutputDevice* pDevice) {
    __zz_cib_MyHelper::Write_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))
    );
  }

void PoDoFo::PdfWriter::WriteUpdate(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfInputDevice* pSourceInputDevice, bool bRewriteXRefTable) {
    __zz_cib_MyHelper::WriteUpdate_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pSourceInputDevice)>(std::move(pSourceInputDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bRewriteXRefTable)>(std::move(bRewriteXRefTable))
    );
  }

void PoDoFo::PdfWriter::SetWriteMode(::PoDoFo::EPdfWriteMode eWriteMode) {
    __zz_cib_MyHelper::SetWriteMode_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))
    );
  }

::PoDoFo::EPdfWriteMode PoDoFo::PdfWriter::GetWriteMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
    __zz_cib_MyHelper::GetWriteMode_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetPdfVersion(::PoDoFo::EPdfVersion eVersion) {
    __zz_cib_MyHelper::SetPdfVersion_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eVersion)>(std::move(eVersion))
    );
  }

::PoDoFo::EPdfVersion PoDoFo::PdfWriter::GetPdfVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::GetPdfVersion_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetLinearized(bool bLinearize) {
    __zz_cib_MyHelper::SetLinearized_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bLinearize)>(std::move(bLinearize))
    );
  }

bool PoDoFo::PdfWriter::GetLinearized() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetLinearized_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetUseXRefStream(bool bStream) {
    __zz_cib_MyHelper::SetUseXRefStream_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bStream)>(std::move(bStream))
    );
  }

bool PoDoFo::PdfWriter::GetUseXRefStream() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetUseXRefStream_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetPrevXRefOffset(::PoDoFo::pdf_int64 lPrevXRefOffset) {
    __zz_cib_MyHelper::SetPrevXRefOffset_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lPrevXRefOffset)>(std::move(lPrevXRefOffset))
    );
  }

::PoDoFo::pdf_int64 PoDoFo::PdfWriter::GetPrevXRefOffset() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetPrevXRefOffset_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetIncrementalUpdate(bool bIncrementalUpdate) {
    __zz_cib_MyHelper::SetIncrementalUpdate_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bIncrementalUpdate)>(std::move(bIncrementalUpdate))
    );
  }

bool PoDoFo::PdfWriter::GetIncrementalUpdate() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetIncrementalUpdate_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfWriter::GetPdfVersionString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetPdfVersionString_19<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::SetEncrypted(const ::PoDoFo::PdfEncrypt& rEncrypt) {
    __zz_cib_MyHelper::SetEncrypted_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rEncrypt)>(rEncrypt)
    );
  }

bool PoDoFo::PdfWriter::GetEncrypted() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetEncrypted_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWriter::GetByteOffset(::PoDoFo::PdfObject* pObject, ::PoDoFo::pdf_long* pulOffset) {
    __zz_cib_MyHelper::GetByteOffset_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pulOffset)>(std::move(pulOffset))
    );
  }

void PoDoFo::PdfWriter::WriteToBuffer(char** ppBuffer, ::PoDoFo::pdf_long* pulLen) {
    __zz_cib_MyHelper::WriteToBuffer_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ppBuffer)>(std::move(ppBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pulLen)>(std::move(pulLen))
    );
  }

void PoDoFo::PdfWriter::FillTrailerObject(::PoDoFo::PdfObject* pTrailer, ::PoDoFo::pdf_long lSize, bool bOnlySizeKey) const {
    __zz_cib_MyHelper::FillTrailerObject_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lSize)>(std::move(lSize)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bOnlySizeKey)>(std::move(bOnlySizeKey))
    );
  }

PoDoFo::PdfWriter::PdfWriter(::PoDoFo::PdfVecObjects* pVecObjects)
  : PoDoFo::PdfWriter(__zz_cib_MyHelper::__zz_cib_New_25(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects))))
{}

void PoDoFo::PdfWriter::WritePdfHeader(::PoDoFo::PdfOutputDevice* pDevice) {
    __zz_cib_MyHelper::WritePdfHeader_26<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))
    );
  }

void PoDoFo::PdfWriter::WritePdfObjects(::PoDoFo::PdfOutputDevice* pDevice, const ::PoDoFo::PdfVecObjects& vecObjects, ::PoDoFo::PdfXRef* pXref, bool bRewriteXRefTable) {
    __zz_cib_MyHelper::WritePdfObjects_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecObjects)>(vecObjects),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pXref)>(std::move(pXref)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bRewriteXRefTable)>(std::move(bRewriteXRefTable))
    );
  }

void PoDoFo::PdfWriter::CreateFileIdentifier(::PoDoFo::PdfString& identifier, const ::PoDoFo::PdfObject* pTrailer, ::PoDoFo::PdfString* pOriginalIdentifier) const {
    __zz_cib_MyHelper::CreateFileIdentifier_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOriginalIdentifier)>(std::move(pOriginalIdentifier))
    );
  }

void PoDoFo::PdfWriter::Write(::PoDoFo::PdfOutputDevice* pDevice, bool bRewriteXRefTable) {
    __zz_cib_MyHelper::Write_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bRewriteXRefTable)>(std::move(bRewriteXRefTable))
    );
  }

void PoDoFo::PdfWriter::WriteLinearized(::PoDoFo::PdfOutputDevice* pDevice) {
    __zz_cib_MyHelper::WriteLinearized_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))
    );
  }
}
