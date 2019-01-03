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

#pragma once

#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCppCompound;
class CibHelper;
struct CibParams;

/*!
 * Base class to add common attributes to function-like objects.

 * It can be very easy to go wrong when dealing with
 * CppConstructor, CppDestructor, and CppFunction in uniform way;
 * so, access to them is blocked by having protected inheritance.
 * CibFunctionHelper should be used instead of directly accessing
 * CppConstructor, CppDestructor, and CppFunction objects.
 * Using CibFunctionHelper it is possible to use these three
 * C++ constructs uniformly.
 */
template <typename _Base>
struct CppFunctionLikeMixin : protected _Base
{
protected:
  using _Base::_Base;

  friend class CibFunctionHelper;
};

struct CibCppConstructor : public CppFunctionLikeMixin<CppConstructor>
{
  using CppFunctionLikeMixin::CppFunctionLikeMixin;
};

struct CibCppDestructor : public CppFunctionLikeMixin<CppDestructor>
{
  using CppFunctionLikeMixin::CppFunctionLikeMixin;
};

struct CibCppFunction : public CppFunctionLikeMixin<CppFunction>
{
  using CppFunctionLikeMixin::CppFunctionLikeMixin;
};

struct CibCppTypeConverter : public CppFunctionLikeMixin<CppTypeConverter>
{
  using CppFunctionLikeMixin::CppFunctionLikeMixin;
};
