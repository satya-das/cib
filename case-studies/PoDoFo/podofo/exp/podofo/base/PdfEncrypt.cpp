#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfEncrypt::PdfEncrypt(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncrypt::PdfEncrypt(PdfEncrypt&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

::PoDoFo::PdfEncrypt* PoDoFo::PdfEncrypt::CreatePdfEncrypt(const std::string& userPassword, const std::string& ownerPassword, int protection, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, ::PoDoFo::PdfEncrypt::EPdfKeyLength eKeyLength) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::CreatePdfEncrypt_0<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(userPassword)>(userPassword),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ownerPassword)>(ownerPassword),
      __zz_cib_::__zz_cib_ToAbiType<decltype(protection)>(std::move(protection)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlgorithm)>(std::move(eAlgorithm)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eKeyLength)>(std::move(eKeyLength))
    )
  );
}

::PoDoFo::PdfEncrypt* PoDoFo::PdfEncrypt::CreatePdfEncrypt(const ::PoDoFo::PdfObject* pObject) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::CreatePdfEncrypt_1<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    )
  );
}

::PoDoFo::PdfEncrypt* PoDoFo::PdfEncrypt::CreatePdfEncrypt(const ::PoDoFo::PdfEncrypt& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::CreatePdfEncrypt_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

int PoDoFo::PdfEncrypt::GetEnabledEncryptionAlgorithms() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetEnabledEncryptionAlgorithms_3<__zz_cib_::__zz_cib_AbiType_t<int>>(

    )
  );
}

void PoDoFo::PdfEncrypt::SetEnabledEncryptionAlgorithms(int nEncryptionAlgorithms) {
    __zz_cib_MyHelper::SetEnabledEncryptionAlgorithms_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(nEncryptionAlgorithms)>(std::move(nEncryptionAlgorithms))
    );
  }

bool PoDoFo::PdfEncrypt::IsEncryptionEnabled(::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEncryptionEnabled_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlgorithm)>(std::move(eAlgorithm))
    )
  );
}

PoDoFo::PdfEncrypt::~PdfEncrypt() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_6(
    h
  );
}

::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm PoDoFo::PdfEncrypt::GetEncryptAlgorithm() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(
    __zz_cib_MyHelper::GetEncryptAlgorithm_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPrintAllowed_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsEditAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditAllowed_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsCopyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCopyAllowed_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsEditNotesAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditNotesAllowed_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsFillAndSignAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsFillAndSignAllowed_17<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsAccessibilityAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAccessibilityAllowed_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsDocAssemblyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDocAssemblyAllowed_19<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsHighPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsHighPrintAllowed_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const unsigned char* PoDoFo::PdfEncrypt::GetUValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(
    __zz_cib_MyHelper::GetUValue_21<__zz_cib_::__zz_cib_AbiType_t<const unsigned char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const unsigned char* PoDoFo::PdfEncrypt::GetOValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(
    __zz_cib_MyHelper::GetOValue_22<__zz_cib_::__zz_cib_AbiType_t<const unsigned char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const unsigned char* PoDoFo::PdfEncrypt::GetEncryptionKey() const {
  return __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(
    __zz_cib_MyHelper::GetEncryptionKey_23<__zz_cib_::__zz_cib_AbiType_t<const unsigned char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_int32 PoDoFo::PdfEncrypt::GetPValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int32>(
    __zz_cib_MyHelper::GetPValue_24<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int32>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfEncrypt::GetRevision() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetRevision_25<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfEncrypt::GetKeyLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetKeyLength_26<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfEncrypt::IsMetadataEncrypted() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsMetadataEncrypted_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfEncrypt::SetCurrentReference(const ::PoDoFo::PdfReference& rRef) {
    __zz_cib_MyHelper::SetCurrentReference_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef)
    );
  }

PoDoFo::PdfEncrypt::PdfEncrypt()
  : PoDoFo::PdfEncrypt(__zz_cib_MyHelper::__zz_cib_New_33(this))
{}

PoDoFo::PdfEncrypt::PdfEncrypt(const ::PoDoFo::PdfEncrypt& rhs)
  : PoDoFo::PdfEncrypt(__zz_cib_MyHelper::__zz_cib_Copy_34(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

bool PoDoFo::PdfEncrypt::CheckKey(unsigned char key1[32], unsigned char key2[32]) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::CheckKey_35<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key1)>(std::move(key1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key2)>(std::move(key2))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfEncryptAESBase::PdfEncryptAESBase(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptAESBase::PdfEncryptAESBase(PdfEncryptAESBase&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptAESBase::PdfEncryptAESBase(const ::PoDoFo::PdfEncryptAESBase& __zz_cib_param0)
  : PoDoFo::PdfEncryptAESBase(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncryptAESBase::~PdfEncryptAESBase() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfEncryptAESBase::PdfEncryptAESBase()
  : PoDoFo::PdfEncryptAESBase(__zz_cib_MyHelper::__zz_cib_New_2())
{}

void PoDoFo::PdfEncryptAESBase::BaseDecrypt(const unsigned char* key, int keylen, const unsigned char* iv, const unsigned char* textin, ::PoDoFo::pdf_long textlen, unsigned char* textout, ::PoDoFo::pdf_long& textoutlen) {
    __zz_cib_MyHelper::BaseDecrypt_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(std::move(key)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keylen)>(std::move(keylen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textin)>(std::move(textin)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textlen)>(std::move(textlen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textout)>(std::move(textout)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textoutlen)>(textoutlen)
    );
  }

void PoDoFo::PdfEncryptAESBase::BaseEncrypt(const unsigned char* key, int keylen, const unsigned char* iv, const unsigned char* textin, ::PoDoFo::pdf_long textlen, unsigned char* textout, ::PoDoFo::pdf_long textoutlen) {
    __zz_cib_MyHelper::BaseEncrypt_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(std::move(key)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keylen)>(std::move(keylen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textin)>(std::move(textin)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textlen)>(std::move(textlen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textout)>(std::move(textout)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textoutlen)>(std::move(textoutlen))
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfEncryptRC4Base::PdfEncryptRC4Base(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptRC4Base::PdfEncryptRC4Base(PdfEncryptRC4Base&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptRC4Base::PdfEncryptRC4Base(const ::PoDoFo::PdfEncryptRC4Base& __zz_cib_param0)
  : PoDoFo::PdfEncryptRC4Base(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncryptRC4Base::~PdfEncryptRC4Base() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfEncryptRC4Base::PdfEncryptRC4Base()
  : PoDoFo::PdfEncryptRC4Base(__zz_cib_MyHelper::__zz_cib_New_2())
{}

void PoDoFo::PdfEncryptRC4Base::RC4(const unsigned char* key, int keylen, const unsigned char* textin, ::PoDoFo::pdf_long textlen, unsigned char* textout, ::PoDoFo::pdf_long textoutlen) {
    __zz_cib_MyHelper::RC4_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(std::move(key)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keylen)>(std::move(keylen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textin)>(std::move(textin)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textlen)>(std::move(textlen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textout)>(std::move(textout)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(textoutlen)>(std::move(textoutlen))
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncrypt(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class363(h))
  , ::PoDoFo::PdfEncryptRC4Base(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class365(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base(PdfEncryptMD5Base&& rhs)
  : ::PoDoFo::PdfEncrypt(std::move(rhs))
  , ::PoDoFo::PdfEncryptRC4Base(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base()
  : PoDoFo::PdfEncryptMD5Base(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}

PoDoFo::PdfEncryptMD5Base::PdfEncryptMD5Base(const ::PoDoFo::PdfEncrypt& rhs)
  : PoDoFo::PdfEncryptMD5Base(__zz_cib_MyHelper::__zz_cib_New_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfEncryptMD5Base::~PdfEncryptMD5Base() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfEncryptMD5Base::CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const {
    __zz_cib_MyHelper::CreateEncryptionDictionary_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfEncryptMD5Base::GetMD5String(const unsigned char* pBuffer, int nLength) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetMD5String_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLength)>(std::move(nLength))
    )
  );
}

void PoDoFo::PdfEncryptMD5Base::GetMD5Binary(const unsigned char* data, int length, unsigned char* digest) {
    __zz_cib_MyHelper::GetMD5Binary_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(data)>(std::move(data)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(digest)>(std::move(digest))
    );
  }

bool PoDoFo::PdfEncryptMD5Base::Authenticate(const std::string& documentID, const std::string& password, const std::string& uValue, const std::string& oValue, int pValue, int lengthValue, int rValue) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Authenticate_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentID)>(documentID),
      __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
      __zz_cib_::__zz_cib_ToAbiType<decltype(uValue)>(uValue),
      __zz_cib_::__zz_cib_ToAbiType<decltype(oValue)>(oValue),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pValue)>(std::move(pValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lengthValue)>(std::move(lengthValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rValue)>(std::move(rValue))
    )
  );
}

void PoDoFo::PdfEncryptMD5Base::GenerateInitialVector(unsigned char iv[16]) {
    __zz_cib_MyHelper::GenerateInitialVector_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv))
    );
  }

void PoDoFo::PdfEncryptMD5Base::ComputeOwnerKey(unsigned char userPad[32], unsigned char ownerPad[32], int keylength, int revision, bool authenticate, unsigned char ownerKey[32]) {
    __zz_cib_MyHelper::ComputeOwnerKey_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(userPad)>(std::move(userPad)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ownerPad)>(std::move(ownerPad)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keylength)>(std::move(keylength)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(revision)>(std::move(revision)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(authenticate)>(std::move(authenticate)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ownerKey)>(std::move(ownerKey))
    );
  }

void PoDoFo::PdfEncryptMD5Base::PadPassword(const std::string& password, unsigned char pswd[32]) {
    __zz_cib_MyHelper::PadPassword_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pswd)>(std::move(pswd))
    );
  }

void PoDoFo::PdfEncryptMD5Base::ComputeEncryptionKey(const std::string& documentID, unsigned char userPad[32], unsigned char ownerKey[32], int pValue, int keyLength, int revision, unsigned char userKey[32], bool bEncryptMetadata) {
    __zz_cib_MyHelper::ComputeEncryptionKey_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentID)>(documentID),
      __zz_cib_::__zz_cib_ToAbiType<decltype(userPad)>(std::move(userPad)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ownerKey)>(std::move(ownerKey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pValue)>(std::move(pValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyLength)>(std::move(keyLength)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(revision)>(std::move(revision)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(userKey)>(std::move(userKey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEncryptMetadata)>(std::move(bEncryptMetadata))
    );
  }

void PoDoFo::PdfEncryptMD5Base::CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const {
    __zz_cib_MyHelper::CreateObjKey_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(objkey)>(std::move(objkey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pnKeyLen)>(std::move(pnKeyLen))
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncryptMD5Base(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class366(h))
  , ::PoDoFo::PdfEncryptAESBase(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class364(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(PdfEncryptAESV2&& rhs)
  : ::PoDoFo::PdfEncryptMD5Base(std::move(rhs))
  , ::PoDoFo::PdfEncryptAESBase(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(const ::PoDoFo::PdfEncryptAESV2& __zz_cib_param0)
  : PoDoFo::PdfEncryptAESV2(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(::PoDoFo::PdfString oValue, ::PoDoFo::PdfString uValue, int pValue, bool bEncryptMetadata)
  : PoDoFo::PdfEncryptAESV2(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(oValue)>(std::move(oValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(uValue)>(std::move(uValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pValue)>(std::move(pValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEncryptMetadata)>(std::move(bEncryptMetadata))))
{}

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(const ::PoDoFo::PdfEncrypt& rhs)
  : PoDoFo::PdfEncryptAESV2(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfEncryptAESV2::PdfEncryptAESV2(const std::string& userPassword, const std::string& ownerPassword, int protection)
  : PoDoFo::PdfEncryptAESV2(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(userPassword)>(userPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ownerPassword)>(ownerPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(protection)>(std::move(protection))))
{}

PoDoFo::PdfEncryptAESV2::~PdfEncryptAESV2() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

::PoDoFo::PdfInputStream* PoDoFo::PdfEncryptAESV2::CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
    __zz_cib_MyHelper::CreateEncryptionInputStream_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
    )
  );
}

::PoDoFo::PdfOutputStream* PoDoFo::PdfEncryptAESV2::CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
    __zz_cib_MyHelper::CreateEncryptionOutputStream_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
    )
  );
}

bool PoDoFo::PdfEncryptAESV2::Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Authenticate_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    )
  );
}

void PoDoFo::PdfEncryptAESV2::Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const {
    __zz_cib_MyHelper::Encrypt_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }

void PoDoFo::PdfEncryptAESV2::Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const {
    __zz_cib_MyHelper::Decrypt_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }

void PoDoFo::PdfEncryptAESV2::GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) {
    __zz_cib_MyHelper::GenerateEncryptionKey_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfEncryptAESV2::CalculateStreamOffset() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::CalculateStreamOffset_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfEncryptAESV2::CalculateStreamLength(::PoDoFo::pdf_long length) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::CalculateStreamLength_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncryptMD5Base(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class366(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(PdfEncryptRC4&& rhs)
  : ::PoDoFo::PdfEncryptMD5Base(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(const ::PoDoFo::PdfEncryptRC4& __zz_cib_param0)
  : PoDoFo::PdfEncryptRC4(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(::PoDoFo::PdfString oValue, ::PoDoFo::PdfString uValue, int pValue, int rValue, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, long length, bool bEncryptMetadata)
  : PoDoFo::PdfEncryptRC4(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(oValue)>(std::move(oValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(uValue)>(std::move(uValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pValue)>(std::move(pValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rValue)>(std::move(rValue)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eAlgorithm)>(std::move(eAlgorithm)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEncryptMetadata)>(std::move(bEncryptMetadata))))
{}

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(const ::PoDoFo::PdfEncrypt& rhs)
  : PoDoFo::PdfEncryptRC4(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfEncryptRC4::PdfEncryptRC4(const std::string& userPassword, const std::string& ownerPassword, int protection, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, ::PoDoFo::PdfEncrypt::EPdfKeyLength eKeyLength)
  : PoDoFo::PdfEncryptRC4(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(userPassword)>(userPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ownerPassword)>(ownerPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(protection)>(std::move(protection)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eAlgorithm)>(std::move(eAlgorithm)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eKeyLength)>(std::move(eKeyLength))))
{}

PoDoFo::PdfEncryptRC4::~PdfEncryptRC4() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

bool PoDoFo::PdfEncryptRC4::Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Authenticate_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    )
  );
}

void PoDoFo::PdfEncryptRC4::Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const {
    __zz_cib_MyHelper::Encrypt_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }

void PoDoFo::PdfEncryptRC4::Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const {
    __zz_cib_MyHelper::Decrypt_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }

::PoDoFo::PdfInputStream* PoDoFo::PdfEncryptRC4::CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
    __zz_cib_MyHelper::CreateEncryptionInputStream_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
    )
  );
}

::PoDoFo::PdfOutputStream* PoDoFo::PdfEncryptRC4::CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
    __zz_cib_MyHelper::CreateEncryptionOutputStream_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
    )
  );
}

void PoDoFo::PdfEncryptRC4::GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) {
    __zz_cib_MyHelper::GenerateEncryptionKey_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfEncryptRC4::CalculateStreamOffset() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::CalculateStreamOffset_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfEncryptRC4::CalculateStreamLength(::PoDoFo::pdf_long length) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::CalculateStreamLength_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfEncrypt> : public ::PoDoFo::PdfEncrypt {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfEncrypt(h) {}
public:
  static ::PoDoFo::PdfEncrypt* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamLength_30>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Decrypt_29>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Encrypt_28>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateEncryptionKey_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfEncrypt>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_6>(
      __zz_cib_h
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamOffset_31>(
        __zz_cib_h
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Authenticate_11>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionDictionary_8>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionOutputStream_9>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionInputStream_10>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfEncrypt* __zz_cib_Helper<::PoDoFo::PdfEncrypt>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfEncryptAESV2>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfEncryptAESV2>::__zz_cib_CastFrom__zz_cib_Class363(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfEncryptRC4>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfEncryptRC4>::__zz_cib_CastFrom__zz_cib_Class363(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfEncryptMD5Base>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfEncryptMD5Base>::__zz_cib_CastFrom__zz_cib_Class363(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncrypt>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncrypt> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfEncrypt;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_0(const ::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_1(const ::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_2(const ::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_3(::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_4(::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfEncrypt>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_5(const ::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_6(::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateEncryptionDictionary_7(const ::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->CreateEncryptionDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_8(::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_9(::PoDoFo::PdfEncrypt* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class363 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CalculateStreamLength_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Decrypt_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Encrypt_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::GenerateEncryptionKey_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CalculateStreamOffset_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::Authenticate_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionDictionary_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionOutputStream_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncrypt>::CreateEncryptionInputStream_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfEncrypt>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base> : public ::PoDoFo::PdfEncryptMD5Base {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfEncryptMD5Base(h) {}
public:
  static ::PoDoFo::PdfEncryptMD5Base* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void GenerateInitialVector(unsigned char iv[16]) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(iv)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateInitialVector_14>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(iv)>(std::move(iv))
    );
  }
  ::PoDoFo::pdf_long CalculateStreamLength(::PoDoFo::pdf_long length) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(length)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamLength_11>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(length)>(std::move(length))
      )
    );
  }
  void Decrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long& outLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Decrypt_19>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(outLen)
    );
  }
  void CreateEncryptionDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionDictionary_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  void GenerateEncryptionKey(const ::PoDoFo::PdfString& documentId) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(documentId)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateEncryptionKey_8>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
    );
  }
  ::PoDoFo::pdf_long CalculateStreamOffset() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamOffset_10>(
        __zz_cib_h
      )
    );
  }
  bool Authenticate(const std::string& password, const ::PoDoFo::PdfString& documentId) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(password)>, __zz_cib_AbiType_t<decltype(documentId)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Authenticate_6>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(password)>(password),
        __zz_cib_::__zz_cib_ToAbiType<decltype(documentId)>(documentId)
      )
    );
  }
  ::PoDoFo::PdfOutputStream* CreateEncryptionOutputStream(::PoDoFo::PdfOutputStream* pOutputStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pOutputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionOutputStream_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutputStream)>(std::move(pOutputStream))
      )
    );
  }
  void CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(objkey)>, __zz_cib_AbiType_t<decltype(pnKeyLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateObjKey_18>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(objkey)>(std::move(objkey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pnKeyLen)>(std::move(pnKeyLen))
    );
  }
  ::PoDoFo::PdfInputStream* CreateEncryptionInputStream(::PoDoFo::PdfInputStream* pInputStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pInputStream)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionInputStream_3>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInputStream)>(std::move(pInputStream))
      )
    );
  }
  void Encrypt(const unsigned char* inStr, ::PoDoFo::pdf_long inLen, unsigned char* outStr, ::PoDoFo::pdf_long outLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(inStr)>, __zz_cib_AbiType_t<decltype(inLen)>, __zz_cib_AbiType_t<decltype(outStr)>, __zz_cib_AbiType_t<decltype(outLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Encrypt_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(inStr)>(std::move(inStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLen)>(std::move(inLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outStr)>(std::move(outStr)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(outLen)>(std::move(outLen))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfEncryptMD5Base* __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfEncryptAESV2>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfEncryptAESV2>::__zz_cib_CastFrom__zz_cib_Class366(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfEncryptRC4>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfEncryptRC4>::__zz_cib_CastFrom__zz_cib_Class366(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfEncryptMD5Base;
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateInitialVector_0(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[16]> iv) {
    __zz_cib_obj->GenerateInitialVector(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[16]>(iv)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamLength_1(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> length) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamLength(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(length)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decrypt_2(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long&> outLen) {
    __zz_cib_obj->Decrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long&>(outLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateEncryptionDictionary_3(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->CreateEncryptionDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GenerateEncryptionKey_4(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    __zz_cib_obj->GenerateEncryptionKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl CalculateStreamOffset_5(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->CalculateStreamOffset()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Authenticate_6(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> password, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> documentId) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->Authenticate(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(password),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(documentId)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncryptionOutputStream_7(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->CreateEncryptionOutputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateObjKey_8(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char[16]> objkey, __zz_cib_AbiType_t<int*> pnKeyLen) {
    __zz_cib_obj->CreateObjKey(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char[16]>(objkey),
      __zz_cib_::__zz_cib_FromAbiType<int*>(pnKeyLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> __zz_cib_decl CreateEncryptionInputStream_9(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pInputStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputStream*>(
      __zz_cib_obj->CreateEncryptionInputStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pInputStream)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encrypt_10(const ::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char*> inStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> inLen, __zz_cib_AbiType_t<unsigned char*> outStr, __zz_cib_AbiType_t<::PoDoFo::pdf_long> outLen) {
    __zz_cib_obj->Encrypt(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char*>(inStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(inLen),
      __zz_cib_::__zz_cib_FromAbiType<unsigned char*>(outStr),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(outLen)
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_11(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class366 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GenerateInitialVector_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CalculateStreamLength_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Decrypt_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionDictionary_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::GenerateEncryptionKey_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CalculateStreamOffset_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Authenticate_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionOutputStream_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateObjKey_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::CreateEncryptionInputStream_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::Encrypt_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_Delete_11)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_GetMethodTable();
}
}

