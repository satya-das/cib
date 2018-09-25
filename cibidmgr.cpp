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

#include "cibidmgr.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibfunction_helper.h"
#include "cibutil.h"

#include "cppparser.h"

#include <boost/tokenizer.hpp>

#include <ostream>
#include <vector>

//////////////////////////////////////////////////////////////////////////

bool CibIdMgr::loadIds(const std::string& idsFilePath, const CibParams& cibParams)
{
  CppParser cppparser;
  auto      idCmp = cppparser.parseFile(idsFilePath.c_str());
  if (idCmp == nullptr)
    return false;
  bool classIdsLoaded = false; // sad that we cannot define vars in lambda capture.
  idCmp->traverse([this, &classIdsLoaded](const CppObj* cppObj) -> bool {
    if (cppObj->objType_ == CppObj::kEnum)
    {
      if (!classIdsLoaded && cppObj->owner_->name_ == "__zz_cib_classid")
      {
        loadClassIds(static_cast<const CppEnum*>(cppObj));
        classIdsLoaded = true;
      }
      else if (cppObj->owner_->name_ == "__zz_cib_methodid")
      {
        auto extractClassName = [](const CibCppCompound* classObj) -> std::string {
          return classObj->longName().substr(11); // skip "::__zz_cib_"
        };
        auto className = extractClassName(static_cast<const CibCppCompound*>(cppObj->owner_->owner_));
        loadMethodIds(className, static_cast<const CppEnum*>(cppObj));
      }
    }
    return false;
  });
  return true;
}

using IdInfo = std::tuple<CibIdIdentifier, CibIdName, CibId>;

std::pair<std::vector<IdInfo>, CibId> parseIdEnum(const CppEnum* classIdEnum)
{
  std::vector<IdInfo> idInfos;
  CibIdIdentifier     identifier; // Can be class-name for __zz_cib_classid or method-signature for function.
  CibId               nextIdValue = 0;
  for (auto item : *classIdEnum->itemList_)
  {
    if (item->name_.empty())
    {
      if (item->anyItem_ && item->anyItem_->objType_ == CppObj::kDocComment)
      {
        auto docComment = static_cast<const CppDocComment*>(item->anyItem_);
        auto itr        = docComment->doc_.find('/');
        identifier      = docComment->doc_.substr(itr + 5);
      }
    }
    else if (!identifier.empty())
    {
      auto val = item->val_;
      if (val->expr1_.type == CppExprAtom::kAtom && val->expr1_.atom != nullptr)
        idInfos.emplace_back(std::move(identifier), item->name_, atoi(val->expr1_.atom->c_str()));
      else
        identifier.clear();
    }
    else if (item->name_.compare(0, 14, "__zz_cib_next_") == 0)
    {
      auto val = item->val_;
      if (val->expr1_.type == CppExprAtom::kAtom && val->expr1_.atom != nullptr)
        nextIdValue = atoi(val->expr1_.atom->c_str());
    }
  }

  return std::make_pair(idInfos, nextIdValue);
}

void CibIdMgr::loadClassIds(const CppEnum* classIdEnum)
{
  if (classIdEnum->itemList_ == nullptr)
    return;
  const auto& classIdEnumData = parseIdEnum(classIdEnum);
  const auto& enumItemInfos   = classIdEnumData.first;
  auto        nextClassId     = classIdEnumData.second;
  for (const auto& item : enumItemInfos)
    addClass(std::get<0>(item), std::get<2>(item));
  if (nextClassId_ < nextClassId)
    nextClassId_ = nextClassId;
}

void CibIdMgr::loadMethodIds(std::string className, const CppEnum* methodIdEnum)
{
  auto itr = cibIdTable_.find(className);
  if (itr == cibIdTable_.end())
    return;
  if (methodIdEnum->itemList_ == nullptr)
    return;
  auto&       methodIdTable    = itr->second;
  const auto& methodIdEnumData = parseIdEnum(methodIdEnum);
  const auto& enumItemInfos    = methodIdEnumData.first;
  auto        nextMethodId     = methodIdEnumData.second;
  for (const auto& item : enumItemInfos)
    methodIdTable.addMethod(std::get<0>(item), std::get<1>(item), std::get<2>(item));
  if (methodIdTable.getNextMethodId() < nextMethodId)
    methodIdTable.setNextMethodId(nextMethodId);
}

void CibIdMgr::assignIds(const CibHelper& expProg, const CibParams& cibParams)
{
  // First create Ids for global functions
  const CppCompoundArray& fileDOMs = expProg.getProgram().getFileDOMs();
  for (auto fileCmpound : fileDOMs)
  {
    assignIds(static_cast<const CibCppCompound*>(fileCmpound), cibParams, false);
    assignIds(static_cast<const CibCppCompound*>(fileCmpound), cibParams, true);
  }
}

void CibIdMgr::assignIds(const CibCppCompound* compound, const CibParams& cibParams, bool forGenericProxy)
{
  // if (!compound->isShared())
  //  return;
  if (compound->templSpec_)
    return;
  if (compound->name().empty())
    return;
  for (auto mem : compound->members_)
  {
    if (isMemberPublic(mem->prot_, compound->compoundType_) && mem->isNamespaceLike())
    {
      assignIds(static_cast<const CibCppCompound*>(mem), cibParams, forGenericProxy);
    }
  }

  if (compound->getNeedsBridgingMethods().empty())
  {
    return;
  }
  if (forGenericProxy && !compound->needsGenericProxyDefinition())
  {
    return;
  }
  const auto& className = forGenericProxy ? compound->longName() + "::__zz_cib_GenericProxy" : compound->longName();
  auto        itr       = cibIdTable_.find(className);
  auto*       cibIdData = itr == cibIdTable_.end() ? addClass(className) : &itr->second;
  for (auto& func : compound->getNeedsBridgingMethods())
  {
    if (forGenericProxy && !func.isVirtual())
      continue;
    auto&& sig = func.signature();
    if (!cibIdData->hasMethod(func.signature()))
    {
      cibIdData->addMethod(sig, func.procName(cibParams));
    }
  }
  if (!forGenericProxy)
  {
    compound->forEachAncestor(kPublic, [compound, &cibIdData, &cibParams](const CibCppCompound* parent) {
      auto castMethodName = compound->castToBaseName(parent, cibParams);
      if (!cibIdData->hasMethod(castMethodName))
        cibIdData->addMethod(castMethodName, castMethodName);
    });
    if (compound->isFacadeLike())
    {
      if (!cibIdData->hasMethod("__zz_cib_get_class_id"))
        cibIdData->addMethod("__zz_cib_get_class_id", "__zz_cib_get_class_id");
    }
    if (compound->needsGenericProxyDefinition())
    {
      if (!cibIdData->hasMethod("__zz_cib_release_proxy"))
        cibIdData->addMethod("__zz_cib_release_proxy", "__zz_cib_release_proxy");
    }
  }
}

CibIdData* CibIdMgr::addClass(std::string className, CibClassId classId)
{
  auto clsIdName = classIdName(className);
  if (classId == 0)
    classId = nextClassId_++;
  else if (nextClassId_ < classId + 1)
    nextClassId_ = classId + 1;
  auto res = cibIdTable_.emplace(std::make_pair(std::move(className), CibIdData(std::move(clsIdName), classId)));
  if (!res.second)
    return nullptr;
  return &(res.first->second);
}

/*!
 * @return "namespace X { namespace Y {" for X::Y as input.
 */
static std::string expandNs(std::string::const_iterator beg, std::string::const_iterator end)
{
  if (beg == end)
    return std::string();
  if (*beg == ':')
    return expandNs(beg + 2, end);
  auto itr = std::adjacent_find(beg, end, [](char c1, char c2) -> bool { return c1 == c2 && c1 == ':'; });

  auto expanded = std::string("namespace ") + std::string(beg, itr) + " {";
  if (itr == end)
    return expanded;
  else
    return expanded + std::string(" ") + expandNs(itr + 2, end);
}

/*!
 * @return "}}" for X::Y as input.
 * @sa expandNs.
 */
static std::string closingNs(std::string::const_iterator beg, std::string::const_iterator end)
{
  if (beg == end)
    return std::string();
  if (*beg == ':')
    return closingNs(beg + 2, end);
  auto        itr = std::adjacent_find(beg, end, [](char c1, char c2) -> bool { return c1 == c2 && c1 == ':'; });
  std::string closingBraces = "}";
  if (itr == end)
    return closingBraces;
  else
    return closingBraces + closingNs(itr + 2, end);
}

bool CibIdMgr::saveIds(const std::string& idsFilePath, const CibParams& cibParams) const
{
  std::ofstream stm(idsFilePath, std::ios_base::out);
  stm << "// DO NOT EDIT THIS FILE\n\n";
  stm << "#pragma once\n\n";
  CppIndent indentation;
  stm << "namespace __zz_cib_ { namespace " << cibParams.moduleName << " { namespace __zz_cib_classid {\n";
  stm << ++indentation << "enum {\n";
  ++indentation;
  for (const auto& cls : cibIdTable_)
  {
    const auto& longName  = cls.first;
    const auto& cibIdData = cls.second;
    stm << indentation << "//#= " << longName << "\n";
    stm << indentation << cibIdData.getIdName() << " = " << cibIdData.getId() << ",\n";
  }
  stm << indentation << "__zz_cib_next_class_id = " << nextClassId_ << "\n";
  stm << --indentation << "};\n";
  stm << --indentation << "}}}\n\n";

  for (const auto& cls : cibIdTable_)
  {
    const auto& classIdName = cls.first;
    const auto& cibIdData   = cls.second;
    stm << "namespace __zz_cib_ { " << expandNs(classIdName.begin(), classIdName.end())
        << " namespace __zz_cib_methodid {\n";
    stm << ++indentation << "enum {\n";
    ++indentation;
    auto nextMethodId = cls.second.forEachMethod(
      [&](CibMethodId methodId, const CibMethodCAPIName& methodName, const CibMethodSignature& methodSig) {
        stm << indentation << "//#= " << methodSig << '\n';
        stm << indentation << methodName << " = " << methodId << ",\n";
      });
    stm << indentation << "__zz_cib_next_method_id = " << nextMethodId << '\n';
    stm << --indentation << "};\n";
    stm << --indentation << closingNs(classIdName.begin(), classIdName.end()) << "}}\n\n";
  }
  return true;
}
