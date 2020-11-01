/***************************************************************************
 *   Copyright (C) 2008 by Dominik Seichter                                *
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
#ifndef _PDF_FONT_TTF_SUBSET_H_
#  define _PDF_FONT_TTF_SUBSET_H_
#  include "podofo/base/PdfDefines.h"
#  include "PdfFontMetrics.h"
#  include <string>
#  include <vector>

#include "__zz_cib_internal/podofo/doc/PdfFontTTFSubset-predef.h"

namespace PoDoFo
{
  class PdfInputDevice;
  class PdfOutputDevice;
  // This code is based heavily on code by ZhangYang 
  // (张杨.国际) <zhang_yang@founder.com>
  //
  // (Do not put this into doxygen documentation blocks
  //  as this will break latex documentation generation)
  
  /**
   * This class is able to build a new TTF font with only
   * certain glyphs from an existing font.
   *
   */
  class PdfFontTTFSubset
  {
  public:
    PdfFontTTFSubset(PdfFontTTFSubset&& rhs);
  public:
    /**
     * Internal enum specifying the type of a fontfile.
     */
    enum EFontFileType {
        eFontFileType_TTF,    ///< TrueType Font
        eFontFileType_TTC,    ///< TrueType Collection
        eFontFileType_OTF,    ///< OpenType Font
        eFontFileType_Unknown ///< Unknown
    };
    /** Create a new PdfFontTTFSubset from an existing 
     *  TTF font file.
     *
     *  @param pszFontFileName path to a TTF file
     *  @param pMetrics font metrics object for this font
     *  @param nFaceIndex index of the face inside of the font
     */
    PdfFontTTFSubset(const char* pszFontFileName, PdfFontMetrics* pMetrics, unsigned short nFaceIndex = 0);
    /** Create a new PdfFontTTFSubset from an existing 
     *  TTF font file using an input device.
     *
     *  @param pDevice a PdfInputDevice
     *  @param pMetrics font metrics object for this font
     *  @param eType the type of the font
     *  @param nFaceIndex index of the face inside of the font
     */
    PdfFontTTFSubset(PdfInputDevice* pDevice, PdfFontMetrics* pMetrics, EFontFileType eType, unsigned short nFaceIndex = 0);
    ~PdfFontTTFSubset();
    /**
     * Actually generate the subsetted font
     *
     * @param pOutputDevice write the font to this device
     */
    void BuildFont(PdfRefCountedBuffer& outputBuffer, const std::set<pdf_utf16be>& usedChars, std::vector<unsigned char>& cidSet);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfFontTTFSubset, PoDoFo::PdfFontTTFSubset);
  };
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
}

#include "__zz_cib_internal/podofo/doc/PdfFontTTFSubset-postdef.h"
#endif
