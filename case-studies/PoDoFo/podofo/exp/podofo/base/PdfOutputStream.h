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
#ifndef _PDF_OUTPUT_STREAM_H_
#  define _PDF_OUTPUT_STREAM_H_
#  include "PdfDefines.h"
#  include "PdfRefCountedBuffer.h"
#  include <string>

#include "__zz_cib_internal/podofo/base/PdfOutputStream-predef.h"

namespace PoDoFo
{
#  define INITIAL_SIZE	4096
  class PdfOutputDevice;
  /** An interface for writing blocks of data to 
   *  a data source.
   */
  class PdfOutputStream
  {
  public:
    PdfOutputStream(PdfOutputStream&& rhs);
  public:
    virtual ~PdfOutputStream();
    /** Write data to the output stream
     *  
     *  \param pBuffer the data is read from this buffer
     *  \param lLen    the size of the buffer 
     *
     *  \returns the number of bytes written, -1 if an error ocurred
     */
    virtual pdf_long Write(const char* pBuffer, pdf_long lLen) = 0;
    /**
     * Helper that writes a string via Write(const char*,long)
     */
    pdf_long Write(const std::string& s);
    /** Close the PdfOutputStream.
     *  This method may throw exceptions and has to be called 
     *  before the descructor to end writing.
     *
     *  No more data may be written to the output device
     *  after calling close.
     */
    virtual void Close() = 0;
  protected:
    PdfOutputStream();

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfOutputStream, PoDoFo::PdfOutputStream);
  };
  /** An output stream that writes data to a file
   */
  class PdfFileOutputStream : public ::PoDoFo::PdfOutputStream
  {
  public:
    PdfFileOutputStream(PdfFileOutputStream&& rhs);
  public:
    PdfFileOutputStream(const PdfFileOutputStream&);
    /** Open a file for writing data
     *  
     *  \param pszFilename the filename of the file to read
     */
    PdfFileOutputStream(const char* pszFilename);
    virtual ~PdfFileOutputStream();
    /** Write data to the output stream
     *  
     *  \param pBuffer the data is read from this buffer
     *  \param lLen    the size of the buffer 
     *
     *  \returns the number of bytes written, -1 if an error ocurred
     */
    virtual pdf_long Write(const char* pBuffer, pdf_long lLen);
    /** Close the PdfOutputStream.
     *  This method may throw exceptions and has to be called 
     *  before the descructor to end writing.
     *
     *  No more data may be written to the output device
     *  after calling close.
     */
    virtual void Close();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfFileOutputStream, PoDoFo::PdfFileOutputStream);
  };
  /** An output stream that writes data to a memory buffer
   *  If the buffer is to small, it will be enlarged automatically.
   *
   *  DS: TODO: remove in favour of PdfBufferOutputStream.
   */
  class PdfMemoryOutputStream : public ::PoDoFo::PdfOutputStream
  {
  public:
    PdfMemoryOutputStream(PdfMemoryOutputStream&& rhs);
  public:
    PdfMemoryOutputStream(const PdfMemoryOutputStream&);
    /** 
     *  Construct a new PdfMemoryOutputStream
     *  \param lInitial initial size of the buffer
     */
    PdfMemoryOutputStream(pdf_long lInitial = INITIAL_SIZE);
    /**
     * Construct a new PdfMemoryOutputStream that writes to an existing buffer
     * \param pBuffer handle to the buffer
     * \param lLen length of the buffer
     */
    PdfMemoryOutputStream(char* pBuffer, pdf_long lLen);
    ~PdfMemoryOutputStream();
    /** Write data to the output stream
     *  
     *  \param pBuffer the data is read from this buffer
     *  \param lLen    the size of the buffer 
     *
     *  \returns the number of bytes written, -1 if an error ocurred
     */
    virtual pdf_long Write(const char* pBuffer, pdf_long lLen);
    /** Close the PdfOutputStream.
     *  This method may throw exceptions and has to be called 
     *  before the descructor to end writing.
     *
     *  No more data may be written to the output device
     *  after calling close.
     */
    virtual void Close();
    /** \returns the length of the written data
     */
    pdf_long GetLength() const;
    /**
     *  \returns a handle to the internal buffer.
     *
     *  The internal buffer is now owned by the caller
     *  and will not be deleted by PdfMemoryOutputStream.
     *  Further calls to Write() are not allowed.
     *
     *  The caller has to free() the returned malloc()'ed buffer!
     */
    char* TakeBuffer();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfMemoryOutputStream, PoDoFo::PdfMemoryOutputStream);
  };
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  /** An output stream that writes to a PdfOutputDevice
   */
  class PdfDeviceOutputStream : public ::PoDoFo::PdfOutputStream
  {
  public:
    PdfDeviceOutputStream(PdfDeviceOutputStream&& rhs);
  public:
    PdfDeviceOutputStream(const PdfDeviceOutputStream&);
    ~PdfDeviceOutputStream();
    /** 
     *  Write to an already opened input device
     * 
     *  \param pDevice an output device
     */
    PdfDeviceOutputStream(PdfOutputDevice* pDevice);
    /** Write data to the output stream
     *  
     *  \param pBuffer the data is read from this buffer
     *  \param lLen    the size of the buffer 
     *
     *  \returns the number of bytes written, -1 if an error ocurred
     */
    virtual pdf_long Write(const char* pBuffer, pdf_long lLen);
    /** Close the PdfOutputStream.
     *  This method may throw exceptions and has to be called 
     *  before the descructor to end writing.
     *
     *  No more data may be written to the output device
     *  after calling close.
     */
    virtual void Close();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfDeviceOutputStream, PoDoFo::PdfDeviceOutputStream);
  };
  /** An output stream that writes to a PdfRefCountedBuffer.
   * 
   *  The PdfRefCountedBuffer is resized automatically if necessary.
   */
  class PdfBufferOutputStream : public ::PoDoFo::PdfOutputStream
  {
  public:
    PdfBufferOutputStream(PdfBufferOutputStream&& rhs);
  public:
    PdfBufferOutputStream(const PdfBufferOutputStream&);
    ~PdfBufferOutputStream();
    /** 
     *  Write to an already opened input device
     * 
     *  \param pBuffer data is written to this buffer
     */
    PdfBufferOutputStream(PdfRefCountedBuffer* pBuffer);
    /** Write data to the output stream
     *  
     *  \param pBuffer the data is read from this buffer
     *  \param lLen    the size of the buffer 
     *
     *  \returns the number of bytes written, -1 if an error ocurred
     */
    virtual pdf_long Write(const char* pBuffer, pdf_long lLen);
    virtual void Close();
    /** 
     * \returns the length of the buffers contents
     */
    pdf_long GetLength() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfBufferOutputStream, PoDoFo::PdfBufferOutputStream);
  };
}

#include "__zz_cib_internal/podofo/base/PdfOutputStream-postdef.h"
#endif
