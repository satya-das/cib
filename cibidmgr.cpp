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
#include <unordered_map>
#include <vector>

//////////////////////////////////////////////////////////////////////////

static CibId parseIdExpression(const CppExpr* enumItemVal)
{
  if (enumItemVal->expr1_.type == CppExprAtom::kAtom && enumItemVal->expr1_.atom != nullptr)
  {
    auto x = *enumItemVal->expr1_.atom;
    return atoi(enumItemVal->expr1_.atom->c_str());
  }
  return 0;
}

bool CibIdMgr::loadIds(const std::string& idsFilePath)
{
  CppParser cppparser;
  auto      idCmp = cppparser.parseFile(idsFilePath.c_str());
  if (idCmp == nullptr)
    return false;
  std::unordered_map<CibFullClassNsName, CibFullClassName> nsNameToNameMap;
  idCmp->traverse([&](const CppObj* cppObj) -> bool {
    if (cppObj->objType_ == CppObj::kEnum)
    {
      auto* enumObj = static_cast<const CppEnum*>(cppObj);
      if (!enumObj->itemList_)
        return false;
      static const std::string kClassIdName     = "__zz_cib_classid";
      static const std::string kMethodIdName    = "__zz_cib_methodid";
      static const std::string kNextClsIdName   = "__zz_cib_next_class_id";
      auto                     extractClassName = [](const CppCompound* classObj) -> std::string {
        if (!classObj->members_.empty() && (classObj->members_.front()->objType_ == CppObj::kDocComment))
        {
          static const std::string kClsNameCommentStart = "//#= FullClassName: ";
          const auto*              cmnt = static_cast<CppDocComment*>(classObj->members_.front());
          auto                     startPos = cmnt->doc_.find(kClsNameCommentStart);
          if (startPos != std::string::npos)
            return cmnt->doc_.substr(startPos + kClsNameCommentStart.size());
        }
        return "";
      };
      auto extractClassNsName = [](const CppCompound* classObj) -> std::string {
        return classObj->fullName().substr(11); // skip "__zz_cib_::"
      };
      if (cppObj->owner_->name_ == kMethodIdName)
      {
        auto classNsName = extractClassNsName(cppObj->owner_->owner_);
        auto itr         = nsNameToNameMap.find(classNsName);
        if (itr != nsNameToNameMap.end())
          loadMethodIds(itr->second, static_cast<const CppEnum*>(cppObj));
      }
      else if (enumObj->itemList_->front()->name_ == kClassIdName)
      {
        auto clsName   = extractClassName(enumObj->owner_);
        auto clsNsName = extractClassNsName(enumObj->owner_);
        auto clsId     = parseIdExpression(enumObj->itemList_->front()->val_);
        if (clsId != 0)
          addClass(clsName, clsNsName, clsId);
        if (!clsName.empty() && !clsNsName.empty())
          nsNameToNameMap[clsNsName] = clsName;
      }
      else if (enumObj->itemList_->front()->name_ == kNextClsIdName)
      {
        auto nextClsId = parseIdExpression(enumObj->itemList_->front()->val_);
        if (nextClassId_ < nextClsId)
          nextClassId_ = nextClsId;
      }
    }
    return false;
  });
  return true;
}

using IdInfo = std::tuple<CibMethodSignature, CibName, CibId>;

std::pair<std::vector<IdInfo>, CibId> parseIdEnum(const CppEnum* classIdEnum)
{
  std::vector<IdInfo> idInfos;
  CibMethodSignature  signature;
  CibId               nextIdValue = 0;
  for (auto item : *classIdEnum->itemList_)
  {
    if (item->name_.empty())
    {
      if (item->anyItem_ && item->anyItem_->objType_ == CppObj::kDocComment)
      {
        auto docComment = static_cast<const CppDocComment*>(item->anyItem_);
        auto itr        = docComment->doc_.find('/');
        signature       = docComment->doc_.substr(itr + 5);
      }
    }
    else if (!signature.empty())
    {
      auto val = item->val_;
      if (val->expr1_.type == CppExprAtom::kAtom && val->expr1_.atom != nullptr)
        idInfos.emplace_back(std::move(signature), item->name_, atoi(val->expr1_.atom->c_str()));
      else
        signature.clear();
    }
    else if (item->name_.compare(0, 14, "__zz_cib_next_") == 0)
    {
      auto val = item->val_;
      if (val->expr1_.type == CppExprAtom::kAtom && val->expr1_.atom != nullptr)
        nextIdValue = atoi(val->expr1_.atom->c_str());
    }
  }

  return std::make_pair(std::move(idInfos), nextIdValue);
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

void CibIdMgr::assignIds(const CibHelper& helper, const CibParams& cibParams)
{
  // First create Ids for global functions
  const CppCompoundArray& fileDOMs = helper.getProgram().getFileDOMs();
  for (auto fileCmpound : fileDOMs)
  {
    assignIds(static_cast<CibCppCompound*>(fileCmpound), helper, cibParams, false);
    assignIds(static_cast<CibCppCompound*>(fileCmpound), helper, cibParams, true);
  }
}

void CibIdMgr::assignIds(CibCppCompound*  compound,
                         const CibHelper& helper,
                         const CibParams& cibParams,
                         bool             forGenericProxy)
{
  // if (!compound->isShared())
  //  return;
  if (compound->isTemplated())
  {
    compound->forEachTemplateInstance(
      [&](const TemplateArgs&, CibCppCompound* ins) { this->assignIds(ins, helper, cibParams, forGenericProxy); });
    return;
  }
  if (compound->name().empty())
    return;
  // Dummy loop
  do
  {
    if (!forGenericProxy && compound->getNeedsBridgingMethods().empty())
    {
      break;
    }
    if (forGenericProxy && (!compound->needsGenericProxyDefinition() || compound->getAllVirtualMethods().empty()))
    {
      break;
    }
    const auto className = forGenericProxy ? compound->longName() + "::__zz_cib_GenericProxy" : compound->longName();
    CibIdData* cibIdData = nullptr;
    auto       itr       = cibIdTable_.find(className);
    if (itr == cibIdTable_.end())
    {
      auto clsId = nextClassId_++;
      if (compound->isTemplateInstance())
        compound->setNsName("__zz_cib_Class" + std::to_string(clsId));
      const auto classNsName =
        forGenericProxy ? compound->fullNsName() + "::__zz_cib_GenericProxy" : compound->fullNsName();
      cibIdData = addClass(className, classNsName, clsId);
    }
    else
    {
      cibIdData = &itr->second;
    }
    const auto& methods   = forGenericProxy ? compound->getAllVirtualMethods() : compound->getNeedsBridgingMethods();
    auto        addMethod = [&](const CibFunctionHelper& func) {
      auto&& sig = func.signature(helper);
      if (!cibIdData->hasMethod(func.signature(helper)))
        cibIdData->addMethod(sig, func.procName());
    };
    for (auto& func : methods)
      addMethod(func);
    if (forGenericProxy)
      addMethod(compound->getDtor());
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
  } while (false);
  for (auto mem : compound->members_)
  {
    if (isMemberPublic(mem->prot_, compound->compoundType_) && mem->isNamespaceLike())
    {
      assignIds(static_cast<CibCppCompound*>(mem), helper, cibParams, forGenericProxy);
    }
  }
}

CibIdData* CibIdMgr::addClass(CibFullClassName className, CibFullClassNsName fullClassNsName, CibClassId classId)
{
  if (classId == 0)
    classId = nextClassId_++;
  else if (nextClassId_ < classId + 1)
    nextClassId_ = classId + 1;
  auto res = cibIdTable_.emplace(std::make_pair(std::move(className), CibIdData(classId, std::move(fullClassNsName))));
  // if (!res.second)
  //   return nullptr;
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
  for (const auto& cls : cibIdTable_)
  {
    const auto& className   = cls.first;
    const auto& cibIdData   = cls.second;
    const auto& classNsName = cls.second.getFullNsName();
    stm << "namespace __zz_cib_ { " << expandNs(classNsName.begin(), classNsName.end()) << '\n';
    stm << ++indentation << "//#= FullClassName: " << className << '\n';
    stm << indentation << "enum { __zz_cib_classid = " << cibIdData.getId() << " };\n";
    stm << --indentation << closingNs(classNsName.begin(), classNsName.end()) << "}\n\n";
  }
  stm << indentation << "namespace __zz_cib_ { namespace " << cibParams.moduleName << " {\n";
  stm << ++indentation << "enum { __zz_cib_next_class_id = " << nextClassId_ << " };\n";
  --indentation;
  stm << --indentation << "}}\n\n";

  for (const auto& cls : cibIdTable_)
  {
    const auto& cibIdData   = cls.second;
    const auto& classNsName = cls.second.getFullNsName();
    stm << "namespace __zz_cib_ { " << expandNs(classNsName.begin(), classNsName.end())
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
    stm << --indentation << closingNs(classNsName.begin(), classNsName.end()) << "}}\n\n";
  }
  return true;
}
