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
#ifndef _PDF_SHADING_PATTERN_H_
#  define _PDF_SHADING_PATTERN_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfName.h"
#  include "PdfElement.h"

#include "__zz_cib_internal/podofo/doc/PdfShadingPattern-predef.h"

namespace PoDoFo
{
  class PdfColor;
  class PdfObject;
  class PdfPage;
  class PdfWriter;
  enum EPdfShadingPatternType {
    ePdfShadingPatternType_FunctionBase  = 1,    
    ePdfShadingPatternType_Axial         = 2,
    ePdfShadingPatternType_Radial        = 3,
    ePdfShadingPatternType_FreeForm      = 4,
    ePdfShadingPatternType_LatticeForm   = 5,
    ePdfShadingPatternType_CoonsPatch    = 6,
    ePdfShadingPatternType_TensorProduct = 7
  };
  /** 
   * This class defined a shading pattern which can be used
   * to fill abitrary shapes with a pattern using PdfPainter.
   */
  class PdfShadingPattern : public ::PoDoFo::PdfElement
  {
  public:
    PdfShadingPattern(PdfShadingPattern&& rhs);
  public:
    PdfShadingPattern(const PdfShadingPattern&);
    virtual ~PdfShadingPattern();
    /** Returns the identifier of this ShadingPattern how it is known
     *  in the pages resource dictionary.
     *  \returns PdfName containing the identifier (e.g. /Sh13)
     */
    const PdfName& GetIdentifier() const;
  protected:
    /** Create a new PdfShadingPattern object which will introduce itself
     *  automatically to every page object it is used on.
     *
     *  \param pParent parent vector of objects
     *  \param eShadingType the type of this shading pattern
     *  
     */
    PdfShadingPattern(EPdfShadingPatternType eShadingType, PdfVecObjects* pParent);
    /** Create a new PdfShadingPattern object which will introduce itself
     *  automatically to every page object it is used on.
     *
     *  \param pParent parent document 
     *  \param eShadingType the type of this shading pattern
     *  
     */
    PdfShadingPattern(EPdfShadingPatternType eShadingType, PdfDocument* pParent);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfShadingPattern, PoDoFo::PdfShadingPattern);
  };
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  /** A shading pattern that is a simple axial
   *  shading between two colors.
   */
  class PdfAxialShadingPattern : public ::PoDoFo::PdfShadingPattern
  {
  public:
    PdfAxialShadingPattern(PdfAxialShadingPattern&& rhs);
  public:
    PdfAxialShadingPattern(const PdfAxialShadingPattern&);
    ~PdfAxialShadingPattern();
    /** Create an axial shading pattern
     *
     *  \param dX0 the starting x coordinate
     *  \param dY0 the starting y coordinate
     *  \param dX1 the ending x coordinate
     *  \param dY1 the ending y coordinate
     *  \param rStart the starting color
     *  \param rEnd the ending color
     *  \param pParent the parent
     */
    PdfAxialShadingPattern(double dX0, double dY0, double dX1, double dY1, const PdfColor& rStart, const PdfColor& rEnd, PdfVecObjects* pParent);
    /** Create an axial shading pattern
     *
     *  \param dX0 the starting x coordinate
     *  \param dY0 the starting y coordinate
     *  \param dX1 the ending x coordinate
     *  \param dY1 the ending y coordinate
     *  \param rStart the starting color
     *  \param rEnd the ending color
     *  \param pParent the parent
     */
    PdfAxialShadingPattern(double dX0, double dY0, double dX1, double dY1, const PdfColor& rStart, const PdfColor& rEnd, PdfDocument* pParent);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfAxialShadingPattern, PoDoFo::PdfAxialShadingPattern);
  };
  /** A shading pattern that is an 2D
   *  shading between four colors.
   */
  class PdfFunctionBaseShadingPattern : public ::PoDoFo::PdfShadingPattern
  {
  public:
    PdfFunctionBaseShadingPattern(PdfFunctionBaseShadingPattern&& rhs);
  public:
    PdfFunctionBaseShadingPattern(const PdfFunctionBaseShadingPattern&);
    ~PdfFunctionBaseShadingPattern();
    /** Create an 2D shading pattern
     *
     *  \param rLL the color on lower left corner
     *  \param rUL the color on upper left corner
     *  \param rLR the color on lower right corner
     *  \param rUR the color on upper right corner
     *  \param rMatrix the transformation matrix mapping the coordinate space 
     *         specified by the Domain entry into the shadings target coordinate space
     *  \param pParent the parent
     */
    PdfFunctionBaseShadingPattern(const PdfColor& rLL, const PdfColor& rUL, const PdfColor& rLR, const PdfColor& rUR, const PdfArray& rMatrix, PdfVecObjects* pParent);
    /** Create an 2D shading pattern
     *
     *  \param rLL the color on lower left corner
     *  \param rUL the color on upper left corner
     *  \param rLR the color on lower right corner
     *  \param rUR the color on upper right corner
     *  \param rMatrix the transformation matrix mapping the coordinate space 
     *         specified by the Domain entry into the shading's target coordinate space
     *  \param pParent the parent
     */
    PdfFunctionBaseShadingPattern(const PdfColor& rLL, const PdfColor& rUL, const PdfColor& rLR, const PdfColor& rUR, const PdfArray& rMatrix, PdfDocument* pParent);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfFunctionBaseShadingPattern, PoDoFo::PdfFunctionBaseShadingPattern);
  };
  /** A shading pattern that is a simple radial
   *  shading between two colors.
   */
  class PdfRadialShadingPattern : public ::PoDoFo::PdfShadingPattern
  {
  public:
    PdfRadialShadingPattern(PdfRadialShadingPattern&& rhs);
  public:
    PdfRadialShadingPattern(const PdfRadialShadingPattern&);
    ~PdfRadialShadingPattern();
    /** Create an radial shading pattern
     *
     *  \param dX0 the inner circles x coordinate
     *  \param dY0 the inner circles y coordinate
     *  \param dR0 the inner circles radius
     *  \param dX1 the outer circles x coordinate
     *  \param dY1 the outer circles y coordinate
     *  \param dR1 the outer circles radius
     *  \param rStart the starting color
     *  \param rEnd the ending color
     *  \param pParent the parent
     */
    PdfRadialShadingPattern(double dX0, double dY0, double dR0, double dX1, double dY1, double dR1, const PdfColor& rStart, const PdfColor& rEnd, PdfVecObjects* pParent);
    /** Create an radial shading pattern
     *
     *  \param dX0 the inner circles x coordinate
     *  \param dY0 the inner circles y coordinate
     *  \param dR0 the inner circles radius
     *  \param dX1 the outer circles x coordinate
     *  \param dY1 the outer circles y coordinate
     *  \param dR1 the outer circles radius
     *  \param rStart the starting color
     *  \param rEnd the ending color
     *  \param pParent the parent
     */
    PdfRadialShadingPattern(double dX0, double dY0, double dR0, double dX1, double dY1, double dR1, const PdfColor& rStart, const PdfColor& rEnd, PdfDocument* pParent);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfRadialShadingPattern, PoDoFo::PdfRadialShadingPattern);
  };
  /** A shading pattern that is a simple triangle
   *  shading between three colors. It's a single-triangle
   *  simplified variation of a FreeForm shadding pattern.
   */
  class PdfTriangleShadingPattern : public ::PoDoFo::PdfShadingPattern
  {
  public:
    PdfTriangleShadingPattern(PdfTriangleShadingPattern&& rhs);
  public:
    PdfTriangleShadingPattern(const PdfTriangleShadingPattern&);
    ~PdfTriangleShadingPattern();
    /** Create a triangle shading pattern
     *
     *  \param dX0 triangle x coordinate of point 0
     *  \param dY0 triangle y coordinate of point 0
    *  \param color0 color of point 0
     *  \param dX1 triangle x coordinate of point 1
     *  \param dY1 triangle y coordinate of point 1
    *  \param color1 color of point 1
     *  \param dX2 triangle x coordinate of point 2
     *  \param dY2 triangle y coordinate of point 2
    *  \param color2 color of point 2
     *  \param pParent the parent
     */
    PdfTriangleShadingPattern(double dX0, double dY0, const PdfColor& color0, double dX1, double dY1, const PdfColor& color1, double dX2, double dY2, const PdfColor& color2, PdfVecObjects* pParent);
    /** Create a triangle shading pattern
     *
     *  \param dX0 triangle x coordinate of point 0
     *  \param dY0 triangle y coordinate of point 0
    *  \param color0 color of point 0
     *  \param dX1 triangle x coordinate of point 1
     *  \param dY1 triangle y coordinate of point 1
    *  \param color1 color of point 1
     *  \param dX2 triangle x coordinate of point 2
     *  \param dY2 triangle y coordinate of point 2
    *  \param color2 color of point 2
     *  \param pParent the parent
     */
    PdfTriangleShadingPattern(double dX0, double dY0, const PdfColor& color0, double dX1, double dY1, const PdfColor& color1, double dX2, double dY2, const PdfColor& color2, PdfDocument* pParent);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfTriangleShadingPattern, PoDoFo::PdfTriangleShadingPattern);
  };
}

#include "__zz_cib_internal/podofo/doc/PdfShadingPattern-postdef.h"
#endif
