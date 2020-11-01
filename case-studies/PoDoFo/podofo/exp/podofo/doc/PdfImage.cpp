#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfImage.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfImage::PdfImage(__zz_cib_AbiType h)
  : ::PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class478(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfImage::PdfImage(PdfImage&& rhs)
  : ::PoDoFo::PdfXObject(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfImage::PdfImage(const ::PoDoFo::PdfImage& __zz_cib_param0)
  : PoDoFo::PdfImage(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfImage::PdfImage(::PoDoFo::PdfVecObjects* pParent, const char* pszPrefix)
  : PoDoFo::PdfImage(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
{}

PoDoFo::PdfImage::PdfImage(::PoDoFo::PdfDocument* pParent, const char* pszPrefix)
  : PoDoFo::PdfImage(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
{}

PoDoFo::PdfImage::PdfImage(::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfImage(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfImage::~PdfImage() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

const char** PoDoFo::PdfImage::GetSupportedFormats() {
  return __zz_cib_::__zz_cib_FromAbiType<const char**>(
    __zz_cib_MyHelper::GetSupportedFormats_5<__zz_cib_::__zz_cib_AbiType_t<const char**>>(

    )
  );
}

void PoDoFo::PdfImage::SetImageColorSpace(::PoDoFo::EPdfColorSpace eColorSpace, const ::PoDoFo::PdfArray* indexedData) {
    __zz_cib_MyHelper::SetImageColorSpace_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eColorSpace)>(std::move(eColorSpace)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(indexedData)>(std::move(indexedData))
    );
  }

void PoDoFo::PdfImage::SetImageICCProfile(::PoDoFo::PdfInputStream* pStream, long lColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) {
    __zz_cib_MyHelper::SetImageICCProfile_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lColorComponents)>(std::move(lColorComponents)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
    );
  }

void PoDoFo::PdfImage::SetImageSoftmask(const ::PoDoFo::PdfImage* pSoftmask) {
    __zz_cib_MyHelper::SetImageSoftmask_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pSoftmask)>(std::move(pSoftmask))
    );
  }

double PoDoFo::PdfImage::GetWidth() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetWidth_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfImage::GetHeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetHeight_10<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfImage::SetImageData(unsigned int nWidth, unsigned int nHeight, unsigned int nBitsPerComponent, ::PoDoFo::PdfInputStream* pStream) {
    __zz_cib_MyHelper::SetImageData_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nWidth)>(std::move(nWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nHeight)>(std::move(nHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nBitsPerComponent)>(std::move(nBitsPerComponent)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

void PoDoFo::PdfImage::SetImageData(unsigned int nWidth, unsigned int nHeight, unsigned int nBitsPerComponent, ::PoDoFo::PdfInputStream* pStream, const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
    __zz_cib_MyHelper::SetImageData_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nWidth)>(std::move(nWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nHeight)>(std::move(nHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nBitsPerComponent)>(std::move(nBitsPerComponent)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }

void PoDoFo::PdfImage::SetImageDataRaw(unsigned int nWidth, unsigned int nHeight, unsigned int nBitsPerComponent, ::PoDoFo::PdfInputStream* pStream) {
    __zz_cib_MyHelper::SetImageDataRaw_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nWidth)>(std::move(nWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nHeight)>(std::move(nHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nBitsPerComponent)>(std::move(nBitsPerComponent)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

void PoDoFo::PdfImage::LoadFromFile(const char* pszFilename) {
    __zz_cib_MyHelper::LoadFromFile_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    );
  }

void PoDoFo::PdfImage::LoadFromData(const unsigned char* pData, ::PoDoFo::pdf_long dwLen) {
    __zz_cib_MyHelper::LoadFromData_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pData)>(std::move(pData)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dwLen)>(std::move(dwLen))
    );
  }

#ifdef PODOFO_HAVE_JPEG_LIB
void PoDoFo::PdfImage::LoadFromJpeg(const char* pszFilename) {
    __zz_cib_MyHelper::LoadFromJpeg_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    );
  }

void PoDoFo::PdfImage::LoadFromJpegData(const unsigned char* pData, ::PoDoFo::pdf_long dwLen) {
    __zz_cib_MyHelper::LoadFromJpegData_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pData)>(std::move(pData)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dwLen)>(std::move(dwLen))
    );
  }
#endif

#ifdef PODOFO_HAVE_TIFF_LIB
void PoDoFo::PdfImage::LoadFromTiff(const char* pszFilename) {
    __zz_cib_MyHelper::LoadFromTiff_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    );
  }

void PoDoFo::PdfImage::LoadFromTiffData(const unsigned char* pData, ::PoDoFo::pdf_long dwLen) {
    __zz_cib_MyHelper::LoadFromTiffData_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pData)>(std::move(pData)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dwLen)>(std::move(dwLen))
    );
  }
#endif

#ifdef PODOFO_HAVE_PNG_LIB
void PoDoFo::PdfImage::LoadFromPng(const char* pszFilename) {
    __zz_cib_MyHelper::LoadFromPng_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    );
  }

void PoDoFo::PdfImage::LoadFromPngData(const unsigned char* pData, ::PoDoFo::pdf_long dwLen) {
    __zz_cib_MyHelper::LoadFromPngData_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pData)>(std::move(pData)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dwLen)>(std::move(dwLen))
    );
  }
#endif

void PoDoFo::PdfImage::SetImageChromaKeyMask(::PoDoFo::pdf_int64 r, ::PoDoFo::pdf_int64 g, ::PoDoFo::pdf_int64 b, ::PoDoFo::pdf_int64 threshold) {
    __zz_cib_MyHelper::SetImageChromaKeyMask_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(threshold)>(std::move(threshold))
    );
  }

void PoDoFo::PdfImage::SetInterpolate(bool bValue) {
    __zz_cib_MyHelper::SetInterpolate_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bValue)>(std::move(bValue))
    );
  }
}
