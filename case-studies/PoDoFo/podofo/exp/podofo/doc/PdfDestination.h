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
#ifndef _PDF_DESTINATION_H_
#  define _PDF_DESTINATION_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfArray.h"
#  include "podofo/base/PdfRect.h"
#  include "podofo/base/PdfReference.h"

#include "__zz_cib_internal/podofo/doc/PdfDestination-predef.h"

namespace PoDoFo
{
  class PdfAction;
  class PdfPage;
  class PdfRect;
  enum EPdfDestinationFit {
    ePdfDestinationFit_Fit,
    ePdfDestinationFit_FitH,
    ePdfDestinationFit_FitV,
    ePdfDestinationFit_FitB,
    ePdfDestinationFit_FitBH,
    ePdfDestinationFit_FitBV,

    ePdfDestinationFit_Unknown = 0xFF
};
  /** Destination type, as per 12.3.2.2 of the Pdf spec.
   *
   *  (see table 151 in the pdf spec)
   */
  enum EPdfDestinationType {
  ePdfDestinationType_XYZ,
  ePdfDestinationType_Fit,
  ePdfDestinationType_FitH,
  ePdfDestinationType_FitV,
  ePdfDestinationType_FitR,
  ePdfDestinationType_FitB,
  ePdfDestinationType_FitBH,
  ePdfDestinationType_FitBV,
  
  ePdfDestinationType_Unknown = 0xFF
};
  /** A destination in a PDF file.
   *  A destination can either be a page or an action.
   *
   *  \see PdfOutlineItem \see PdfAnnotation \see PdfDocument
   */
  class PdfDestination
  {
  public:
    PdfDestination(PdfDestination&& rhs);
  public:
    ~PdfDestination();
    /** Create an empty destination - points to nowhere
     */
    PdfDestination(PdfVecObjects* pParent);
    /** Create a new PdfDestination from an existing PdfObject (such as loaded from a doc)
     *  \param pObject the object to construct from 
     *  \param pDocument a PDF document owning this destination, needed to resolve pages
     */
    PdfDestination(PdfObject* pObject, PdfDocument* pDocument);
    /** Create a new PdfDestination from an existing PdfObject (such as loaded from a doc)
     *  \param pObject the object to construct from 
     *  \param pVecObjects a PdfVecObjects owning this destination, needed to resolve pages
     */
    PdfDestination(PdfObject* pObject, PdfVecObjects* pVecObjects);
    /** Create a new PdfDestination with a page as destination
     *  \param pPage a page which is the destination 
     *  \param eFit fit mode for the page. Must be ePdfDestinationFit_Fit or ePdfDestinationFit_FitB
     */
    PdfDestination(const PdfPage* pPage, EPdfDestinationFit eFit = ePdfDestinationFit_Fit);
    /** Create a destination to a page with its contents magnified to fit into the given rectangle
     *  \param pPage a page which is the destination 
     *  \param rRect magnify the page so that the contents of the rectangle are visible
     */
    PdfDestination(const PdfPage* pPage, const PdfRect& rRect);
    /** Create a new destination to a page with specified left 
     *  and top coordinates and a zoom factor.
     *  \param pPage a page which is the destination 
     *  \param dLeft left coordinate
     *  \param dTop  top coordinate
     *  \param dZoom zoom factor in the viewer
     */
    PdfDestination(const PdfPage* pPage, double dLeft, double dTop, double dZoom);
    /** Create a new destination to a page.
     *  \param pPage a page which is the destination 
     *  \param eFit fit mode for the Page. Allowed values are ePdfDestinationFit_FitH,
     *              ePdfDestinationFit_FitV, ePdfDestinationFit_FitBH, ePdfDestinationFit_FitBV
     *  \param dValue value which is a required argument for the selected fit mode
     */
    PdfDestination(const PdfPage* pPage, EPdfDestinationFit eFit, double dValue);
    /** Copy an existing PdfDestination
     *  \param rhs copy this PdfDestination
     */
    PdfDestination(const PdfDestination& rhs);
    /** Copy an existing PdfDestination
     *  \param rhs copy this PdfDestination
     *  \returns this object
     */
    const PdfDestination& operator=(const PdfDestination& rhs);
    /** Get the page that this destination points to
     *  Requires that this PdfDestination was somehow
     *  created by or from a PdfDocument. Won't work otherwise.
     *  \param pDoc a PDF document owning this destination, needed to resolve pages
     * 
     *  \returns the referenced PdfPage
     */
    PdfPage* GetPage(PdfDocument* pDoc);
    /** Get the page that this destination points to
     *  Requires that this PdfDestination was somehow
     *  created by or from a PdfDocument. Won't work otherwise.
     *  \param pVecObjects a PdfVecObjects owning this destination, needed to resolve pages
     * 
     *  \returns the referenced PdfPage
     */
    PdfPage* GetPage(PdfVecObjects* pVecObjects);
    /** Get the destination fit type
     *
     *  \returns the fit type
     */
    EPdfDestinationType GetType() const;
    /** Get the destination zoom 
     *  Destination must be of type XYZ
     *  otherwise exception is thrown.
     *
     *  \returns the zoom
     */
    double GetZoom() const;
    /** Get the destination rect 
     *  Destination must be of type FirR
     *  otherwise exception is thrown
     *
     *  \returns the destination rect
     */
    PdfRect GetRect() const;
    /** Get the destination Top position
     *  Destination must be of type XYZ, FitH, FitR, FitBH
     *  otherwise exception is thrown.
     * 
     * \returns the Top position
     */
    double GetTop() const;
    /** Get the destination Left position 
     *  Destination must be of type XYZ, FitV or FitR
     *  otherwise exception is thrown.
     * 
     * \returns the Left position
     */
    double GetLeft() const;
    /** Get the destination Value 
     *  Destination must be of type FitH, FitV
     *  or FitBH, otherwise exception is thrown 
     * 
     *  \returns the destination Value
     */
    double GetDValue() const;
    /** Get access to the internal object
     *
     *  \returns the internal PdfObject
     */
    PdfObject* GetObject();
    /** Get access to the internal object
     *  This is an overloaded member function.
     *
     *  \returns the internal PdfObject
     */
    const PdfObject* GetObject() const;
    /** Get access to the internal array
     *  \returns the internal PdfArray
     */
    PdfArray& GetArray();
    /** Get access to the internal array
     *  This is an overloaded member function.
     *
     *  \returns the internal PdfArray
     */
    const PdfArray& GetArray() const;
    /** Adds this destination to an dictionary.
     *  This method handles the all the complexities of making sure it's added correctly
     *
     *  If this destination is empty. Nothing will be added.
     *
     *  \param dictionary the destination will be added to this dictionary
     */
    void AddToDictionary(PdfDictionary& dictionary) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfDestination, PoDoFo::PdfDestination);
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
}

#include "__zz_cib_internal/podofo/doc/PdfDestination-postdef.h"
#endif
