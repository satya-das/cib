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
#ifndef _PDF_DATA_H_
#  define _PDF_DATA_H_
#  include "PdfDefines.h"
#  include "PdfDataType.h"

#include "__zz_cib_internal/podofo/base/PdfData-predef.h"

namespace PoDoFo
{
  class PdfOutputDevice;
  /** A datatype that allows to write abitrary data
   *  to a PDF file. 
   *  The user of this class has to ensure that the data
   *  written to the PDF file using this class is valid data
   *  for a PDF file!
   *
   *  This class is used in PoDoFo to pad PdfVariants.
   *
   */
  class PdfData : public ::PoDoFo::PdfDataType
  {
  public:
    PdfData(PdfData&& rhs);
  public:
    ~PdfData();
    /**
     * Create a new PdfData object with valid PdfData
     *
     * The contained data has to be a valid value in a PDF file.
     * It will be written directly to the PDF file.
     *
     * \param pszData a null-terminated string to be copied.
     */
    PdfData(const char* pszData);
    /**
     * Create a new PdfData object with valid PdfData.
     *
     * \param pszData a char * buffer to be copied.
     * \param dataSize size of buffer
     */
    PdfData(const char* pszData, size_t dataSize);
    /** Copy an existing PdfData 
     *  \param rhs another PdfData to copy
     */
    PdfData(const PdfData& rhs);
    /** Write the complete datatype to a file.
     *  \param pDevice write the object to this device
     *  \param eWriteMode additional options for writing this object
     *  \param pEncrypt an encryption object which is used to encrypt this object
     *                  or NULL to not encrypt this object
     *
     * PdfData cannot do any encryption for you. So the encryption object will
     * be ignored as it is also the case for the write mode!
     */
    void Write(PdfOutputDevice* pDevice, EPdfWriteMode eWriteMode, const PdfEncrypt* pEncrypt = NULL) const;
    /** Copy an existing PdfData 
     *  \param rhs another PdfData to copy
     *  \returns this object
     */
    const PdfData& operator=(const PdfData& rhs);
    /**
     * Access the data as a std::string
     * \returns a const reference to the contained data
     */
    const std::string& data() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfData, PoDoFo::PdfData);
  };
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
}

#include "__zz_cib_internal/podofo/base/PdfData-postdef.h"
#endif
