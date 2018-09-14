#pragma once

#include "cppconst.h"
#include "cpputil.h"

#include <string>

class CibHelper;
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
  TypeResolver(const CibCppCompound* owner = nullptr, const CibHelper* helper = nullptr)
    : owner_(owner)
    , cppProgram_(helper)
  {
  }
  // FIXME: It should actually return CppObj, but for now lets assume it will always be a compound
  // object.
  const CibCppCompound* operator()(const std::string& typeName) const;

private:
  const CibCppCompound* owner_;
  const CibHelper*      cppProgram_;
};

struct VarTypeResolver : TypeResolver
{
  VarTypeResolver(const CibParams&      cibParams,
                  const CibCppCompound* owner    = nullptr,
                  const CibHelper*      helper   = nullptr,
                  bool                  isHandle = false)
    : TypeResolver(owner, helper)
    , cibParams_(cibParams)
    , isHandle_(isHandle)
  {
  }

  std::string operator()(const std::string& typeName) const;

private:
  const CibParams& cibParams_;
  bool             isHandle_;
};
