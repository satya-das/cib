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
#ifndef _PDF_REF_COUNTED_BUFFER_H_
#  define _PDF_REF_COUNTED_BUFFER_H_
#  include "PdfDefines.h"

#include "__zz_cib_internal/podofo/base/PdfRefCountedBuffer-predef.h"

namespace PoDoFo
{
  /** 
   * A reference counted buffer object
   * which is deleted as soon as the last
   * object having access to it is delteted.
   *
   * The attached memory object can be resized.
   */
  class PdfRefCountedBuffer
  {
  public:
    PdfRefCountedBuffer(PdfRefCountedBuffer&& rhs);
  public:
    /** Created an empty reference counted buffer
     *  The buffer will be initialize to NULL
     */
    PdfRefCountedBuffer();
    /** Created an reference counted buffer and use an exiting buffer
     *  The buffer will be owned by this object.
     *
     *  \param pBuffer a pointer to an allocated buffer
     *  \param lSize   size of the allocated buffer
     *
     *  \see SetTakePossesion
     */
    PdfRefCountedBuffer(char* pBuffer, size_t lSize);
    /** Create a new PdfRefCountedBuffer. 
     *  \param lSize buffer size
     */
    PdfRefCountedBuffer(size_t lSize);
    /** Copy an existing PdfRefCountedBuffer and increase
     *  the reference count
     *  \param rhs the PdfRefCountedBuffer to copy
     */
    PdfRefCountedBuffer(const PdfRefCountedBuffer& rhs);
    /** Decrease the reference count and delete the buffer
     *  if this is the last owner
     */
    ~PdfRefCountedBuffer();
    /* !Non-Doxygen comment because constructor is disabled!
     *  Append to the current buffers contents. 
     *  If the buffer is referenced by another PdfRefCountedBuffer
     *  this object detaches from this buffer and allocates an own
     *  buffer. Otherwise the internal buffer is used and resized if
     *  necessary.
     *
     *  \param pszString a buffer
     *  \param lLen length of the buffer
     */
    //void Append( const char* pszString, long lLen ); 
     /** Get access to the buffer
     *  \returns the buffer
     */
    char* GetBuffer() const;
    /** Return the buffer size.
     *
     *  \returns the buffer size
     */
    size_t GetSize() const;
    /** Resize the buffer to hold at least
     *  lSize bytes.
     *
     *  \param lSize the size of bytes the buffer can at least hold
     *         
     *  If the buffer is larger no operation is performed.
     */
    void Resize(size_t lSize);
    /** Copy an existing PdfRefCountedBuffer and increase
     *  the reference count
     *  \param rhs the PdfRefCountedBuffer to copy
     *  \returns the copied object
     */
    const PdfRefCountedBuffer& operator=(const PdfRefCountedBuffer& rhs);
    /** If the PdfRefCountedBuffer has no possesion on its buffer,
     *  it won't delete the buffer. By default the buffer is owned
     *  and deleted by the PdfRefCountedBuffer object.
     *
     *  \param bTakePossession if false the buffer will not be deleted.
     */
    void SetTakePossesion(bool bTakePossession);
    /** 
     * \returns true if the buffer is owned by the PdfRefCountedBuffer
     *               and is deleted along with it.
     */
    bool TakePossesion() const;
    /** Compare to buffers.
     *  \param rhs compare to this buffer
     *  \returns true if both buffers contain the same contents
     */
    bool operator==(const PdfRefCountedBuffer& rhs) const;
    /** Compare to buffers.
     *  \param rhs compare to this buffer
     *  \returns true if this buffer is lexically littler than rhs
     */
    bool operator<(const PdfRefCountedBuffer& rhs) const;
    /** Compare to buffers.
     *  \param rhs compare to this buffer
     *  \returns true if this buffer is lexically greater than rhs
     */
    bool operator>(const PdfRefCountedBuffer& rhs) const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfRefCountedBuffer, PoDoFo::PdfRefCountedBuffer);
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
  // We define the copy ctor separately to the assignment
  // operator since it's a *LOT* faster this way.
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

#include "__zz_cib_internal/podofo/base/PdfRefCountedBuffer-postdef.h"
#endif
