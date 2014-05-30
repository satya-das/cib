#include "cppprogex.h"
#include "cppparser.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

void CppProgramEx::buildCppApiObjTree()
{
	for(CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
		CppCompoundObjToCppApiCompound(*domItr, NULL);
	for(CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
		resolveInheritance(*domItr);
}

CppApiCompound* CppProgramEx::CppCompoundObjToCppApiCompound(CppCompound* cppCompound, CppApiCompound* owner)
{
   assert(cppObjToCppApiObjMap_.find(cppCompound) == cppObjToCppApiObjMap_.end()); // It must not be already present in repo.
   CppApiCompound* apiCompound = new CppApiCompound(cppCompound, owner);
   cppObjToCppApiObjMap_[cppCompound] = apiCompound;

   for(CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
   {
      CppObj* mem = *itr;
      switch(mem->objType_)
      {
	  case CppObj::kCompound:
         {
            CppCompoundObjToCppApiCompound((CppCompound*) mem, apiCompound);
            break;
         }
      case CppObj::kFunction:
         {
            CppFunctionObjToCppApiFunction((CppFunction*) mem, apiCompound);
            break;
         }
	  case CppObj::kConstructor:
		  {
			  CppConstructorObjToCppApiFunction((CppConstructor*) mem, apiCompound);
			  break;
		  }
	  case CppObj::kDestructor:
		  {
			  CppDestructorObjToCppApiFunction((CppDestructor*) mem, apiCompound);
			  break;
		  }
      }
   }

   return apiCompound;
}

const CppApiObj* CppProgramEx::getCppApiObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode)
{
    size_t nameBegPos = 0;
    size_t nameEndPos = name.find("::", nameBegPos);
    if(nameEndPos == std::string::npos)
    {
        typeNode = findTypeNode(name, typeNode);
    }
    else
    {
        std::string nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
        typeNode = findTypeNode(name.substr(nameBegPos, nameEndPos-nameBegPos), typeNode);
        if(!typeNode)
            return NULL;
        do 
        {
            nameBegPos = nameEndPos + 2;
            nameEndPos = name.find("::", nameBegPos);
            if(nameEndPos == std::string::npos)
                nameEndPos = name.length();
            std::string nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
            CppTypeTree::const_iterator itr = typeNode->children.find(nameToLookFor);
            if(itr == typeNode->children.end())
                return NULL;
            typeNode = &itr->second;
        } while (nameEndPos >= name.length());
    }
    return typeNode ? CppApiObjFromCppObj(*(typeNode->cppObjSet.begin())) : NULL;
}

void CppProgramEx::resolveInheritance(CppCompound* cppCompound)
{
    const CppTypeTreeNode& ownerTypeNode = *cppObjToTypeNode_[cppCompound->owner_];
	if(cppCompound->inheritList_)
	{
		for(CppInheritanceList::const_iterator itrInh = cppCompound->inheritList_->begin(); itrInh != cppCompound->inheritList_->end(); ++itrInh)
		{
			CppApiCompound* parentObj = (CppApiCompound*) getCppApiObjFromTypeName(itrInh->baseName, &ownerTypeNode);
			// assert(parentObj != NULL); // we should actually give warning here.
			if(parentObj == NULL)
				continue;
			CppApiCompound* apiCompound = (CppApiCompound*) cppObjToCppApiObjMap_[cppCompound];
			CppObjProtLevel inhType = itrInh->inhType == kUnknownProt ? defaultInheritanceType(cppCompound->compoundType_) : itrInh->inhType;
			apiCompound->parents_[inhType].push_back(parentObj);
			parentObj->children_[inhType].push_back(apiCompound);
		}
	}
    for(CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
    {
        CppObj* mem = *itr;
        if(mem->objType_ == CppObj::kCompound)
            resolveInheritance((CppCompound*) mem);
    }
}
