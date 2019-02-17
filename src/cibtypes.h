/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*!
 * @file Some fundamental types that CIB uses to define more complex objects.
 * Few conventions:
 * A type that has Id in the end is a numeric type.
 * A type that has Name in the end is a string whose value should conform to C/C++ identifier format.
 */

#pragma once

using CibId       = std::uint32_t;
using CibClassId  = CibId;
using CibMethodId = CibId;
enum : CibMethodId
{
  kInvalidMethodId = (CibMethodId) -1
};

using CibName = std::string;
/*!
 * Signature of method without name of parameters.
 * The purpose is to create a unique name within the class/namespace to which it belongs.
 */
using CibMethodSignature = std::string;
/*!
 * SIgnature of CAPI that defines the ABI created by CIB.
 */
using CibMethodAbiSignature = std::string;

/*!
 * CAPI Name of method. It is formed by appending method id to original name of method
 */
using CibMethodCAPIName = CibName;

//! Unique name of a class. For regular class/struct/namespace it is same as it's name.
//! For template instances a unique name is given to it that remains same across releases.
using CibClassNsName = CibName;

//! Full name of class
using CibFullClassName = CibName;
//! Unique full name of a class. For regular classes it is same as full name.
//! For all components in full-name of class, ClassNsName is a is used if it is a template class.
using CibFullClassNsName = CibName;