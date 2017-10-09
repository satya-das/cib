#pragma once

#include "cpputil.h"

/**
* Finds if the member can be considered as public.
* @param protLevel Known protection level
* @param ownerType Owner type which owns the member.
*/
inline bool isMemberPublic(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
  return protLevel == kPublic || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kPublic);
}
