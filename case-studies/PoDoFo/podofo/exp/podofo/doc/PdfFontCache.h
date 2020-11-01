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
#ifndef _PDF_FONT_CACHE_H_
#  define _PDF_FONT_CACHE_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/Pdf3rdPtyForwardDecl.h"
#  include "podofo/base/PdfEncoding.h"
#  include "podofo/base/PdfEncodingFactory.h"
#  include "PdfFont.h"
#  include "PdfFontConfigWrapper.h"
#  ifdef _WIN32
// to have LOGFONTA/LOGFONTW available
// #include <windows.h>

// // Undefined stuff which windows does
// // define that breaks are build
// // e.g. GetObject is defined to either GetObjectA or GetObjectW
// #ifdef GetObject
// #undef GetObject
// #endif // GetObject

// #ifdef CreateFont
// #undef CreateFont
// #endif // CreateFont

// #ifdef DrawText
// #undef DrawText
// #endif // DrawText
#  endif

#include "__zz_cib_internal/podofo/doc/PdfFontCache-predef.h"

namespace PoDoFo
{
  class PdfFontMetrics;
  class PdfVecObjects;
  /** A private structure,
   *  which represents a font in the cache.
   */
  struct TFontCacheElement
  {
  public:
    TFontCacheElement(TFontCacheElement&& rhs);
  public:
    ~TFontCacheElement();
      TFontCacheElement();
      TFontCacheElement(const char* pszFontName, bool bBold, bool bItalic, bool bIsSymbolCharset, const PdfEncoding* const pEncoding);
#  if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
#    if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
      TFontCacheElement(const wchar_t* pszFontName, bool bBold, bool bItalic, bool bIsSymbolCharset, const PdfEncoding* const pEncoding);
#    endif
#  endif
      const TFontCacheElement& operator=(const TFontCacheElement& rhs);
      bool operator<(const TFontCacheElement& rhs) const;
      bool operator()(const TFontCacheElement& r1, const TFontCacheElement& r2) const;

    private:
      __ZZ_CIB_PROXY_CLASS_INTERNALS(TFontCacheElement, PoDoFo::TFontCacheElement);
    };
  /**
   * This class assists PdfDocument
   * with caching font information.
   *
   * Additional to font caching, this class is also
   * responsible for font matching.
   *
   * PdfFont is an actual font that can be used in
   * a PDF file (i.e. it does also font embedding)
   * and PdfFontMetrics provides only metrics informations.
   *
   * This class is an internal class of PoDoFo
   * and should not be used in user applications
   *
   * \see PdfDocument
   */
  class PdfFontCache
  {
  public:
    PdfFontCache(PdfFontCache&& rhs);
  public:
    PdfFontCache(const PdfFontCache&);
    /**
     * Flags to control font creation.
     */
    enum EFontCreationFlags {
        eFontCreationFlags_None = 0,				///< No special settings
        eFontCreationFlags_AutoSelectBase14 = 1,	///< Create automatically a base14 font if the fontname matches one of them
        eFontCreationFlags_Type1Subsetting = 2		///< Create subsetted type1-font, which includes only used characters
    };
    /** Create an empty font cache 
     *
     *  \param pParent a PdfVecObjects which is required
     *                 to create new font objects
     */
    PdfFontCache(PdfVecObjects* pParent);
    /** Create an empty font cache 
     *
     *  \param rFontConfig provide a handle to fontconfig, as initializing a 
     *         new fontconfig intance might be time consuming.
     *  \param pParent a PdfVecObjects which is required
     *                 to create new font objects
     */
    PdfFontCache(const PdfFontConfigWrapper& rFontConfig, PdfVecObjects* pParent);
    /** Destroy and empty the font cache
     */
    ~PdfFontCache();
    /** 
     * Empty the internal font cache.
     * This should be done when ever a new document
     * is created or openened.
     */
    void EmptyCache();
    /** Get a font from the cache. If the font does not yet
     *  exist, add it to the cache. This font is created
     *  from an existing object.
     *
     *  \param pObject a PdfObject that is a font
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
     */
    PdfFont* GetFont(PdfObject* pObject);
    /** Get a font from the cache. If the font does not yet
     *  exist, add it to the cache.
     *
     *  \param pszFontName a valid fontname
     *  \param bBold if true search for a bold font
     *  \param bItalic if true search for an italic font
    *  \param bSymbolCharset whether to use symbol charset, rather than unicode charset
     *  \param bEmbedd if true a font for embedding into 
     *                 PDF will be created
     *  \param eFontCreationFlags special flag to specify how fonts should be created
     *  \param pEncoding the encoding of the font. The font will not take ownership of this object.     
     *  \param pszFileName optional path to a valid font file
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
     */
    PdfFont* GetFont(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, bool bEmbedd, EFontCreationFlags eFontCreationFlags = eFontCreationFlags_AutoSelectBase14, const PdfEncoding* const = PdfEncodingFactory::GlobalWinAnsiEncodingInstance(), const char* pszFileName = NULL);
    /** Get a font from the cache. If the font does not yet
     *  exist, add it to the cache.
     *
     *  \param pszFontName a valid fontname
     *  \param bBold if true search for a bold font
     *  \param bItalic if true search for an italic font
    *  \param bSymbolCharset whether to use symbol charset, rather than unicode charset
     *  \param bEmbedd if true a font for embedding into 
     *                 PDF will be created
     *  \param pEncoding the encoding of the font. The font will not take ownership of this object.     
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
    *
     *  This is an overloaded member function to allow working
     *  with unicode characters. On Unix systes you can also path
     *  UTF-8 to the const char* overload.
     */
#  if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
    PdfFont* GetFont(const wchar_t* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, bool bEmbedd, const PdfEncoding* const = PdfEncodingFactory::GlobalWinAnsiEncodingInstance());
    PdfFont* GetFont(const LOGFONTA& logFont, bool bEmbedd, const PdfEncoding* const pEncoding);
    PdfFont* GetFont(const LOGFONTW& logFont, bool bEmbedd, const PdfEncoding* const pEncoding);
#  endif
    /** Get a font from the cache. If the font does not yet
     *  exist, add it to the cache.
     *
     *  \param face a valid freetype font face (will be free'd by PoDoFo)
    *  \param bSymbolCharset whether to use symbol charset, rather than unicode charset
     *  \param bEmbedd if true a font for embedding into 
     *                 PDF will be created
     *  \param pEncoding the encoding of the font. The font will not take ownership of this object.     
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
     */
    PdfFont* GetFont(FT_Face face, bool bSymbolCharset, bool bEmbedd, const PdfEncoding* const = PdfEncodingFactory::GlobalWinAnsiEncodingInstance());
    /** Get a font with specific id from the cache. If the font does not yet
     *  exist, copy from existing type1-font and set id.
     *
     *  \param pFont an existing font
     *  \param pszSuffix Suffix to add to font-id 
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
     */
    PdfFont* GetDuplicateFontType1(PdfFont* pFont, const char* pszSuffix);
    /** Get a fontsubset from the cache. If the font does not yet
     *  exist, add it to the cache.
     *
     *  \param pszFontName a valid fontname
     *  \param bBold if true search for a bold font
     *  \param bItalic if true search for an italic font
    *  \param bSymbolCharset whether to use symbol charset, rather than unicode charset
     *  \param pEncoding the encoding of the font. All characters
     *                   of the encoding will be included in this subset.
     *                   The font will not take ownership of this object.     
     *  \param pszFileName optional path to a valid font file
     *
     *  \returns a PdfFont object or NULL if the font could
     *           not be created or found.
     */
    PdfFont* GetFontSubset(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, const PdfEncoding* const = PdfEncodingFactory::GlobalWinAnsiEncodingInstance(), const char* pszFileName = NULL);
    /** Embeds all pending subset-fonts
     *
     */
    void EmbedSubsetFonts();
    /** Get the path of a font file on a Unix system using fontconfig
     *
     *  This method is only available if PoDoFo was compiled with
     *  fontconfig support. Make sure to lock any FontConfig mutexes before
     *  calling this method by yourself!
     *
     *  \param pConfig a handle to an initialized fontconfig library
     *  \param pszFontName name of the requested font
     *  \param bBold if true find a bold font
     *  \param bItalic if true find an italic font
     *  \returns the path to the fontfile or an empty string
     */
#  if  defined(PODOFO_HAVE_FONTCONFIG)
    static std::string GetFontConfigFontPath(FcConfig* pConfig, const char* pszFontName, bool bBold, bool bItalic);
#  endif
    // Peter Petrov: 26 April 2008
    /** Returns the font library from font cache
     *
     *  \returns the internal handle to the freetype library
     */
    FT_Library GetFontLibrary() const;
    /**
     * Set wrapper for the fontconfig library.
     * Useful to avoid initializing Fontconfig multiple times.
     *
     * This setter can be called until first use of Fontconfig
     * as the library is initialized at first use.
     */
    void SetFontConfigWrapper(const PdfFontConfigWrapper& rFontConfig);
  protected:
    void Init();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfFontCache, PoDoFo::PdfFontCache);
  };
  // Peter Petrov: 26 April 2008
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
}

#include "__zz_cib_internal/podofo/doc/PdfFontCache-postdef.h"
#endif
