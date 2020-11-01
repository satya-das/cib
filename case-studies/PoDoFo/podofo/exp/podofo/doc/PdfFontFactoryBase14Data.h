/***************************************************************************
 *   Copyright (C) 2010 by Dominik Seichter                                *
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
#ifndef _PDF_FONT_FACTORY_BASE14_DATA_H_
#  define _PDF_FONT_FACTORY_BASE14_DATA_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfRect.h"
#  include "PdfFontMetricsBase14.h"

#include "__zz_cib_internal/podofo/doc/PdfFontFactoryBase14Data-predef.h"

/*
 * The following are the Base 14 fonts data copied from libharu.
 * - kaushik April 12 2010
 */
namespace PoDoFo
{
  struct PODOFO_CharData
  {
    pdf_int16 char_cd;
    pdf_uint16 unicode;
    pdf_int16 width;
  };
#  define PODOFO_HPDF_FONT_COURIER	"Courier"
#  define PODOFO_HPDF_FONT_COURIER_BOLD	"Courier-Bold"
#  define PODOFO_HPDF_FONT_COURIER_OBLIQUE	"Courier-Oblique"
#  define PODOFO_HPDF_FONT_COURIER_BOLD_OBLIQUE	"Courier-BoldOblique"
#  define PODOFO_HPDF_FONT_HELVETICA	"Helvetica"
#  define PODOFO_HPDF_FONT_HELVETICA_BOLD	"Helvetica-Bold"
#  define PODOFO_HPDF_FONT_HELVETICA_OBLIQUE	"Helvetica-Oblique"
#  define PODOFO_HPDF_FONT_HELVETICA_BOLD_OBLIQUE	"Helvetica-BoldOblique"
#  define PODOFO_HPDF_FONT_TIMES_ROMAN	"Times-Roman"
#  define PODOFO_HPDF_FONT_TIMES_BOLD	"Times-Bold"
#  define PODOFO_HPDF_FONT_TIMES_ITALIC	"Times-Italic"
#  define PODOFO_HPDF_FONT_TIMES_BOLD_ITALIC	"Times-BoldItalic"
#  define PODOFO_HPDF_FONT_SYMBOL	"Symbol"
#  define PODOFO_HPDF_FONT_ZAPF_DINGBATS	"ZapfDingbats"
  /*
  static const PdfFontMetricsBase14Rec  PODOFO_BUILTIN_FONTS[] = {
      {
          PODOFO_HPDF_FONT_COURIER,
          CHAR_DATA_COURIER,
          PODOFO_FALSE,
          629,
          -157,
          426,
          562,
          {-23, -250, 715, 805}
      },
      {
          PODOFO_HPDF_FONT_COURIER_BOLD,
          CHAR_DATA_COURIER_BOLD,
          PODOFO_FALSE,
          629,
          -157,
          439,
          562,
          {-113, -250, 749, 801}
      },
      {
          PODOFO_HPDF_FONT_COURIER_OBLIQUE,
          CHAR_DATA_COURIER_OBLIQUE,
          PODOFO_FALSE,
          629,
          -157,
          426,
          562,
          {-27, -250, 849, 805}
      },
      {
          PODOFO_HPDF_FONT_COURIER_BOLD_OBLIQUE,
          CHAR_DATA_COURIER_BOLD_OBLIQUE,
          PODOFO_FALSE,
          629,
          -157,
          439,
          562,
          {-57, -250, 869, 801}
      },
      {
          PODOFO_HPDF_FONT_HELVETICA,
          CHAR_DATA_HELVETICA,
          PODOFO_FALSE,
          718,
          -207,
          523,
          718,
          {-166, -225, 1000, 931}
      },
      {
          PODOFO_HPDF_FONT_HELVETICA_BOLD,
          CHAR_DATA_HELVETICA_BOLD,
          PODOFO_FALSE,
          718,
          -207,
          532,
          718,
          {-170, -228, 1003, 962}
      },
      {
          PODOFO_HPDF_FONT_HELVETICA_OBLIQUE,
          CHAR_DATA_HELVETICA_OBLIQUE,
          PODOFO_FALSE,
          718,
          -207,
          532,
          718,
          {-170, -225, 1116, 931}
      },
      {
          PODOFO_HPDF_FONT_HELVETICA_BOLD_OBLIQUE,
          CHAR_DATA_HELVETICA_BOLD_OBLIQUE,
          PODOFO_FALSE,
          718,
          -207,
          532,
          718,
          {-174, -228, 1114, 962}
      },
      {
          PODOFO_HPDF_FONT_TIMES_ROMAN,
          CHAR_DATA_TIMES_ROMAN,
          PODOFO_FALSE,
          683,
          -217,
          450,
          662,
          {-168, -218, 1000, 898}
      },
      {
          PODOFO_HPDF_FONT_TIMES_BOLD,
          CHAR_DATA_TIMES_BOLD,
          PODOFO_FALSE,
          683,
          -217,
          461,
          676,
          {-168, -218, 1000, 935}
      },
      {
          PODOFO_HPDF_FONT_TIMES_ITALIC,
          CHAR_DATA_TIMES_ITALIC,
          PODOFO_FALSE,
          683,
          -217,
          441,
          653,
          {-169, -217, 1010, 883}
      },
      {
          PODOFO_HPDF_FONT_TIMES_BOLD_ITALIC,
          CHAR_DATA_TIMES_BOLD_ITALIC,
          PODOFO_FALSE,
          683,
          -217,
          462,
          669,
          {-200, -218, 996, 921}
      },
      {
          PODOFO_HPDF_FONT_SYMBOL,
          CHAR_DATA_SYMBOL,
          PODOFO_TRUE,
          0,
          0,
          0,
          0,
          {-180, -293, 1090, 1010}
      },
      {
          PODOFO_HPDF_FONT_ZAPF_DINGBATS,
          CHAR_DATA_ZAPF_DINGBATS,
          PODOFO_TRUE,
          0,
          0,
          0,
          0,
          {-1, -143, 981, 820}
      },
      {
          NULL,
          NULL,
          PODOFO_FALSE,
          0,
          0,
          0,
          0,
          {0, 0, 0, 0}
      },
  };	 
  */
}

#include "__zz_cib_internal/podofo/doc/PdfFontFactoryBase14Data-postdef.h"
#endif
