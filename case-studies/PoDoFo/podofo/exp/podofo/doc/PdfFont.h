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
#ifndef _PDF_FONT_H_
#  define _PDF_FONT_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfName.h"
#  include "podofo/base/PdfEncodingFactory.h"
#  include "PdfElement.h"
#  include "PdfFontMetrics.h"

#include "__zz_cib_internal/podofo/doc/PdfFont-predef.h"

namespace PoDoFo
{
  class PdfObject;
  class PdfPage;
  class PdfWriter;
  /** Before you can draw text on a PDF document, you have to create
   *  a font object first. You can reuse this font object as often
   *  as you want.
   *
   *  Use PdfDocument::CreateFont to create a new font object.
   *  It will choose a correct subclass using PdfFontFactory.
   *
   *  This is only an abstract base class which is implemented
   *  for different font formats.
   */
  class PdfFont : public ::PoDoFo::PdfElement
  {
  public:
    PdfFont(PdfFont&& rhs);
  public:
    /** Create a new PdfFont object which will introduce itself
     *  automatically to every page object it is used on.
     *
     *  The font has a default font size of 12.0pt.
     *
     *  \param pMetrics pointer to a font metrics object. The font in the PDF
     *         file will match this fontmetrics object. The metrics object is
     *         deleted along with the font.
     *  \param pEncoding the encoding of this font. The font will take ownership of this object
     *                   depending on pEncoding->IsAutoDelete()
     *  \param pParent parent of the font object
     *
     */
    PdfFont(PdfFontMetrics* pMetrics, const PdfEncoding* const pEncoding, PdfVecObjects* pParent);
    /** Create a PdfFont based on an existing PdfObject
     *  \param pMetrics pointer to a font metrics object. The font in the PDF
     *         file will match this fontmetrics object. The metrics object is
     *         deleted along with the font.
     *  \param pEncoding the encoding of this font. The font will take ownership of this object
     *                   depending on pEncoding->IsAutoDelete()
     *  \param pObject an existing PdfObject
     */
    PdfFont(PdfFontMetrics* pMetrics, const PdfEncoding* const pEncoding, PdfObject* pObject);
    virtual ~PdfFont();
    /** Set the font size before drawing with this font.
     *  \param fSize font size in points
     */
    void SetFontSize(float fSize);
    /** Retrieve the current font size of this font object
     *  \returns the current font size
     */
    float GetFontSize() const;
    /** Set the horizontal scaling of the font for compressing (< 100) and expanding (>100)
     *  \param fScale scaling in percent
     */
    void SetFontScale(float fScale);
    /** Retrieve the current horizontal scaling of this font object
     *  \returns the current font scaling
     */
    float GetFontScale() const;
    /** Set the character spacing of the font
     *  \param fCharSpace character spacing in percent
     */
    void SetFontCharSpace(float fCharSpace);
    /** Retrieve the current character spacing of this font object
     *  \returns the current font character spacing
     */
    float GetFontCharSpace() const;
    /** Set the word spacing of the font
     *  \param fWordSpace word spacing in PDF units
     */
    void SetWordSpace(float fWordSpace);
    /** Retrieve the current word spacing of this font object
     *  \returns the current font word spacing in PDF units
     */
    float GetWordSpace() const;
    /** Set the underlined property of the font
     *  \param bUnder if true any text drawn with this font
     *                by a PdfPainter will be underlined.
     *  Default is false
     */
    void SetUnderlined(bool bUnder);
    /** \returns true if the font is underlined
     *  \see IsBold
     *  \see IsItalic
     */
    bool IsUnderlined() const;
    /** \returns true if this font is bold
     *  \see IsItalic
     *  \see IsUnderlined
     */
    bool IsBold() const;
    /** \returns true if this font is italic
     *  \see IsBold
     *  \see IsUnderlined
     */
    bool IsItalic() const;
    /** Set the strikeout property of the font
     *  \param bStrikeOut if true any text drawn with this font
     *                    by a PdfPainter will be strikedout.
     *  Default is false
     */
    void SetStrikeOut(bool bStrikeOut);
    /** \returns true if the font is striked out
     */
    bool IsStrikeOut() const;
    /** Returns the identifier of this font how it is known
     *  in the pages resource dictionary.
     *  \returns PdfName containing the identifier (e.g. /Ft13)
     */
    const PdfName& GetIdentifier() const;
    /** Returns a reference to the fonts encoding
     *  \returns a PdfEncoding object.
     */
    const PdfEncoding* GetEncoding() const;
    /** Returns a handle to the fontmetrics object of this font.
     *  This can be used for size calculations of text strings when
     *  drawn using this font.
     *  \returns a handle to the font metrics object
     */
    const PdfFontMetrics* GetFontMetrics() const;
    // Peter Petrov 19 March 2009
    /** Returns a handle to the fontmetrics object of this font.
     *  This can be used for size calculations of text strings when
     *  drawn using this font.
     *  \returns a handle to the font metrics object
     */
    PdfFontMetrics* GetFontMetrics2();
    /** Write a PdfString to a PdfStream in a format so that it can
     *  be used with this font.
     *  This is used by PdfPainter::DrawText to display a text string.
     *  The following PDF operator will be Tj
     *
     *  \param rsString a unicode or ansi string which will be displayed
     *  \param pStream the string will be appended to pStream without any leading
     *                 or following whitespaces.
     */
    virtual void WriteStringToStream(const PdfString& rsString, PdfStream* pStream);
    // Peter Petrov 24 September 2008
    /** Embeds the font into PDF page
     *
     */
    virtual void EmbedFont();
    /** Remember the glyphs used in the string in case of subsetting
     *
     *  \param sText the text string which should be printed (is not allowed to be NULL!)
     *  \param lStringLen draw only lLen characters of pszText
     *
     *  Only call if IsSubsetting() returns true. Might throw an exception otherwise.
     *
     *  \see IsSubsetting
     */
    virtual void AddUsedSubsettingGlyphs(const PdfString& sText, long lStringLen);
    /** Remember the glyphname in case of subsetting
     *
     *  \param pszGlyphName Name of the glyph to remember
     */
    virtual void AddUsedGlyphname(const char* pszGlyphName);
    /** Embeds pending subset-font into PDF page
     *  Only call if IsSubsetting() returns true. Might throw an exception otherwise.
     *
     *  \see IsSubsetting
     */
    virtual void EmbedSubsetFont();
    /** Check if this is a subsetting font.
     * \returns true if this is a subsetting font
     */
    bool IsSubsetting() const;
  protected:
    /** Get the base font name of this font
     *
     *  \returns the base font name
     */
    const PdfName& GetBaseFont() const;
    // void InitBase14Font();
    /** Used to specify if this represents a bold font
     *  \param bBold if true this is a bold font.
     *
     *  \see IsBold
     *
     *  This can be called by PdfFontFactory to tell this font
     *  object that it belongs to a bold font.
     */
    virtual void SetBold(bool bBold);
    /** Used to specify if this represents an italic font
     *  \param bItalic if true this is an italic font.
     *
     *  \see IsItalc
     *
     *  This can be called by PdfFontFactory to tell this font
     *  object that it belongs to an italic font.
     */
    virtual void SetItalic(bool bItalic);

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfFont, PoDoFo::PdfFont);
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

#include "__zz_cib_internal/podofo/doc/PdfFont-postdef.h"
#endif
