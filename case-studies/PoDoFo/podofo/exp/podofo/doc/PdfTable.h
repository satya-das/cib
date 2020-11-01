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
#ifndef _PDF_TABLE_H_
#  define _PDF_TABLE_H_
#  include "podofo/base/PdfDefines.h"
#  include "podofo/base/PdfColor.h"
#  include "podofo/base/PdfRect.h"
#  include "podofo/base/PdfString.h"
#  include <string.h>

#include "__zz_cib_internal/podofo/doc/PdfTable-predef.h"

namespace PoDoFo
{
  class PdfCanvas;
  class PdfFont;
  class PdfImage;
  class PdfPainter;
  class PdfPage;
  /**
   * This is an abstract interface of a model that can provide
   * data and formatting informations to a PdfTable.
   *
   * You can implement your own PdfTableModel to supply data
   * to a PdfTable.
   * PdfSimpleTableModel is an example of a simple model.
   * 
   *
   * \see PdfTable
   * \see PdfSimpleTableModel
   */
  class PdfTableModel
  {
  public:
    PdfTableModel(PdfTableModel&& rhs);
  public:
    virtual ~PdfTableModel();
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the contents string of this table cell
     */
    virtual PdfString GetText(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the horizontal alignment of the contents in the cell
     */
    virtual EPdfAlignment GetAlignment(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the vertical alignment of the contents in the cell
     */
    virtual EPdfVerticalAlignment GetVerticalAlignment(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the font of this table cell or NULL to use the default font
     */
    virtual PdfFont* GetFont(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if this cell has a background color
     */
    virtual bool HasBackgroundColor(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the background color of the specified cell
     */
    virtual PdfColor GetBackgroundColor(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the foreground (text) color of the specified cell
     */
    virtual PdfColor GetForegroundColor(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if the specified cell should use wordwrapping
     */
    virtual bool HasWordWrap(int col, int row) const = 0;
    /** 
     * \returns true if the table should have
     *          a border around all cells.
     * \returns false if no cell border should be visible
     *
     * Cell borders are always drawn using the current PdfPainter
     * settings.
     */
    virtual bool HasBorders() const = 0;
    /** 
     * \returns the stroke witdth of the border line
     */
    virtual double GetBorderWidth() const = 0;
    /**
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the border color 
     */
    virtual PdfColor GetBorderColor(int col, int row) const = 0;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if the table cell contains an image
     */
    virtual bool HasImage(int col, int row) const = 0;
    /**
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the image for the specified cell or NULL if the cell has no image
     */
    virtual PdfImage* GetImage(int col, int row) const = 0;
  protected:
    PdfTableModel();

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfTableModel, PoDoFo::PdfTableModel);
  };
  /**
   * An implementation of a simple PdfTableModel.
   *
   */
  class PdfSimpleTableModel : public ::PoDoFo::PdfTableModel
  {
  public:
    PdfSimpleTableModel(PdfSimpleTableModel&& rhs);
  public:
    PdfSimpleTableModel(const PdfSimpleTableModel&);
    /** Creates an empty PdfSimpleTableModel 
     *  that does not contain any data.
     *
     *  Using this model will result in drawing an empty table!
     */
    PdfSimpleTableModel();
    /** Creates an empty PdfSimpleTableModel 
     *  that does not contain any data.
     *
     *  Using this model will result in drawing an empty table!
     *
     *  \param nCols number of columns of the data in this table model (must match the PdfTable object)
     *  \param nRows number of rows of the data in this table model (must match the PdfTable object)
     *
     *  You can set the tables data using SetText.
     *  \see SetText
     */
    PdfSimpleTableModel(int nCols, int nRows);
    virtual ~PdfSimpleTableModel();
    /** Set the font that will be used to draw all table contents.
     *
     *  \param pFont the font for the table contents
     */
    void SetFont(PdfFont* pFont);
    /** Set the horizontal alignment of the contents in all table cells
     *
     *  \param eAlignment the horizontal alignment of text in a table cell
     */
    void SetAlignment(EPdfAlignment eAlignment);
    /** Set the vertical alignment of the contents in all table cells
     *
     *  \param eAlignment the vertiical alignment of text in a table cell
     */
    void SetAlignment(EPdfVerticalAlignment eAlignment);
    /** Set the background color of the table cells
     *
     *  \param rColor the background color
     */
    void SetBackgroundColor(const PdfColor& rColor);
    /** Set the foreground color of the table cells
     *
     *  \param rColor the foreground color
     */
    void SetForegroundColor(const PdfColor& rColor);
    /** Sets wether all cells have a background color or not
     *
     *  \param bEnable if true all cells have a background color
     */
    void SetBackgroundEnabled(bool bEnable);
    /** Sets wether all cells have wordwrapping or not
     *
     *  \param bEnable if true all cells have wordwrapping
     */
    void SetWordWrapEnabled(bool bEnable);
    /** Sets wether all cells have a border or not.
     *  
     *  \param bEnable if true a border will be drawn
     *                 using the current PdfPainter settings
     */
    void SetBorderEnabled(bool bEnable);
    /** Sets the stroke width of the border around
     *  the table.
     *
     *  \param dWidth the stroke width of the border
     */
    void SetBorderWidth(double dWidth);
    /** Sets the contents of a specific cell
     *
     * \param col the column of the table cell
     * \param row the row of the table cell
     * \param rsString the contents of this cell
     */
    void SetText(int col, int row, const PdfString& rsString);
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the contents string of this table cell
     */
    virtual PdfString GetText(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the horizontal alignment of the contents in the cell
     */
    virtual EPdfAlignment GetAlignment(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the vertical alignment of the contents in the cell
     */
    virtual EPdfVerticalAlignment GetVerticalAlignment(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the font of this table cell or NULL to use the default font
     */
    virtual PdfFont* GetFont(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if this cell has a background color
     */
    virtual bool HasBackgroundColor(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the background color of the specified cell
     */
    virtual PdfColor GetBackgroundColor(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the foreground (text) color of the specified cell
     */
    virtual PdfColor GetForegroundColor(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if the specified cell should use wordwrapping
     */
    virtual bool HasWordWrap(int col, int row) const;
    /** 
     * \returns true if the table should have
     *          a border around all cells.
     * \returns false if no cell border should be visible
     *
     * Cell borders are always drawn using the current PdfPainter
     * settings.
     */
    virtual bool HasBorders() const;
    /** 
     * \returns the stroke witdth of the border line
     */
    virtual double GetBorderWidth() const;
    /**
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the border color 
     */
    virtual PdfColor GetBorderColor(int col, int row) const;
    /** 
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns true if the table cell contains an image
     */
    virtual bool HasImage(int col, int row) const;
    /**
     * \param col the column of the table cell
     * \param row the row of the table cell
     *
     * \returns the image for the specified cell or NULL if the cell has no image
     */
    virtual PdfImage* GetImage(int col, int row) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfSimpleTableModel, PoDoFo::PdfSimpleTableModel);
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
   * This is a high level class of a table which can be drawn to a PdfPainter.
   *
   * Use this class if you have to include data into your PDF as an table.
   * 
   */
  class PdfTable
  {
  public:
    PdfTable(PdfTable&& rhs);
  public:
    PdfTable(const PdfTable&);
    /** Callback to create a new page for PdfTable.
     *
     *  \see SetAutoPageBreak
     *
     *  \param rClipRect this is an output parameter which has
     *                   to be set to the clipping rectangle
     *                   of the new page. If the new page has
     *                   no clipping rectangle set it to
     *                   PdfRect( 0, 0, PdfPage::GetPageSize().GetWidth(), PdfPage::GetPageSize().GetHeight() )
     *  \param pCustom pointer to user defined data
     */
    typedef PdfPage* (*CreatePageCallback) (PdfRect& rClipRect, void* pCustom);
    /** Create a new PdfTable object.
     *
     *  \param nCols number of columns in the table.
     *  \param nRows number of rows in the table.
     */
    PdfTable(int nCols, int nRows);
    virtual ~PdfTable();
    /** Draw the table with its current settings
     *  on a PdfPainter.
     *
     *  \param dX x coordinate of top left of the table
     *  \param dY y coordinate of top left of the table
     *  \param pPainter the painter to draw on. The painter has to have a page set currently.
     *  \param rClipRect the clipping rectangle on the current page
     *  \param pdLastX the last used X position by the table on the current page will be written to this value (usually bottom right)
     *  \param pdLastY the last used Y positon by the table on the current page will be written to this value (usually bottom right)
     */
    virtual void Draw(double dX, double dY, PdfPainter* pPainter, const PdfRect& rClipRect = PdfRect(), double* pdLastX = NULL, double* pdLastY = NULL);
    /** Get the width of the table when drawn with the current settings at a certain position.
     *  \param dX x coordinate of top left of the table
     *  \param dY y coordinate of top left of the table
     *  \param pPage the page on which the table will be drawn
     *
     *  \returns the width of the table
     */
    virtual double GetWidth(double dX, double dY, PdfCanvas* pPage) const;
    /** Get the width of the table when drawn with the current settings at a certain position.
     *  \param dX x coordinate of top left of the table
     *  \param dY y coordinate of top left of the table
     *  \param pPage the page on which the table will be drawn
     *
     *  \returns the width of the table
     */
    virtual double GetHeight(double dX, double dY, PdfCanvas* pPage) const;
    /** Set the PdfTableModel that will supply all
     *  contents and formatting informations to the table.
     *
     *  \param pModel a PdfTableModel
     *
     *  The model will not be owned by the PdfTable and has to be deleted
     *  by the caller.
     *
     *  \see GetModel
     */
    void SetModel(PdfTableModel* pModel);
    /** Get the current PdfTableModel
     *
     *  \returns the currently set PdfTableModel or NULL if none was set
     */
    const PdfTableModel* GetModel() const;
    /** Set the width of all columns.
     *  
     *  \param pdWidths a pointer to an array of GetCols() doubles
     *                  which are the individual width of a column.
     *
     *  \see GetCols()
     */
    void SetColumnWidths(double* pdWidths);
    /** Set the height of all rows.
     *  
     *  \param pdHeights a pointer to an array of GetRows() doubles
     *                   which are the individual heights of a row.
     *
     *  \see GetRows()
     */
    void SetRowHeights(double* pdHeights);
    /** Set all columns to have the same width.
     *
     *  \param dWidth the width of every column
     *
     *  By default the column with is calculated automatically
     *  from either the table width or if no table width is set
     *  from the width of the page on which the table is drawn.
     */
    void SetColumnWidth(double dWidth);
    /** Set all rows to have the same height.
     *
     *  \param dHeight the height of every row
     *
     *  By default the row height is calculated automatically
     *  from either the table height or if no table height is set
     *  from the height of the page on which the table is drawn.
     */
    void SetRowHeight(double dHeight);
    /** Set the width of the table.
     *
     *  \param dWidth the width of the whole table.
     *
     *  This width is used if no column width is set
     *  to calculate the width of every column.
     *  If this width is not set, the width of the page
     *  on which this table is drawn is used.
     */
    void SetTableWidth(double dWidth);
    /** Set the height of the table.
     *
     *  \param dHeight the height of the whole table.
     *
     *  This height is used if no row height is set
     *  to calculate the height of every row.
     *  If this height is not set, the height of the page
     *  on which this table is drawn is used.
     */
    void SetTableHeight(double dHeight);
    /** Automatically create a new page and continue
     *  drawing the table on the new page,
     *  if there is not enough space on the current page.
     *
     *  The newly created page will be set as the current page
     *  on the painter used to draw and will be created using the
     *  same size as the old page.
     *
     *  \param bPageBreak if true automatically create new pages
     *         if required.
     *  \param callback a callback function that is called to create
     *         a new page. Please note: PdfTable cannot create new pages on its
     *         own. You always have to implement a callback which does the new page 
     *         creation for the PdfTable.
     *  \param pCustomData custom data that is passed to the callback
     *
     *  By default this feature is turned off and contents are clipped
     *  that do not fit on the current page.
     *
     *  \see GetAutoPageBreak
     */
    void SetAutoPageBreak(bool bPageBreak, CreatePageCallback callback, void* pCustomData = NULL);
    /** 
     *  \returns true if a new page is created automatically if more
     *           space is required to draw the table.
     *
     *  \see SetAutoPageBreak
     */
    bool GetAutoPageBreak() const;
    /**
     * \returns the number of columns in the table.
     */
    int GetCols() const;
    /**
     * \returns the number of rows in the table.
     */
    int GetRows() const;
  protected:
    /** Internal functions that calculates the total table size
     *  for a table with the current settings when drawn on a certain page.
     *
     *  \param dX the X coordinate of top left at which is drawn
     *  \param dY the Y coordinate of top left at which is drawn
     *  \param pCanvas the canvas object (usually a page) on which the table will be drawn.
     *  \param pdWidths pointer to an array with GetCols() doubles
     *                  where the width for each column will be stored
     *  \param pdHeights pointer to an array with GetRows() doublesd
     *                  where the height for each row will be stored
     *
     *  \param pdWidth pointer to a double where the total width of the table will be stored
     *  \param pdHeight pointer to a double where the total height of the table will be stored
     */
    void CalculateTableSize(const double dX, const double dY, const PdfCanvas* pCanvas, double* pdWidths, double* pdHeights, double* pdWidth, double* pdHeight) const;
    /** Draw one row of horizontal cell borders using the correct color
     *  for each cell.
     *
     *  @param nRow the current row
     *  @param dX left x coordinate
     *  @param dY y coordinate
     *  @param pPainter use this painter object
     *  @param pdColWidths an array containing all colomun widths
     */
    void DrawHorizontalBorders(int nRow, double dX, double dY, PdfPainter* pPainter, double* pdColWidths);
    /** Checks if there is enough space on the current page
     *  for one row! If necessary a new page is created.
     *
     *  If GetAutoPageBreak is false, this method does nothing.
     *
     *  \param pdY top of the table
     *  \param pdCurY pointer to the current y position on the page. 
     *                Might be reset to a new y position.
     *  \param dRowHeight height of the next row.
     *  \param pPainter painter used for drawing
     *
     *  \returns true if a new page was created, otherwise false
     */
    bool CheckForNewPage(double* pdY, double* pdCurY, double dRowHeight, PdfPainter* pPainter);

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfTable, PoDoFo::PdfTable);
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

#include "__zz_cib_internal/podofo/doc/PdfTable-postdef.h"
#endif
