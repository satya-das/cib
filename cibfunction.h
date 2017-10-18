#pragma once

#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCppCompound;
class CppProgramEx;
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

  std::string procNameSfx_; // Suffix to be used for proc name. It is needed to make overloaded methods have different proc name.

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
