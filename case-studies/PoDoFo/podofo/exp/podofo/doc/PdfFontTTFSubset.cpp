#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontTTFSubset.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfFontTTFSubset::PdfFontTTFSubset(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontTTFSubset::PdfFontTTFSubset(PdfFontTTFSubset&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontTTFSubset::PdfFontTTFSubset(const char* pszFontFileName, ::PoDoFo::PdfFontMetrics* pMetrics, unsigned short nFaceIndex)
  : PoDoFo::PdfFontTTFSubset(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontFileName)>(std::move(pszFontFileName)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFaceIndex)>(std::move(nFaceIndex))))
{}

PoDoFo::PdfFontTTFSubset::PdfFontTTFSubset(::PoDoFo::PdfInputDevice* pDevice, ::PoDoFo::PdfFontMetrics* pMetrics, ::PoDoFo::PdfFontTTFSubset::EFontFileType eType, unsigned short nFaceIndex)
  : PoDoFo::PdfFontTTFSubset(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFaceIndex)>(std::move(nFaceIndex))))
{}

PoDoFo::PdfFontTTFSubset::~PdfFontTTFSubset() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfFontTTFSubset::BuildFont(::PoDoFo::PdfRefCountedBuffer& outputBuffer, const std::set<pdf_utf16be>& usedChars, ::std::vector<unsigned char>& cidSet) {
    __zz_cib_MyHelper::BuildFont_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outputBuffer)>(outputBuffer),
      __zz_cib_::__zz_cib_ToAbiType<decltype(usedChars)>(usedChars),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cidSet)>(cidSet)
    );
  }
}
