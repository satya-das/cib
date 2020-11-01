/***************************************************************************
 *   Copyright (C) 2007 by Dominik Seichter                                *
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
#ifndef _PDF_ENCODING_H_
#  define _PDF_ENCODING_H_
#  include "PdfDefines.h"
#  include "PdfName.h"
#  include "PdfString.h"
// #include "util/PdfMutex.h"
#  include <iterator>

#include "__zz_cib_internal/podofo/base/PdfEncoding-predef.h"

namespace PoDoFo
{
  class PdfDictionary;
  class PdfFont;
  class PdfObject;
  /** 
   * A PdfEncoding is in PdfFont to transform a text string
   * into a representation so that it can be displayed in a
   * PDF file.
   *
   * PdfEncoding can also be used to convert strings from a
   * PDF file back into a PdfString.
   */
  class PdfEncoding
  {
  public:
    PdfEncoding(PdfEncoding&& rhs);
  protected:
    /** 
     *  Create a new PdfEncoding.
     *
     *  \param nFirstChar the first supported character code 
     *                    (either a byte value in the current encoding or a unicode value)
     *  \param nLastChar the last supported character code, must be larger than nFirstChar 
     *                    (either a byte value in the current encoding or a unicode value)
     *
     */
    PdfEncoding(int nFirstChar, int nLastChar, PdfObject* = NULL);
    /** Get a unique ID for this encoding
     *  which can used for comparisons!
     *
     *  \returns a unique id for this encoding!
     */
    virtual const PdfName& GetID() const = 0;
  public:
    using const_iterator_base = std::iterator<std::forward_iterator_tag, int, std::ptrdiff_t, const int *, const int &>;
    class const_iterator
    {
    public:
      const_iterator(const_iterator&& rhs);
    public:
      ~const_iterator();
      const_iterator(const PdfEncoding* pEncoding, int nCur);
      const_iterator(const const_iterator& rhs);
      const const_iterator& operator=(const const_iterator& rhs);
      bool operator==(const const_iterator& rhs) const;
      bool operator!=(const const_iterator& rhs) const;
      pdf_utf16be operator*() const;
      const_iterator& operator++();

    private:
      __ZZ_CIB_PROXY_CLASS_INTERNALS(const_iterator, PoDoFo::PdfEncoding::const_iterator);
    };
    virtual ~PdfEncoding();
    /** Comparison operator.
     *
     *  \param rhs the PdfEncoding to which this encoding should be compared
     *
     *  \returns true if both encodings are the same.
     */
    bool operator==(const PdfEncoding& rhs) const;
    /** Comparison operator.
     *
     *  \param rhs the PdfEncoding to which this encoding should be compared
     *
     *  \returns true if this encoding is less than the specified.
     */
    bool operator<(const PdfEncoding& rhs) const;
    /** Add this encoding object to a dictionary
     *  usually be adding an /Encoding key in font dictionaries.
     *
     *  \param rDictionary add the encoding to this dictionary
     */
    virtual void AddToDictionary(PdfDictionary& rDictionary) const = 0;
    /** Convert a string that is encoded with this encoding
     *  to an unicode PdfString.
     *
     *  \param rEncodedString a string encoded by this encoding. 
     *         Usually this string was read from a content stream.
     *  \param pFont the font for which this string is converted
     *
     *  \returns an unicode PdfString.
     */
    virtual PdfString ConvertToUnicode(const PdfString& rEncodedString, const PdfFont* pFont) const;
    /** Convert a unicode PdfString to a string encoded with this encoding.
     *
     *  \param rString an unicode PdfString.
     *  \param pFont the font for which this string is converted
     *
     *  \returns an encoded PdfRefCountedBuffer. The PdfRefCountedBuffer is treated as a series of bytes
     *           and is allowed to have 0 bytes. The returned buffer must not be a unicode string.
     */
    virtual PdfRefCountedBuffer ConvertToEncoding(const PdfString& rString, const PdfFont* pFont) const;
    virtual bool IsAutoDelete() const = 0;
    virtual bool IsSingleByteEncoding() const = 0;
    /** 
     * \returns the first character code that is defined for this encoding
     */
    int GetFirstChar() const;
    /** 
     * \returns the last character code that is defined for this encoding
     */
    int GetLastChar() const;
    /** Iterate over all unicode character points in this
     *  encoding, beginning with the first.
     *
     *  \returns iterator pointing to the first defined unicode character
     */
    const_iterator begin() const;
    /** Iterate over all unicode character points in this
     *  encoding, beginning with the first.
     *
     *  \returns iterator pointing at the end
     */
    const_iterator end() const;
    /** Get the unicode character code for this encoding
     *  at the position nIndex. nIndex is a position between
     *  GetFirstChar() and GetLastChar()
     *
     *  \param nIndex character code at position index
     *  \returns unicode character code 
     * 
     *  \see GetFirstChar 
     *  \see GetLastChar
     *
     *  Will throw an exception if nIndex is out of range.
     */
    virtual pdf_utf16be GetCharCode(int nIndex) const = 0;
  protected:
    pdf_utf16be GetUnicodeValue(pdf_utf16be) const;

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfEncoding, PoDoFo::PdfEncoding);
  };
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
  /**
   * A common base class for standard PdfEncoding which are
   * known by name.
   *
   *  - PdfDocEncoding (only use this for strings which are not printed 
   *                    in the document. This is for meta data in the PDF).
   *  - MacRomanEncoding
   *  - WinAnsiEncoding
   *  - MacExpertEncoding
   *  - StandardEncoding
   *  - SymbolEncoding
   *  - ZapfDingbatsEncoding
   *
   *  \see PdfWinAnsiEncoding
   *  \see PdfMacRomanEncoding
   *  \see PdfMacExportEncoding
   *..\see PdfStandardEncoding
   *  \see PdfSymbolEncoding
   *  \see PdfZapfDingbatsEncoding
   *
   */
  class PdfSimpleEncoding : public ::PoDoFo::PdfEncoding
  {
  public:
    PdfSimpleEncoding(PdfSimpleEncoding&& rhs);
  public:
    /*
     *  Create a new simple PdfEncoding which uses 1 byte.
     *
     *  \param rName the name of a standard PdfEncoding
     *
     *  As of now possible values for rName are:
     *  - MacRomanEncoding
     *  - WinAnsiEncoding
     *  - MacExpertEncoding
     *  - StandardEncoding
     *  - SymbolEncoding
     *  - ZapfDingbatsEncoding
     *
     *  \see PdfWinAnsiEncoding
     *  \see PdfMacRomanEncoding
     *  \see PdfMacExportEncoding
     *  \see PdfStandardEncoding
     *  \see PdfSymbolEncoding
     *  \see PdfZapfDingbatsEncoding
     *
     *  This will allocate a table of 65535 short values
     *  to make conversion from unicode to encoded strings
     *  faster. As this requires a lot of memory, make sure that
     *  only one object of a certain encoding exists at one
     *  time, which is no problem as all methods are const anyways!
     *
     */
    PdfSimpleEncoding(const PdfName& rName);
    ~PdfSimpleEncoding();
    /** Add this encoding object to a dictionary
     *  usually be adding an /Encoding key in font dictionaries.
     *
     *  \param rDictionary add the encoding to this dictionary
     */
    virtual void AddToDictionary(PdfDictionary& rDictionary) const;
    /** Convert a string that is encoded with this encoding
     *  to an unicode PdfString.
     *
     *  \param rEncodedString a string encoded by this encoding. 
     *         Usually this string was read from a content stream.
     *  \param pFont the font for which this string is converted
     *
     *  \returns an unicode PdfString.
     */
    virtual PdfString ConvertToUnicode(const PdfString& rEncodedString, const PdfFont* pFont) const;
    /** Convert a unicode PdfString to a string encoded with this encoding.
     *
     *  \param rString an unicode PdfString.
     *  \param pFont the font for which this string is converted
     *
     *  \returns an encoded PdfRefCountedBuffer. The PdfRefCountedBuffer is treated as a series of bytes
     *           and is allowed to have 0 bytes. The returned buffer must not be a unicode string.
     */
    virtual PdfRefCountedBuffer ConvertToEncoding(const PdfString& rString, const PdfFont* pFont) const;
    /** 
     * PdfSimpleEncoding subclasses are usuylla not auto-deleted, as
     * they are allocated statically only once.
     *
     * \returns true if this encoding should be deleted automatically with the
     *          font.
     *
     * \see PdfFont::WinAnsiEncoding
     * \see PdfFont::MacRomanEncoding
     */
    virtual bool IsAutoDelete() const;
    /** 
     *  \returns true if this is a single byte encoding with a maximum of 256 values.
     */
    virtual bool IsSingleByteEncoding() const;
    /** Get the name of this encoding.
     *  
     *  \returns the name of this encoding.
     */
    const PdfName& GetName() const;
    /** Get the unicode character code for this encoding
     *  at the position nIndex. nIndex is a position between
     *  GetFirstChar() and GetLastChar()
     *
     *  \param nIndex character code at position index
     *  \returns unicode character code 
     * 
     *  \see GetFirstChar 
     *  \see GetLastChar
     *
     *  Will throw an exception if nIndex is out of range.
     */
    virtual pdf_utf16be GetCharCode(int nIndex) const;
    char GetUnicodeCharCode(pdf_utf16be unicodeValue) const;
  protected:
    /** Get a unique ID for this encoding
     *  which can used for comparisons!
     *
     *  \returns a unique id for this encoding!
     */
    virtual const PdfName& GetID() const;
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const = 0;

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfSimpleEncoding, PoDoFo::PdfSimpleEncoding);
  };
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
  /** 
   * The PdfDocEncoding is the default encoding for
   * all strings in PoDoFo which are data in the PDF
   * file.
   *
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::DocEncoding.
   *
   * \see PdfFont::DocEncoding
   */
  class PdfDocEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfDocEncoding(PdfDocEncoding&& rhs);
  public:
    PdfDocEncoding(const PdfDocEncoding&);
    ~PdfDocEncoding();
    /** Create a new PdfDocEncoding
     */
    PdfDocEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfDocEncoding, PoDoFo::PdfDocEncoding);
  };
  /** 
   * The WinAnsi Encoding is the default encoding in PoDoFo for 
   * contents on PDF pages.
   *
   * It is also called CP-1252 encoding.
   * This class may be used as base for derived encodings.
   *
   * \see PdfWin1250Encoding
   *
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::WinAnsiEncoding.
   *
   * \see PdfFont::WinAnsiEncoding
   */
  class PdfWinAnsiEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfWinAnsiEncoding(PdfWinAnsiEncoding&& rhs);
  public:
    PdfWinAnsiEncoding(const PdfWinAnsiEncoding&);
    ~PdfWinAnsiEncoding();
    /** Create a new PdfWinAnsiEncoding
     */
    PdfWinAnsiEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;
    /** Add this encoding object to a dictionary
     *  usually be adding an /Encoding key in font dictionaries.
     *  
     *  This method generates array of differences into /Encoding
     *  dictionary if called from derived class with
     *  different unicode table.
     *
     *  \param rDictionary add the encoding to this dictionary
     */
    virtual void AddToDictionary(PdfDictionary& rDictionary) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfWinAnsiEncoding, PoDoFo::PdfWinAnsiEncoding);
  };
  /** 
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::MacRomanEncoding.
   *
   * \see PdfFont::MacRomanEncoding
   */
  class PdfMacRomanEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfMacRomanEncoding(PdfMacRomanEncoding&& rhs);
  public:
    PdfMacRomanEncoding(const PdfMacRomanEncoding&);
    ~PdfMacRomanEncoding();
    /** Create a new PdfMacRomanEncoding
     */
    PdfMacRomanEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfMacRomanEncoding, PoDoFo::PdfMacRomanEncoding);
  };
  /** 
   */
  class PdfMacExpertEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfMacExpertEncoding(PdfMacExpertEncoding&& rhs);
  public:
    PdfMacExpertEncoding(const PdfMacExpertEncoding&);
    ~PdfMacExpertEncoding();
    /** Create a new PdfMacExpertEncoding
     */
    PdfMacExpertEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfMacExpertEncoding, PoDoFo::PdfMacExpertEncoding);
  };
  // OC 13.08.2010 Neu: StandardEncoding
  /** 
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::StandardEncoding.
   *
   * \see PdfFont::StandardEncoding
   */
  class PdfStandardEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfStandardEncoding(PdfStandardEncoding&& rhs);
  public:
    PdfStandardEncoding(const PdfStandardEncoding&);
    ~PdfStandardEncoding();
    /** Create a new PdfStandardEncoding
     */
    PdfStandardEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfStandardEncoding, PoDoFo::PdfStandardEncoding);
  };
  // OC 13.08.2010 Neu: SymbolEncoding
  /** 
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::SymbolEncoding.
   *
   * \see PdfFont::SymbolEncoding
   */
  class PdfSymbolEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfSymbolEncoding(PdfSymbolEncoding&& rhs);
  public:
    PdfSymbolEncoding(const PdfSymbolEncoding&);
    ~PdfSymbolEncoding();
    /** Create a new PdfSymbolEncoding
     */
    PdfSymbolEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfSymbolEncoding, PoDoFo::PdfSymbolEncoding);
  };
  // OC 13.08.2010 Neu: ZapfDingbatsEncoding
  /** 
   * Do not allocate this class yourself, as allocations
   * might be expensive. Try using PdfFont::ZapfDingbats.
   *
   * \see PdfFont::ZapfDingbatsEncoding
   */
  class PdfZapfDingbatsEncoding : public ::PoDoFo::PdfSimpleEncoding
  {
  public:
    PdfZapfDingbatsEncoding(PdfZapfDingbatsEncoding&& rhs);
  public:
    PdfZapfDingbatsEncoding(const PdfZapfDingbatsEncoding&);
    ~PdfZapfDingbatsEncoding();
    /** Create a new PdfZapfDingbatsEncoding
     */
    PdfZapfDingbatsEncoding();
  protected:
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfZapfDingbatsEncoding, PoDoFo::PdfZapfDingbatsEncoding);
  };
  /**
  * WINDOWS-1250 encoding
  */
  class PdfWin1250Encoding : public ::PoDoFo::PdfWinAnsiEncoding
  {
  public:
    PdfWin1250Encoding(PdfWin1250Encoding&& rhs);
  public:
    PdfWin1250Encoding(const PdfWin1250Encoding&);
    ~PdfWin1250Encoding();
    /** Create a new PdfWin1250Encoding
     */
    PdfWin1250Encoding();
  protected:
    virtual const PdfName& GetID() const;
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfWin1250Encoding, PoDoFo::PdfWin1250Encoding);
  };
  /**
  * ISO-8859-2 encoding
  */
  class PdfIso88592Encoding : public ::PoDoFo::PdfWinAnsiEncoding
  {
  public:
    PdfIso88592Encoding(PdfIso88592Encoding&& rhs);
  public:
    PdfIso88592Encoding(const PdfIso88592Encoding&);
    ~PdfIso88592Encoding();
    /** Create a new PdfIso88592Encoding
     */
    PdfIso88592Encoding();
  protected:
    virtual const PdfName& GetID() const;
    /** Gets a table of 256 short values which are the 
     *  big endian unicode code points that are assigned
     *  to the 256 values of this encoding.
     *
     *  This table is used internally to convert an encoded
     *  string of this encoding to and from unicode.
     *
     *  \returns an array of 256 big endian unicode code points
     */
    virtual const pdf_utf16be* GetToUnicodeTable() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfIso88592Encoding, PoDoFo::PdfIso88592Encoding);
  };
}

#include "__zz_cib_internal/podofo/base/PdfEncoding-postdef.h"
#endif
