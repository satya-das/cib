#include "cppprogex.h"
#include "cppparser.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

void CppProgramEx::buildCibCppObjTree()
{
	for(CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
		CppCompoundObjToCibCppCompound(*domItr, NULL);
	for(CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
		resolveInheritance(*domItr);

	for(auto facadeLike : facadeLikeClasses_)
	{
		for(auto className : facadeLike.second)
		{
			CibCppCompound* cibCppOwner    = facadeLike.first;
			CibCppObj*      cibCppObj      = const_cast<CibCppObj*>(getCibCppObjFromTypeName(className, cibCppOwner ? NULL : cibCppOwner->getCppCompound()));
			if(cibCppObj == NULL)
				continue;
			CibCppCompound* cibCppCompound = dynamic_cast<CibCppCompound*>(cibCppObj);
			if(cibCppCompound = NULL)
				continue;
			cibCppCompound->setFacadeLike();
		}
	}

	for(auto intrfcLike : intrfcLikeClasses_)
	{
		for(auto className : intrfcLike.second)
		{
			CibCppCompound* cibCppOwner    = intrfcLike.first;
			CibCppObj*      cibCppObj      = const_cast<CibCppObj*>(getCibCppObjFromTypeName(className, cibCppOwner ? NULL : cibCppOwner->getCppCompound()));
			if(cibCppObj == NULL)
				continue;
			CibCppCompound* cibCppCompound = dynamic_cast<CibCppCompound*>(cibCppObj);
			if(cibCppCompound = NULL)
				continue;
			cibCppCompound->setInterfaceLike();
		}
	}
}

CibCppCompound* CppProgramEx::CppCompoundObjToCibCppCompound(CppCompound* cppCompound, CibCppCompound* owner)
{
	assert(cppObjToCibCppObjMap_.find(cppCompound) == cppObjToCibCppObjMap_.end()); // It must not be already present in repo.
	CibCppCompound* apiCompound = new CibCppCompound(cppCompound, owner);
	cppObjToCibCppObjMap_[cppCompound] = apiCompound;

	for(CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
	{
		CppObj* mem = *itr;
		switch(mem->objType_)
		{
		case CppObj::kCompound:
		{
			CppCompoundObjToCibCppCompound((CppCompound*) mem, apiCompound);
			break;
		}
		case CppObj::kFunction:
		{
			CibCppFunction* func = CppFunctionObjToCibCppFunction((CppFunction*) mem, apiCompound);
			evaluateArgs(func);
			break;
		}
		case CppObj::kConstructor:
		{
			CppConstructorObjToCibCppFunction((CppConstructor*) mem, apiCompound);
			break;
		}
		case CppObj::kDestructor:
		{
			CppDestructorObjToCibCppFunction((CppDestructor*) mem, apiCompound);
			break;
		}
		}
	}

	return apiCompound;
}

const CibCppObj* CppProgramEx::getCibCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const
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
			CppTypeTree::const_iterator itr           = typeNode->children.find(nameToLookFor);
			if(itr == typeNode->children.end())
				return NULL;
			typeNode = &itr->second;
		} while (nameEndPos >= name.length());
	}
	return typeNode ? CibCppObjFromCppObj(*(typeNode->cppObjSet.begin())) : NULL;
}

void CppProgramEx::resolveInheritance(CppCompound* cppCompound)
{
	const CppTypeTreeNode& ownerTypeNode = *cppObjToTypeNode_[cppCompound->owner_];
	if(cppCompound->inheritList_)
	{
		for(CppInheritanceList::const_iterator itrInh = cppCompound->inheritList_->begin(); itrInh != cppCompound->inheritList_->end(); ++itrInh)
		{
			CibCppCompound* parentObj = (CibCppCompound*) getCibCppObjFromTypeName(itrInh->baseName, &ownerTypeNode);
			// assert(parentObj != NULL); // we should actually give warning here.
			if(parentObj == NULL)
				continue;
			CibCppCompound* apiCompound = (CibCppCompound*) cppObjToCibCppObjMap_[cppCompound];
			CppObjProtLevel inhType     = itrInh->inhType == kUnknownProt ? defaultInheritanceType(cppCompound->compoundType_) : itrInh->inhType;
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

void CppProgramEx::evaluateArgs(CibCppFunction* func)
{
	// Evaluate the arguments to detect if any of them uses a class that is interface-like.
	if(func->hasParams())
	{
		for(auto param : *(func->getParams()))
		{
			if(param.cppObj->objType_ != CppObj::kVar)
				continue;
			if(param.varObj->ptrLevel_ == 1 || param.varObj->refType_ == kByRef)
				intrfcLikeClasses_[func->getOwner()].insert(param.varObj->baseType_);
		}
	}
	// Evaluate to detect if the return type is a facade-like class.
	CppFunction* cppFunc = func->getCppFunction();
	assert(cppFunc);
	if(cppFunc && cppFunc->retType_)
	{
		if (cppFunc->retType_->ptrLevel_ == 1 || cppFunc->retType_->refType_ == kByRef)
			facadeLikeClasses_[func->getOwner()].insert(cppFunc->retType_->baseType_);
	}
}
