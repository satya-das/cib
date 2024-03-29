/***************************************************************************
 *   Copyright (C) 2006 by Dominik Seichter                                *
 *   domseichter@web.de                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                         *
 *   In addition, as a special exception, the copyright holders give       *
 *   permission to link the code of portions of this program with the      *
 *   OpenSSL library under certain conditions as described in each         *
 *   individual source file, and distribute linked combinations            *
 *   including the two.                                                    *
 *   You must obey the GNU General Public License in all respects          *
 *   for all of the code used other than OpenSSL.  If you modify           *
 *   file(s) with this exception, you may extend this exception to your    *
 *   version of the file(s), but you are not obligated to do so.  If you   *
 *   do not wish to do so, delete this exception statement from your       *
 *   version.  If you delete this exception statement from all source      *
 *   files in the program, then also delete it here.                       *
 ***************************************************************************/
#ifndef _PDFENCRYPT_H_
#  define _PDFENCRYPT_H_
#  include "PdfDefines.h"
#  include "PdfString.h"
#  include "PdfReference.h"
#  include <string.h>

#include "__zz_cib_internal/podofo/base/PdfEncrypt-predef.h"

namespace PoDoFo
{
  class PdfDictionary;
  class PdfInputStream;
  class PdfObject;
  class PdfOutputStream;
  class AESCryptoEngine;
#  ifndef PODOFO_HAVE_OPENSSL_NO_RC4
  class RC4CryptoEngine;
#  endif
  /// Class representing PDF encryption methods. (For internal use only)
  /// Based on code from Ulrich Telle: http://wxcode.sourceforge.net/components/wxpdfdoc/
  /// Original Copyright header:
  ///////////////////////////////////////////////////////////////////////////////
  // Name:        pdfencrypt.h
  // Purpose:     
  // Author:      Ulrich Telle
  // Modified by:
  // Created:     2005-08-16
  // Copyright:   (c) Ulrich Telle
  // Licence:     wxWindows licence
  ///////////////////////////////////////////////////////////////////////////////
  
  
  /** A class that is used to encrypt a PDF file and 
   *  set document permisions on the PDF file.
   *
   *  As a user of this class, you have only to instanciate a
   *  object of this class and pass it to PdfWriter, PdfMemDocument,
   *  PdfStreamedDocument or PdfImmediateWriter.
   *  You do not have to call any other method of this class. The above
   *  classes know how to handle encryption using Pdfencrypt.
   *
   */
  class PdfEncrypt
  {
  public:
    PdfEncrypt(PdfEncrypt&& rhs);
  public:
    /** A enum specifying a valid keylength for a PDF encryption key.
     *  Keys must be in the range 40 to 128 bit and have to be a 
     *  multiple of 8.
     *
     *  Adobe Reader supports only keys with 40, 128 or 256 bits!
     */
    typedef enum {
        ePdfKeyLength_40  = 40,
        ePdfKeyLength_56  = 56,
        ePdfKeyLength_80  = 80,
        ePdfKeyLength_96  = 96,
        ePdfKeyLength_128 = 128
#ifdef PODOFO_HAVE_LIBIDN
        ,ePdfKeyLength_256 = 256
#endif //PODOFO_HAVE_LIBIDN
} EPdfKeyLength;
    /** Set user permissions/restrictions on a document
     */
    typedef enum {
        ePdfPermissions_Print		= 0x00000004,  ///< Allow printing the document
        ePdfPermissions_Edit		= 0x00000008,  ///< Allow modifying the document besides annotations, form fields or chaning pages
        ePdfPermissions_Copy		= 0x00000010,  ///< Allow text and graphic extraction
        ePdfPermissions_EditNotes	= 0x00000020,  ///< Add or modify text annoations or form fields (if ePdfPermissions_Edit is set also allow to create interactive form fields including signature)
        ePdfPermissions_FillAndSign	= 0x00000100,  ///< Fill in existing form or signature fields 
        ePdfPermissions_Accessible	= 0x00000200,  ///< Extract text and graphics to support user with disabillities
        ePdfPermissions_DocAssembly	= 0x00000400,  ///< Assemble the document: insert, create, rotate delete pages or add bookmarks
        ePdfPermissions_HighPrint	= 0x00000800   ///< Print a high resolution version of the document
} EPdfPermissions;
    /**
     * The encryption algorithm.
     */
    typedef enum {
#ifndef PODOFO_HAVE_OPENSSL_NO_RC4
        ePdfEncryptAlgorithm_RC4V1 = 1, ///< RC4 Version 1 encryption using a 40bit key
        ePdfEncryptAlgorithm_RC4V2 = 2, ///< RC4 Version 2 encryption using a key with 40-128bit
#endif // PODOFO_HAVE_OPENSSL_NO_RC4
        ePdfEncryptAlgorithm_AESV2 = 4  ///< AES encryption with a 128 bit key (PDF1.6)
#ifdef PODOFO_HAVE_LIBIDN
        ,ePdfEncryptAlgorithm_AESV3 = 8 ///< AES encryption with a 256 bit key (PDF1.7 extension 3) - Support added by P. Zent
#endif //PODOFO_HAVE_LIBIDN
} EPdfEncryptAlgorithm;
    /** Create a PdfEncrypt object which can be used to encrypt a PDF file.
     * 
     *  \param userPassword the user password (if empty the user does not have 
     *                      to enter a password to open the document)
     *  \param ownerPassword the owner password
     *  \param protection several EPdfPermissions values or'ed together to set 
     *                    the users permissions for this document
     *  \param eAlgorithm the revision of the encryption algorithm to be used
     *  \param eKeyLength the length of the encryption key ranging from 40 to 128 bits 
     *                    (only used if eAlgorithm == ePdfEncryptAlgorithm_RC4V2)
     *
     *  \see GenerateEncryptionKey with the documentID to generate the real
     *       encryption key using this information
     */
    static PdfEncrypt* CreatePdfEncrypt(const std::string& userPassword, const std::string& ownerPassword, int protection = ePdfPermissions_Print | ePdfPermissions_Edit | ePdfPermissions_Copy | ePdfPermissions_EditNotes | ePdfPermissions_FillAndSign | ePdfPermissions_Accessible | ePdfPermissions_DocAssembly | ePdfPermissions_HighPrint, EPdfEncryptAlgorithm eAlgorithm = ePdfEncryptAlgorithm_AESV2, EPdfKeyLength eKeyLength = ePdfKeyLength_40);
    /** Initialize a PdfEncrypt object from an encryption dictionary in a PDF file.
     *
     *  This is required for encrypting a PDF file, but handled internally in PdfParser
     *  for you.
     *  
     *  Will use only encrypting algorithms that are enabled.
     *
     *  \param pObject a PDF encryption dictionary
     *
     *  \see GetEnabledEncryptionAlgorithms
     */
    static PdfEncrypt* CreatePdfEncrypt(const PdfObject* pObject);
    /** Copy constructor
     *
     *  \param rhs another PdfEncrypt object which is copied
     */
    static PdfEncrypt* CreatePdfEncrypt(const PdfEncrypt& rhs);
    /**
     * Retrieve the list of encryption algorithms that are used
     * when loading a PDF document.
     *
     * By default all alogrithms are enabled.
     *
     * \see IsEncryptionEnabled
     * \see SetEnabledEncryptionAlgorithms
     *
     * \return an or'ed together list of all enabled encryption algorithms
     */
    static int GetEnabledEncryptionAlgorithms();
    /**
     * Specify the list of encryption algorithms that should be used by PoDoFo
     * when loading a PDF document.
     *
     * This can be used to disable for example AES encryption/decryption
     * which is unstable in certain cases.
     *
     * \see GetEnabledEncryptionAlgorithms
     * \see IsEncryptionEnabled
     */
    static void SetEnabledEncryptionAlgorithms(int nEncryptionAlgorithms);
    /**
     * Test if a certain encryption algorithm is enabled for loading PDF documents.
     *
     * \returns ture if the encryption algorithm is enabled
     * \see GetEnabledEncryptionAlgorithms
     * \see SetEnabledEncryptionAlgorithms
     */
    static bool IsEncryptionEnabled(EPdfEncryptAlgorithm eAlgorithm);
    /** Destruct the PdfEncrypt object
     */
    virtual ~PdfEncrypt() = 0;
    /** Generate encryption key from user and owner passwords and protection key
     *  
     *  \param documentId the documentId of the current document
     */
    virtual void GenerateEncryptionKey(const PdfString& documentId) = 0;
    /** Fill all keys into a encryption dictionary.
     *  This dictionary is usually added to the PDF files trailer
     *  under the /Encryption key.
     *
     *  \param rDictionary an empty dictionary which is filled with information about
     *                     the used encryption algorithm
     */
    virtual void CreateEncryptionDictionary(PdfDictionary& rDictionary) const = 0;
    /** Create a PdfOutputStream that encrypts all data written to 
     *  it using the current settings of the PdfEncrypt object.
     *
     *  Warning: Currently only RC4 based encryption is supported using output streams!
     *  
     *  \param pOutputStream the created PdfOutputStream writes all encrypted
     *         data to this output stream.
     *
     *  \returns a PdfOutputStream that encryts all data.
     */
    virtual PdfOutputStream* CreateEncryptionOutputStream(PdfOutputStream* pOutputStream) = 0;
    /** Create a PdfInputStream that decrypts all data read from 
     *  it using the current settings of the PdfEncrypt object.
     *
     *  Warning: Currently only RC4 based encryption is supported using output streams!
     *  
     *  \param pInputStream the created PdfInputStream reads all decrypted
     *         data to this input stream.
     *
     *  \returns a PdfInputStream that decrypts all data.
     */
    virtual PdfInputStream* CreateEncryptionInputStream(PdfInputStream* pInputStream) = 0;
    /**
     * Tries to authenticate a user using either the user or owner password
     * 
     * \param password owner or user password
     * \param documentId the documentId of the PDF file
     *  
     * \returns true if either the owner or user password matches password
     */
    virtual bool Authenticate(const std::string& password, const PdfString& documentId) = 0;
    /** Get the encryption algorithm of this object.
     * \returns the EPdfEncryptAlgorithm of this object
     */
    EPdfEncryptAlgorithm GetEncryptAlgorithm() const;
    /** Checks if printing this document is allowed.
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to print this document
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsPrintAllowed() const;
    /** Checks if modifiying this document (besides annotations, form fields or changing pages) is allowed.
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to modfiy this document
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsEditAllowed() const;
    /** Checks if text and graphics extraction is allowed.
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to extract text and graphics from this document
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsCopyAllowed() const;
    /** Checks if it is allowed to add or modify annotations or form fields
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to add or modify annotations or form fields
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsEditNotesAllowed() const;
    /** Checks if it is allowed to fill in existing form or signature fields
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to fill in existing form or signature fields
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsFillAndSignAllowed() const;
    /** Checks if it is allowed to extract text and graphics to support users with disabillities
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to extract text and graphics to support users with disabillities
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsAccessibilityAllowed() const;
    /** Checks if it is allowed to insert, create, rotate, delete pages or add bookmarks
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed  to insert, create, rotate, delete pages or add bookmarks
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsDocAssemblyAllowed() const;
    /** Checks if it is allowed to print a high quality version of this document 
     *  Every PDF consuming applications has to adhere this value!
     *
     *  \returns true if you are allowed to print a high quality version of this document 
     *
     *  \see PdfEncrypt to set own document permissions.
     */
    bool IsHighPrintAllowed() const;
    /// Get the U object value (user)
    const unsigned char* GetUValue() const;
    /// Get the O object value (owner)
    const unsigned char* GetOValue() const;
    /// Get the encryption key value (owner)
    const unsigned char* GetEncryptionKey() const;
    /// Get the P object value (protection)
    pdf_int32 GetPValue() const;
    /// Get the revision number of the encryption method
    int GetRevision() const;
    /// Get the key length of the encryption key in bits
    int GetKeyLength() const;
    /// Is metadata encrypted
    bool IsMetadataEncrypted() const;
    /// Encrypt a wxString
    //void Encrypt( std::string & str, pdf_long inputLen ) const;
    
    /// Encrypt a character string
    // inStr: the input buffer
    // inLen: length of the input buffer
    // outStr: the output buffer
    // outLen: length of the output buffer
    virtual void Encrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long outLen) const = 0;
    /// Decrypt a character string
    // inStr: the input buffer
    // inLen: length of the input buffer
    // outStr: the output buffer
    // outLen: length of the output buffer
    virtual void Decrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long& outLen) const = 0;
    /// Calculate stream size
    virtual pdf_long CalculateStreamLength(pdf_long length) const = 0;
    /// Calculate stream offset
    virtual pdf_long CalculateStreamOffset() const = 0;
    /** Set the reference of the object that is currently encrypted.
     *
     *  This value will be used in following calls of Encrypt
     *  to encrypt the object.
     *
     *  \see Encrypt 
     */
    void SetCurrentReference(const PdfReference& rRef);
  protected:
    PdfEncrypt();
    PdfEncrypt(const PdfEncrypt& rhs);
    /// Check two keys for equality
    bool CheckKey(unsigned char key1[32], unsigned char key2[32]);

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfEncrypt, PoDoFo::PdfEncrypt);
  };
  /** A pure virtual class that is used to encrypt a PDF file (AES-128/256)
   *  This class is the base for classes that implement algorithms based on AES
   *
   *  Client code is working only with PdfEncrypt class and knows nothing
   *	about PdfEncrypt*, it is created through CreatePdfEncrypt factory method
   *
   */
  class PdfEncryptAESBase
  {
  public:
    PdfEncryptAESBase(PdfEncryptAESBase&& rhs);
  public:
    PdfEncryptAESBase(const PdfEncryptAESBase&);
    ~PdfEncryptAESBase();
  protected:
    PdfEncryptAESBase();
    void BaseDecrypt(const unsigned char* key, int keylen, const unsigned char* iv, const unsigned char* textin, pdf_long textlen, unsigned char* textout, pdf_long& textoutlen);
    void BaseEncrypt(const unsigned char* key, int keylen, const unsigned char* iv, const unsigned char* textin, pdf_long textlen, unsigned char* textout, pdf_long textoutlen);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfEncryptAESBase, PoDoFo::PdfEncryptAESBase);
  };
#  ifndef PODOFO_HAVE_OPENSSL_NO_RC4
  /** A pure virtual class that is used to encrypt a PDF file (RC4-40..128)
   *  This class is the base for classes that implement algorithms based on RC4
   *
   *  Client code is working only with PdfEncrypt class and knows nothing
   *	about PdfEncrypt*, it is created through CreatePdfEncrypt factory method
   *
   */
  class PdfEncryptRC4Base
  {
  public:
    PdfEncryptRC4Base(PdfEncryptRC4Base&& rhs);
  public:
    PdfEncryptRC4Base(const PdfEncryptRC4Base&);
    ~PdfEncryptRC4Base();
  protected:
    PdfEncryptRC4Base();
    /// AES encryption
    void RC4(const unsigned char* key, int keylen, const unsigned char* textin, pdf_long textlen, unsigned char* textout, pdf_long textoutlen);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfEncryptRC4Base, PoDoFo::PdfEncryptRC4Base);
  };
#  endif
  /*
  #ifdef PODOFO_HAVE_OPENSSL_NO_RC4
  class PdfEncryptMD5Base : public PdfEncrypt {
  #else
  class PdfEncryptMD5Base : public PdfEncrypt, public PdfEncryptRC4Base {
  #endif // PODOFO_HAVE_OPENSSL_NO_RC4
  /*/
  class PdfEncryptMD5Base : public ::PoDoFo::PdfEncrypt,public ::PoDoFo::PdfEncryptRC4Base
  {
  public:
    PdfEncryptMD5Base(PdfEncryptMD5Base&& rhs);
  public:
    PdfEncryptMD5Base();
    // copy constructor
    PdfEncryptMD5Base(const PdfEncrypt& rhs);
    /*
     *	Destruct PdfEncryptAESV2 object
     */
    virtual ~PdfEncryptMD5Base();
    virtual PdfInputStream* CreateEncryptionInputStream(PdfInputStream* pInputStream) = 0;
    virtual PdfOutputStream* CreateEncryptionOutputStream(PdfOutputStream* pOutputStream) = 0;
    virtual void CreateEncryptionDictionary(PdfDictionary& rDictionary) const;
    virtual bool Authenticate(const std::string& password, const PdfString& documentId) = 0;
    /// Encrypt a character string
    virtual void Encrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long outLen) const = 0;
    virtual void GenerateEncryptionKey(const PdfString& documentId) = 0;
    /** Create a PdfString of MD5 data generated from a buffer in memory.
     *  \param pBuffer the buffer of which to calculate the MD5 sum
     *  \param nLength the length of the buffer
     * 
     *  \returns an MD5 sum as PdfString
     */
    static PdfString GetMD5String(const unsigned char* pBuffer, int nLength);
    virtual pdf_long CalculateStreamOffset() const = 0;
    virtual pdf_long CalculateStreamLength(pdf_long length) const = 0;
    /// Calculate the binary MD5 message digest of the given data
    static void GetMD5Binary(const unsigned char* data, int length, unsigned char* digest);
    bool Authenticate(const std::string& documentID, const std::string& password, const std::string& uValue, const std::string& oValue, int pValue, int lengthValue, int rValue);
  protected:
    /// Generate initial vector
    virtual void GenerateInitialVector(unsigned char iv[16]);
    /// Compute owner key
    void ComputeOwnerKey(unsigned char userPad[32], unsigned char ownerPad[32], int keylength, int revision, bool authenticate, unsigned char ownerKey[32]);
    /// Pad a password to 32 characters
    void PadPassword(const std::string& password, unsigned char pswd[32]);
    /// Compute encryption key and user key
    void ComputeEncryptionKey(const std::string& documentID, unsigned char userPad[32], unsigned char ownerKey[32], int pValue, int keyLength, int revision, unsigned char userKey[32], bool bEncryptMetadata);
    /** Create the encryption key for the current object.
     *
     *  \param objkey pointer to an array of at least MD5_HASHBYTES (=16) bytes length
     *  \param pnKeyLen pointer to an integer where the actual keylength is stored.
     */
    virtual void CreateObjKey(unsigned char objkey[16], int* pnKeyLen) const;

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfEncryptMD5Base, PoDoFo::PdfEncryptMD5Base);
  };
  /** A class that is used to encrypt a PDF file (AES-128)
   *
   *  Client code is working only with PdfEncrypt class and knows nothing
   *	about PdfEncryptAES*, it is created through CreatePdfEncrypt factory method	
   *
   */
  class PdfEncryptAESV2 : public ::PoDoFo::PdfEncryptMD5Base,public ::PoDoFo::PdfEncryptAESBase
  {
  public:
    PdfEncryptAESV2(PdfEncryptAESV2&& rhs);
  public:
    PdfEncryptAESV2(const PdfEncryptAESV2&);
    /*
    *	Constructors of PdfEncryptAESV2
    */
    PdfEncryptAESV2(PdfString oValue, PdfString uValue, int pValue, bool bEncryptMetadata);
    PdfEncryptAESV2(const PdfEncrypt& rhs);
    PdfEncryptAESV2(const std::string& userPassword, const std::string& ownerPassword, int protection = ePdfPermissions_Print | ePdfPermissions_Edit | ePdfPermissions_Copy | ePdfPermissions_EditNotes | ePdfPermissions_FillAndSign | ePdfPermissions_Accessible | ePdfPermissions_DocAssembly | ePdfPermissions_HighPrint);
    /*
    *	Destruct PdfEncryptAESV2 object
    */
    virtual ~PdfEncryptAESV2();
    virtual PdfInputStream* CreateEncryptionInputStream(PdfInputStream* pInputStream);
    virtual PdfOutputStream* CreateEncryptionOutputStream(PdfOutputStream* pOutputStream);
    virtual bool Authenticate(const std::string& password, const PdfString& documentId);
    /// Encrypt a character string
    virtual void Encrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long outLen) const;
    virtual void Decrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long& outLen) const;
    virtual void GenerateEncryptionKey(const PdfString& documentId);
    virtual pdf_long CalculateStreamOffset() const;
    virtual pdf_long CalculateStreamLength(pdf_long length) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfEncryptAESV2, PoDoFo::PdfEncryptAESV2);
  };
#  ifndef PODOFO_HAVE_OPENSSL_NO_RC4
  /** A class that is used to encrypt a PDF file (RC4 40-bit and 128-bit)
   *
   *  Client code is working only with PdfEncrypt class and knows nothing
   *	about PdfEncryptRC4, it is created through CreatePdfEncrypt factory method	
   *
   */
  class PdfEncryptRC4 : public ::PoDoFo::PdfEncryptMD5Base
  {
  public:
    PdfEncryptRC4(PdfEncryptRC4&& rhs);
  public:
    PdfEncryptRC4(const PdfEncryptRC4&);
    /*
    *	Constructors of PdfEncryptRC4 objects
    */
    PdfEncryptRC4(PdfString oValue, PdfString uValue, int pValue, int rValue, EPdfEncryptAlgorithm eAlgorithm, long length, bool bEncryptMetadata);
    PdfEncryptRC4(const PdfEncrypt& rhs);
    PdfEncryptRC4(const std::string& userPassword, const std::string& ownerPassword, int protection = ePdfPermissions_Print | ePdfPermissions_Edit | ePdfPermissions_Copy | ePdfPermissions_EditNotes | ePdfPermissions_FillAndSign | ePdfPermissions_Accessible | ePdfPermissions_DocAssembly | ePdfPermissions_HighPrint, EPdfEncryptAlgorithm eAlgorithm = ePdfEncryptAlgorithm_RC4V1, EPdfKeyLength eKeyLength = ePdfKeyLength_40);
    /*
     *	Destruct PdfEncryptRC4 object
     */
    virtual ~PdfEncryptRC4();
    virtual bool Authenticate(const std::string& password, const PdfString& documentId);
    /// Encrypt a character string
    virtual void Encrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long outLen) const;
    virtual void Decrypt(const unsigned char* inStr, pdf_long inLen, unsigned char* outStr, pdf_long& outLen) const;
    virtual PdfInputStream* CreateEncryptionInputStream(PdfInputStream* pInputStream);
    virtual PdfOutputStream* CreateEncryptionOutputStream(PdfOutputStream* pOutputStream);
    virtual void GenerateEncryptionKey(const PdfString& documentId);
    virtual pdf_long CalculateStreamOffset() const;
    virtual pdf_long CalculateStreamLength(pdf_long length) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfEncryptRC4, PoDoFo::PdfEncryptRC4);
  };
#  endif
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
}

#include "__zz_cib_internal/podofo/base/PdfEncrypt-postdef.h"
#endif
