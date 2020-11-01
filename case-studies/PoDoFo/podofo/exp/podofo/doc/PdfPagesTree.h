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
#ifndef _PDF_PAGES_TREE_H_
#  define _PDF_PAGES_TREE_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfArray.h"
#  include "PdfElement.h"
#  include "PdfPagesTreeCache.h"

#include "__zz_cib_internal/podofo/doc/PdfPagesTree-predef.h"

namespace PoDoFo
{
  class PdfObject;
  class PdfPage;
  class PdfRect;
  enum EPdfPageInsertionPoint {
    ePdfPageInsertionPoint_InsertBeforeFirstPage	= -1,
    ePdfPageInsertionPoint_InsertLastPage		= -2,
    ePdfPageInsertionPoint_InsertAllPages		= -3,
    ePdfPageInsertionPoint_InsertOddPagesOnly	= -4,
    ePdfPageInsertionPoint_InsertEvenPagesOnly	= -5
};
  /** Class for managing the tree of Pages in a PDF document
   *  Don't use this class directly. Use PdfDocument instead.
   *  
   *  \see PdfDocument
   */
  class PdfPagesTree : public ::PoDoFo::PdfElement
  {
  public:
    PdfPagesTree(PdfPagesTree&& rhs);
  public:
    PdfPagesTree(const PdfPagesTree&);
    /** Construct a new PdfPagesTree
     */
    PdfPagesTree(PdfVecObjects* pParent);
    /** Construct a PdfPagesTree from the root /Pages object
     *  \param pPagesRoot pointer to page tree dictionary
     */
    PdfPagesTree(PdfObject* pPagesRoot);
    /** Close/down destruct a PdfPagesTree
     */
    virtual ~PdfPagesTree();
    /** Return the number of pages in the entire tree
     *  \returns number of pages
     */
    int GetTotalNumberOfPages() const;
    /** Return a PdfPage for the specified Page index
     *  The returned page is owned by the pages tree and
     *  deleted along with it.
     *
     *  \param nIndex page index, 0-based
     *  \returns a pointer to the requested page
     */
    PdfPage* GetPage(int nIndex);
    /** Return a PdfPage for the specified Page reference.
     *  The returned page is owned by the pages tree and
     *  deleted along with it.
     *
     *  \param ref the reference of the pages object
     *  \returns a pointer to the requested page
     */
    PdfPage* GetPage(const PdfReference& ref);
    /** Inserts an existing page object into the internal page tree. 
     *	after the specified page number
     *
     *  \param nAfterPageIndex an integer specifying after what page
     *         - may be one of the special values from EPdfPageInsertionPoint.
     *         Pages are 0 based.
     *         
     *  \param pPage musst be a PdfObject with type /Page
     */
    void InsertPage(int nAfterPageIndex, PdfObject* pPage);
    /** Inserts an existing page object into the internal page tree. 
     *	after the specified page number
     *
     *  \param nAfterPageIndex an integer specifying after what page
     *         - may be one of the special values  from EPdfPageInsertionPoint.
     *         Pages are 0 based.
     *  \param pPage a PdfPage to be inserted, the PdfPage will not get owned by the PdfPagesTree
     */
    void InsertPage(int nAfterPageIndex, PdfPage* pPage);
    /** Inserts a vector of page objects at once into the internal page tree
     *  after the specified page index (zero based index)
     *
     *  \param nAfterPageIndex a zero based integer index specifying after what page to insert
     *         - you need to pass ePdfPageInsertionPoint_InsertBeforeFirstPage if you want to insert before the first page.
     *         
     *  \param vecPages must be a vector of PdfObjects with type /Page
     */
    void InsertPages(int nAfterPageIndex, const std::vector<PdfObject*>& vecPages);
    /** Creates a new page object and inserts it into the internal
     *  page tree.
     *  The returned page is owned by the pages tree and will get deleted along
     *  with it!
     *
     *  \param rSize a PdfRect specifying the size of the page (i.e the /MediaBox key) in PDF units
     *  \returns a pointer to a PdfPage object
     */
    PdfPage* CreatePage(const PdfRect& rSize);
    /** Creates several new page objects and inserts them into the internal
     *  page tree.
     *  The new pages are owned by the pages tree and will get deleted along
     *  with it!
    *  Note: this function will attach all new pages onto the same page node
    *  which can cause the tree to be unbalanced if 
     *
     *  \param vecSizes a vector of PdfRect specifying the size of each of the pages to create (i.e the /MediaBox key) in PDF units
     */
    void CreatePages(const std::vector<PdfRect>& vecSizes);
    /** Creates a new page object and inserts it at index atIndex.
     *  The returned page is owned by the pages tree and will get deleted along
     *  with it!
     *
     *  \param rSize a PdfRect specifying the size of the page (i.e the /MediaBox key) in PDF units
     *  \param atIndex index where to insert the new page (0-based)
     *  \returns a pointer to a PdfPage object
     */
    PdfPage* InsertPage(const PdfRect& rSize, int atIndex);
    /**  Delete the specified page object from the internal pages tree.
     *   It does NOT remove any PdfObjects from memory - just the reference from the tree
     *
     *   \param inPageNumber the page number (0-based) to be removed
     *
     *   The PdfPage object refering to this page will be deleted by this call!
     *   Empty page nodes will also be deleted.
     *
     *   \see PdfMemDocument::DeletePages
     */
    void DeletePage(int inPageNumber);
    /**
     * Clear internal cache of PdfPage objects.
     * All references to PdfPage object will become invalid
     * when calling this method. All PdfPages will be deleted.
     *
     * You normally will never have to call this method.
     * It is only useful if one modified the page nodes 
     * of the pagestree manually.
     *
     */
    void ClearCache();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfPagesTree, PoDoFo::PdfPagesTree);
  };
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
}

#include "__zz_cib_internal/podofo/doc/PdfPagesTree-postdef.h"
#endif
