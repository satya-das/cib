#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfImmediateWriter.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {

PoDoFo::PdfImmediateWriter::PdfImmediateWriter(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfImmediateWriter::PdfImmediateWriter(PdfImmediateWriter&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfImmediateWriter::PdfImmediateWriter(const ::PoDoFo::PdfImmediateWriter& __zz_cib_param0)
  : PoDoFo::PdfImmediateWriter(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfImmediateWriter::PdfImmediateWriter(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfVecObjects* pVecObjects, const ::PoDoFo::PdfObject* pTrailer, ::PoDoFo::EPdfVersion eVersion, ::PoDoFo::PdfEncrypt* pEncrypt, ::PoDoFo::EPdfWriteMode eWriteMode)
  : PoDoFo::PdfImmediateWriter(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eVersion)>(std::move(eVersion)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))))
{}

PoDoFo::PdfImmediateWriter::~PdfImmediateWriter() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::EPdfWriteMode PoDoFo::PdfImmediateWriter::GetWriteMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
    __zz_cib_MyHelper::GetWriteMode_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfVersion PoDoFo::PdfImmediateWriter::GetPdfVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::GetPdfVersion_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
