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
struct __zz_cib_Delegator<::PoDoFo::PdfImage> : public ::PoDoFo::PdfImage {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfImage>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfImage>;

  using ::PoDoFo::PdfImage::PdfImage;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static void __zz_cib_decl __zz_cib_Delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const char**> __zz_cib_decl GetSupportedFormats_5() {
    return __zz_cib_ToAbiType<const char**>(
      ::PoDoFo::PdfImage::GetSupportedFormats()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageColorSpace_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eColorSpace, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray*> indexedData) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageColorSpace(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eColorSpace),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray*>(indexedData)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageICCProfile_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<long> lColorComponents, __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eAlternateColorSpace) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageICCProfile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<long>(lColorComponents),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eAlternateColorSpace)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageSoftmask_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfImage*> pSoftmask) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageSoftmask(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfImage*>(pSoftmask)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetWidth_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfImage::GetWidth()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetHeight_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfImage::GetHeight()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageData_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned int> nWidth, __zz_cib_AbiType_t<unsigned int> nHeight, __zz_cib_AbiType_t<unsigned int> nBitsPerComponent, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageData(
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nWidth),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nHeight),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nBitsPerComponent),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageData_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned int> nWidth, __zz_cib_AbiType_t<unsigned int> nHeight, __zz_cib_AbiType_t<unsigned int> nBitsPerComponent, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageData(
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nWidth),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nHeight),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nBitsPerComponent),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageDataRaw_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned int> nWidth, __zz_cib_AbiType_t<unsigned int> nHeight, __zz_cib_AbiType_t<unsigned int> nBitsPerComponent, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageDataRaw(
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nWidth),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nHeight),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nBitsPerComponent),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromFile_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromFile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromData_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> pData, __zz_cib_AbiType_t<::PoDoFo::pdf_long> dwLen) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromData(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(pData),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(dwLen)
    );
  }
#ifdef PODOFO_HAVE_JPEG_LIB
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromJpeg_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromJpeg(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromJpegData_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> pData, __zz_cib_AbiType_t<::PoDoFo::pdf_long> dwLen) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromJpegData(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(pData),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(dwLen)
    );
  }
#endif
#ifdef PODOFO_HAVE_TIFF_LIB
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromTiff_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromTiff(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromTiffData_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> pData, __zz_cib_AbiType_t<::PoDoFo::pdf_long> dwLen) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromTiffData(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(pData),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(dwLen)
    );
  }
#endif
#ifdef PODOFO_HAVE_PNG_LIB
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromPng_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromPng(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromPngData_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> pData, __zz_cib_AbiType_t<::PoDoFo::pdf_long> dwLen) {
    __zz_cib_obj->::PoDoFo::PdfImage::LoadFromPngData(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(pData),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(dwLen)
    );
  }
#endif
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImageChromaKeyMask_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> r, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> g, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> b, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> threshold) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetImageChromaKeyMask(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(r),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(g),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(b),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(threshold)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInterpolate_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bValue) {
    __zz_cib_obj->::PoDoFo::PdfImage::SetInterpolate(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bValue)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfImage* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfImage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfImage* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfImage*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfCanvas* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class335(::PoDoFo::PdfImage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfImage* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class335(::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfImage*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfXObject* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class478(::PoDoFo::PdfImage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfImage* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class478(::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfImage*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class454 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::GetSupportedFormats_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageColorSpace_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageICCProfile_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageSoftmask_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::GetWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::GetHeight_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageData_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageData_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageDataRaw_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromFile_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromData_15),
#ifdef PODOFO_HAVE_JPEG_LIB
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromJpeg_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromJpegData_17),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
#ifdef PODOFO_HAVE_TIFF_LIB
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromTiff_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromTiffData_19),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
#ifdef PODOFO_HAVE_PNG_LIB
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromPng_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::LoadFromPngData_21),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetImageChromaKeyMask_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::SetInterpolate_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastTo__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastFrom__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastTo__zz_cib_Class478),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_CastFrom__zz_cib_Class478),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfImage>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 31 };
  return &methodTable;
}
}}}
