#pragma once

#include "cpputil.h"
#include "cppconst.h"

#include <string>


class CppProgramEx;
struct CibCppCompound;
struct CppVarType;

struct CibParams;

/**
* Finds if the member can be considered as public.
* @param protLevel Known protection level
* @param ownerType Owner type which owns the member.
*/
inline bool isMemberPublic(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
  return protLevel == kPublic || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kPublic);
}
inline bool isMemberProtected(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
  return protLevel == kProtected || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kProtected);
}
inline bool isMemberPrivate(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
  return protLevel == kPrivate || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kPrivate);
}

struct TypeResolver
{
  TypeResolver(const CibCppCompound* owner = nullptr, const CppProgramEx* cppProgram = nullptr)
    : owner_(owner)
    , cppProgram_(cppProgram)
  {}
  // FIXME: It should actually return CppObj, but for now lets assume it will always be a compound object.
  CibCppCompound* operator()(const std::string& typeName) const;

private:
  const CibCppCompound* owner_;
  const CppProgramEx* cppProgram_;
};

struct VarTypeResolver : TypeResolver
{
  VarTypeResolver(const CibParams& cibParams, const CibCppCompound* owner = nullptr, const CppProgramEx* cppProgram = nullptr, bool isHandle = false)
    : TypeResolver(owner, cppProgram)
    , cibParams_(cibParams)
    , isHandle_(isHandle)
  {}

  std::string operator()(const std::string& typeName) const;

private:
  const CibParams& cibParams_;
  bool isHandle_;
};
