#pragma once

#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCppCompound;
class CppProgramEx;
struct CibParams;

template <typename _Base>
struct CppFunctionMixin : public _Base
{
  std::string procNameSfx_;               // Suffix to be used for proc name. It is needed to make overloaded methods have different proc name.

  using _Base::_Base;

protected:
  CppFunctionMixin() {}
};

struct CibCppFunction : public CppFunctionMixin<CppFunction>
{
  using CppFunctionMixin::CppFunctionMixin;
};

struct CibCppConstructor : public CppFunctionMixin<CppConstructor>
{
  using CppFunctionMixin::CppFunctionMixin;
};

struct CibCppDestructor : public CppFunctionMixin<CppDestructor>
{
  using CppFunctionMixin::CppFunctionMixin;
};
