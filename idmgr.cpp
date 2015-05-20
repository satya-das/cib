/*
   The MIT License (MIT)

   Copyright (c) 2014

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

#include "idmgr.h"

#include "cppparser.h"

#include <strstream>
#include <ostream>

//////////////////////////////////////////////////////////////////////////

void CibIdMgr::init()
{
}

void CibIdMgr::loadIds(const CppCompound* nodeCompound, CibIdNode& idNode)
{
	for(CppObjArray::const_iterator nodeMemItr = nodeCompound->members_.begin(); nodeMemItr != nodeCompound->members_.end(); ++nodeMemItr)
	{
		CppObj* cppObj = *nodeMemItr;
		if(cppObj->objType_ == CppObj::kEnum)
		{
			CppEnum* idEnum = (CppEnum*) cppObj;
			if(idEnum->itemList_ == NULL)
				continue;
			for(CppEnumItemList::const_iterator enmItmItr = idEnum->itemList_->begin(); enmItmItr != idEnum->itemList_->end(); ++enmItmItr)
			{
				CppEnumItem*   enmUniqStrItm = *enmItmItr;
				if(!enmUniqStrItm->name_.empty())
					continue;
				if(enmUniqStrItm->anyItem_->objType_ != CppObj::kDocComment)
					continue;
				CppDocComment* uniqStrComment  = (CppDocComment*) enmUniqStrItm->anyItem_;
				size_t uniqStrStartPos = uniqStrComment->doc_.find('/');
				if(uniqStrStartPos == uniqStrComment->doc_.npos)
					continue;
				if(uniqStrComment->doc_.length() < uniqStrStartPos+7 || uniqStrComment->doc_.back() != ';')
					continue;
				++enmItmItr;
				if(enmItmItr == idEnum->itemList_->end())
					break;
				CppEnumItem*   enmItmData = *enmItmItr;
				if(enmItmData->name_.empty() || enmItmData->val_ == NULL || enmItmData->val_->objType_ != CppObj::kExpression)
					continue;
				CppExpr*       valExpr    = enmItmData->val_;
				if(valExpr->expr1_.type != CppExprAtom::kAtom || valExpr->expr1_.atom == NULL || valExpr->expr1_.atom->length() == 0)
					continue;
				CibIdData&     cibIdData  = idNode.idEnum[uniqStrComment->doc_.substr(uniqStrStartPos+5)];
				cibIdData.idName = enmItmData->name_;
				cibIdData.idVal  = atoi(valExpr->expr1_.atom->c_str());
				if(lastCibId_ < cibIdData.idVal)
					lastCibId_ = cibIdData.idVal;
			}
		}
		else if(cppObj->objType_ == CppObj::kCompound)
		{
			CppCompound* childNode = (CppCompound*) cppObj;
			loadIds(childNode, idNode.childs[childNode->name_]);
		}
	}
}

bool CibIdMgr::loadIds(const std::string& idsFilePath)
{
	CppCompound* idsCppFile = parseSingleFile(idsFilePath.c_str());
	if(idsCppFile == NULL)
		return false;
	for(CppObjArray::const_iterator idsFileMemItr = idsCppFile->members_.begin(); idsFileMemItr != idsCppFile->members_.end(); ++idsFileMemItr)
	{
		const CppObj* cppObj = *idsFileMemItr;
		if(cppObj->objType_ != CppObj::kCompound)
			continue;
		CppCompound*  cibNs  = (CppCompound*) cppObj;
		if(cibNs->name_ != "_cib_")
			return false;
		for(CppObjArray::const_iterator cibNsMemItr = cibNs->members_.begin(); cibNsMemItr != cibNs->members_.end(); ++cibNsMemItr)
		{
			const CppObj* cppObj      = *cibNsMemItr;
			if(cppObj->objType_ != CppObj::kCompound)
				continue;
			CppCompound*  cibModuleNs = (CppCompound*) cppObj;
			if(cibModuleNs->name_ != moduleName_ + "Lib")
				return false;
			loadIds(cibModuleNs, oldIdTreeRoot_);
			return true;
		}
	}
	return true;
}

void CibIdMgr::assignIdsToSpecialMethods(const CibCppCompound* compound, CibIdNode& idNode, const CibIdNode* oldIdNode, const CibParams& cibParams)
{
	CibCppInheritInfo::const_iterator parentSetItr = compound->parents_.find(kPublic);
	if(parentSetItr == compound->parents_.end())
		return;
	const CibCppCompoundArray&        pubParents   = parentSetItr->second;

	for(CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
	{
		const CibCppCompound* pubParent  = *parentItr;
		std::ostrstream tmpbuf;
		tmpbuf << compound->castToBaseName(pubParent, cibParams) << "();";
		std::string itmUniqStr = std::string(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount());
		CibIdData&            itemData   = idNode.idEnum[itmUniqStr];
		itemData.idName = compound->castToBaseName(pubParent, cibParams);
		if(oldIdNode)
		{
			CibIdEnum::const_iterator oldItmItr = oldIdNode->idEnum.find(itmUniqStr);
			if(oldItmItr == oldIdNode->idEnum.end())
				itemData.idVal = ++lastCibId_;
			else
				itemData.idVal = oldItmItr->second.idVal;
		}
		else
		{
			itemData.idVal = ++lastCibId_;
		}
	}
}

void CibIdMgr::assignIds(const CppObjArray& inList, CppProgramEx& expProg, CibIdNode& idNode, const CibIdNode* oldIdNode, const CibParams& cibParams)
{
	if(inList.empty())
		return;
	for(CppObjArray::const_iterator itemItr = inList.begin(); itemItr != inList.end(); ++itemItr)
	{
		std::string itemUniqStr;
		CibIdData enumItemData;
		CppObj*     item = *itemItr;
		if(item->isFunctionLike())
		{
			CibCppFunction* func = (CibCppFunction*) expProg.CibCppObjFromCppObj(item);
			std::ostrstream tmpbuf;
			func->emitOrigDecl(tmpbuf, expProg, cibParams);
			itemUniqStr         = std::string(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount()-1);
			enumItemData.idName = func->capiName(cibParams);
		}
		else if(item->isNamespaceLike())
		{
			CppCompound*     compound       = (CppCompound*) item;
			const CibIdNode* childOldIdNode = NULL;
			if(oldIdNode)
			{
				CibIdEnumTree::const_iterator itr = oldIdNode->childs.find(compound->name_);
				if(itr != oldIdNode->childs.end())
					childOldIdNode = &(itr->second);
			}
			assignIds(compound->members_, expProg, idNode.childs[compound->name_], childOldIdNode, cibParams);
			if(compound->isClassLike())
			{
				CibCppCompound* cmp = (CibCppCompound*) expProg.CibCppObjFromCppObj(compound);
				assignIdsToSpecialMethods(cmp, idNode.childs[compound->name_], childOldIdNode, cibParams);
				std::ostrstream tmpbuf;
				tmpbuf << compound->compoundType_ << ' ' << compound->name_ << ';';
				itemUniqStr         = std::string(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount());
				enumItemData.idName = compound->name_;
			}
		}
		if(!itemUniqStr.empty() && idNode.idEnum.find(itemUniqStr) == idNode.idEnum.end()) // Item does not exist
		{
			if(oldIdNode)
			{
				CibIdEnum::const_iterator oldItmItr = oldIdNode->idEnum.find(itemUniqStr);
				if(oldItmItr == oldIdNode->idEnum.end())
					enumItemData.idVal = ++lastCibId_;
				else
					enumItemData.idVal = oldItmItr->second.idVal;
			}
			else
			{
				enumItemData.idVal = ++lastCibId_;
			}

			idNode.idEnum[itemUniqStr] = enumItemData;
		}
	}
}

void CibIdMgr::assignIds(CppProgramEx& expProg, const CibParams& cibParams)
{
	// First create Ids for global functions
	const CppCompoundArray& fileDOMs = expProg.getFileDOMs();
	for(CppCompoundArray::const_iterator fileDomItr = fileDOMs.begin(); fileDomItr != fileDOMs.end(); ++fileDomItr)
	{
		const CppCompound* fileCmpound = *fileDomItr;
		assignIds(fileCmpound->members_, expProg, idTreeRoot_, &oldIdTreeRoot_, cibParams);
	}
}

bool CibIdMgr::saveIds(const std::string& idsFilePath) const
{
	std::ofstream cibIdStm(idsFilePath, std::ios_base::out);
	cibIdStm << "// DO NOT EDIT THIS FILE\n\n";
	cibIdStm << "#ifndef __CIBID_" << moduleName_ << "Lib_H__\n";
	cibIdStm << "#define __CIBID_" << moduleName_ << "Lib_H__\n\n";
	cibIdStm << "namespace _cib_ { namespace " << moduleName_ << "Lib {\n";
	CppWriter::Indentation indentation;
	emitIds(cibIdStm, idTreeRoot_, ++indentation);
	cibIdStm << --indentation << "}}\n\n";
	cibIdStm << "#endif\n";

	return true;
}

void CibIdMgr::emitIds(std::ostream& stm, const CibIdNode& idNode, CppWriter::Indentation indentation) const
{
	if(!idNode.idEnum.empty())
	{
		stm << indentation << "enum {\n";
		++indentation;
		for(CibIdEnum::const_iterator enmItmItr = idNode.idEnum.begin(); enmItmItr != idNode.idEnum.end(); ++enmItmItr)
		{
			stm << indentation << "//#= " << enmItmItr->first << '\n';
			stm << indentation << "kCIBID_" << enmItmItr->second.idName << " = " << enmItmItr->second.idVal << ",\n";
		}
		--indentation;
		stm << indentation << "};\n";
	}

	for(CibIdEnumTree::const_iterator childItr = idNode.childs.begin(); childItr != idNode.childs.end(); ++childItr)
	{
		stm << indentation++ << "namespace " << childItr->first << " {\n";
		emitIds(stm, childItr->second, indentation--);
		stm << indentation << "}\n";
	}
}
