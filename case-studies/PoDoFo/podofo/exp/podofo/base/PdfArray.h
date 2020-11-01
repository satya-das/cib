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
#ifndef _PDF_ARRAY_H_
#  define _PDF_ARRAY_H_
#  ifdef _WIN32
#    ifdef _MSC_VER
// IC: VS2008 suppress dll warning
#      pragma  warning(disable: 4275)
#    endif
#  endif
#  include "PdfDefines.h"
#  include "PdfOwnedDataType.h"
#  include "PdfObject.h"

#include "__zz_cib_internal/podofo/base/PdfArray-predef.h"

namespace PoDoFo
{
  /** This class represents a PdfArray
   *  Use it for all arrays that are written to a PDF file.
   *  
   *  A PdfArray can hold any PdfVariant.
   *
   *  \see PdfVariant
   */
  class PdfArray : public ::PoDoFo::PdfOwnedDataType
  {
  public:
    PdfArray(PdfArray&& rhs);
  public:
    typedef size_t size_type;
    typedef PdfObject value_type;
    typedef std::vector<value_type>::reference reference;
    typedef std::vector<value_type>::const_reference const_reference;
    typedef std::vector<value_type>::iterator iterator;
    typedef std::vector<value_type>::const_iterator const_iterator;
    typedef std::vector<value_type>::reverse_iterator reverse_iterator;
    typedef std::vector<value_type>::const_reverse_iterator const_reverse_iterator;
    /** Create an empty array 
     */
    PdfArray();
    /** Create an array and add one value to it.
     *  The value is copied.
     *
     *  \param var add this object to the array.
     */
    PdfArray(const PdfObject& var);
    /** Deep copy an existing PdfArray
     *
     *  \param rhs the array to copy
     */
    PdfArray(const PdfArray& rhs);
    virtual ~PdfArray();
    /** assignment operator
     *
     *  \param rhs the array to assign
     */
    PdfArray& operator=(const PdfArray& rhs);
    /** 
     *  \returns the size of the array
     */
    size_t GetSize() const;
    /** Remove all elements from the array
     */
    void Clear();
    /** Write the array to an output device.
     *  This is an overloaded member function.
     *
     *  \param pDevice write the object to this device
     *  \param eWriteMode additional options for writing this object
     *  \param pEncrypt an encryption object which is used to encrypt this object
     *                  or NULL to not encrypt this object
     */
    virtual void Write(PdfOutputDevice* pDevice, EPdfWriteMode eWriteMode, const PdfEncrypt* pEncrypt = NULL) const;
    /** Utility method to determine if the array contains
     *  contains any objects of ePdfDataType_String whose
     *  value is the passed string.
     *  \param cmpString the string to compare against
     *  \returns true if success, false if not
     */
    bool ContainsString(const std::string& cmpString) const;
    /** Utility method to return the actual index in the
     *  array which contains an object of ePdfDataType_String whose
     *  value is the passed string.
     *  \param cmpString the string to compare against
     *  \returns true if success, false if not
     */
    size_t GetStringIndex(const std::string& cmpString) const;
    /** Get the object at the given index out of the array.
     *
     * Lookup in the indirect objects as well, if the shallow object was a reference.
     * The returned value is a pointer to the internal object in the dictionary
     * so it MUST not be deleted.
     *
     *  \param idx
     *  \returns pointer to the found value. NULL if the index was out of the boundaries
     */
    const PdfObject* FindAt(size_type idx) const;
    PdfObject* FindAt(size_type idx);
    /** Adds a PdfObject to the array
     *
     *  \param var add a PdfObject to the array
     *
     *  This will set the dirty flag of this object.
     *  \see IsDirty
     */
    void push_back(const PdfObject& var);
    /** Remove all elements from the array
     */
    void clear();
    /** 
     *  \returns the size of the array
     */
    size_t size() const;
    /**
     *  \returns true if the array is empty.
     */
    bool empty() const;
    PdfObject& operator[](size_type __n);
    const PdfObject& operator[](size_type __n) const;
    /**
     * Resize the internal vector.
     * \param count new size
     * \param value refernce value
     */
    void resize(size_t count, value_type val = value_type());
    /**
     *  Returns a read/write iterator that points to the first
     *  element in the array.  Iteration is done in ordinary
     *  element order.
     */
    iterator begin();
    /**
     *  Returns a read-only (constant) iterator that points to the
     *  first element in the array.  Iteration is done in ordinary
     *  element order.
     */
    const_iterator begin() const;
    /**
     *  Returns a read/write iterator that points one past the last
     *  element in the array.  Iteration is done in ordinary
     *  element order.
     */
    iterator end();
    /**
     *  Returns a read-only (constant) iterator that points one past
     *  the last element in the array.  Iteration is done in
     *  ordinary element order.
     */
    const_iterator end() const;
    /**
     *  Returns a read/write reverse iterator that points to the
     *  last element in the array.  Iteration is done in reverse
     *  element order.
     */
    reverse_iterator rbegin();
    /**
     *  Returns a read-only (constant) reverse iterator that points
     *  to the last element in the array.  Iteration is done in
     *  reverse element order.
     */
    const_reverse_iterator rbegin() const;
    /**
     *  Returns a read/write reverse iterator that points to one
     *  before the first element in the array.  Iteration is done
     *  in reverse element order.
     */
    reverse_iterator rend();
    /**
     *  Returns a read-only (constant) reverse iterator that points
     *  to one before the first element in the array.  Iteration
     *  is done in reverse element order.
     */
    const_reverse_iterator rend() const;
#  if  defined(_MSC_VER)  &&  _MSC_VER <= 1200    // workaround template-error in Visualstudio 6
    void insert(iterator __position, iterator __first, iterator __last);
#  else 
template <typename _InputIterator>
void insert(const iterator& __position, const _InputIterator& __first, const _InputIterator& __last);
#  endif
    iterator insert(const iterator& pos, const PdfObject& val);
    void erase(const iterator& pos);
    void erase(const iterator& first, const iterator& last);
    void reserve(size_type __n);
    /**
     *  \returns a read/write reference to the data at the first
     *           element of the array.
     */
    reference front();
    /**
     *  \returns a read-only (constant) reference to the data at the first
     *           element of the array.
     */
    const_reference front() const;
    /**
     *  \returns a read/write reference to the data at the last
     *           element of the array.
     */
    reference back();
    /**
     *  \returns a read-only (constant) reference to the data at the
     *           last element of the array.
     */
    const_reference back() const;
    bool operator==(const PdfArray& rhs) const;
    bool operator!=(const PdfArray& rhs) const;
    /** The dirty flag is set if this variant
     *  has been modified after construction.
     *  
     *  Usually the dirty flag is also set
     *  if you call any non-const member function
     *  as we cannot determine if you actually changed 
     *  something or not.
     *
     *  \returns true if the value is dirty and has been 
     *                modified since construction
     */
    virtual bool IsDirty() const;
    /** Sets the dirty flag of this PdfVariant
     *
     *  \param bDirty true if this PdfVariant has been
     *                modified from the outside
     *
     *  \see IsDirty
     */
    virtual void SetDirty(bool bDirty);
  protected:
    void SetOwner(PdfObject* pOwner);

  private:
    __ZZ_CIB_FACADE_CLASS_INTERNALS(PdfArray, PoDoFo::PdfArray);
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
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  // -----------------------------------------------------
  // 
  // -----------------------------------------------------
  typedef PdfArray TVariantList;
  typedef PdfArray::iterator TIVariantList;
  typedef PdfArray::const_iterator TCIVariantList;
}

#include "__zz_cib_internal/podofo/base/PdfArray-postdef.h"
#endif
