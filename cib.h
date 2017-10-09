#ifndef __CIB_H__
#define __CIB_H__

#include "cibparams.h"

#include "cppdom.h"
#include "cppwriter.h"

#include <iostream>
#include <algorithm>

#include <assert.h>

//////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////
// Other utility methods

/**
 * Finds if the member can be considered as public.
 * @param protLevel Known protection level
 * @param ownerType Owner type which owns the member.
 */
inline bool isMemberPublic(CppObjProtLevel protLevel, CppCompoundType ownerType)
{
  return protLevel == kPublic || (protLevel == kUnknownProt && defaultMemberProtLevel(ownerType) == kPublic);
}

#endif //__CIB_H__
