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
#include "cibfunction_helper.h"
#include "cibutil.h"

#include "cppparser.h"

#include "cppcompound-accessor.h"

#include <boost/tokenizer.hpp>

#include <ostream>
#include <unordered_map>
#include <vector>

//////////////////////////////////////////////////////////////////////////

namespace {

std::string kProxyMgrMethods[3] = {"__zz_cib_RegisterProxy"};

static CibId parseIdExpression(CppConstExprEPtr enumItemVal)
{
  if (enumItemVal->expr1_.type == CppExprAtom::kAtom && enumItemVal->expr1_.atom != nullptr)
  {
    auto x = *enumItemVal->expr1_.atom;
    return atoi(enumItemVal->expr1_.atom->c_str());
  }
  return 0;
}

} // namespace

bool CibIdMgr::loadIds(const std::string& idsFilePath)
{
  CppParser cppparser;
  auto      idCmp = cppparser.parseFile(idsFilePath.c_str());
  if (idCmp == nullptr)
    return false;
  std::unordered_map<CibFullClassNsName, CibFullClassName> nsNameToNameMap;
  traverse(idCmp, [&](const CppObj* cppObj) -> bool {
    if (cppObj->objType_ == CppObjType::kEnum)
    {
      auto* enumObj = static_cast<const CppEnum*>(cppObj);
      if (!enumObj->itemList_)
        return false;
      static const std::string kClassIdName       = "__zz_cib_classId";
      static const std::string kMethodIdName      = "__zz_cib_MethodId";
      static const std::string kNextClsIdName     = "__zz_cib_nextClassId";
      static const std::string kInternalClsIdName = "__zz_cib_internalClassId";
      auto                     extractClassName   = [](const CppCompound* classObj) -> std::string {
        if (!classObj->members().empty() && (classObj->members().front()->objType_ == CppObjType::kDocComment))
        {
          static const std::string kClsNameCommentStart = "//#= FullClassName: ";
          const CppDocCommentEPtr  cmnt                 = classObj->members().front();
          auto                     startPos             = cmnt->doc_.find(kClsNameCommentStart);
          if (startPos != std::string::npos)
            return cmnt->doc_.substr(startPos + kClsNameCommentStart.size());
        }
        return "";
      };
      auto extractClassNsName = [](const CppCompound* classObj) -> std::string {
        return fullName(classObj).substr(25); // skip "__zz_cib_::__zz_cib_ids::"
      };
      if (enumObj->name_ == kMethodIdName)
      {
        auto classNsName = extractClassNsName(enumObj->owner());
        auto itr         = nsNameToNameMap.find(classNsName);
        if (itr != nsNameToNameMap.end())
          loadMethodIds(itr->second, static_cast<const CppEnum*>(cppObj));
      }
      else if (enumObj->itemList_->front()->name_ == kClassIdName)
      {
        auto clsName   = extractClassName(enumObj->owner());
        auto clsNsName = extractClassNsName(enumObj->owner());
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
      else if (enumObj->itemList_->front()->name_ == kInternalClsIdName)
      {
        internalClassId_ = parseIdExpression(enumObj->itemList_->front()->val_);
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
      if (CppDocCommentEPtr docComment = item->val_)
      {
        auto itr  = docComment->doc_.find('/');
        signature = docComment->doc_.substr(itr + 5);
      }
    }
    else if (!signature.empty())
    {
      CppExprEPtr val = item->val_;
      if (val->expr1_.type == CppExprAtom::kAtom && val->expr1_.atom != nullptr)
        idInfos.emplace_back(std::move(signature), item->name_, atoi(val->expr1_.atom->c_str()));
      else
        signature.clear();
    }
    else if (item->name_.compare(0, 14, "__zz_cib_next_") == 0)
    {
      CppExprEPtr val = item->val_;
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
    methodIdTable.addOrUpdateMethod(std::get<0>(item), std::get<1>(item), nullptr, std::get<2>(item));
  if (methodIdTable.getNextMethodId() < nextMethodId)
    methodIdTable.setNextMethodId(nextMethodId);
}

void CibIdMgr::assignIds(const CibHelper& helper, const CibParams& cibParams)
{
  // First create Ids for global functions
  const CppCompoundArray& fileAsts = helper.getProgram().getFileAsts();
  for (auto& fileAst : fileAsts)
  {
    assignNsName(static_cast<CibCompound*>(fileAst.get()), helper, cibParams);
  }
  for (auto& fileAst : fileAsts)
  {
    assignIds(static_cast<CibCompound*>(fileAst.get()), helper, cibParams, false);
    assignIds(static_cast<CibCompound*>(fileAst.get()), helper, cibParams, true);
  }
}

void CibIdMgr::assignNsName(CibCompound* compound, const CibHelper& helper, const CibParams& cibParams)
{
  if (compound->isTemplated())
  {
    compound->forEachTemplateInstance([&](CibCompound* ins) { this->assignNsName(ins, helper, cibParams); });
    return;
  }

  if (nsNameAssigned_.count(compound))
    return;
  nsNameAssigned_.insert(compound);
  if (compound->isTemplateInstance())
  {
    compound->forEachOuter([&](CibCompound* outer) {
      this->assignNsName(outer, helper, cibParams);
      return false;
    });
  }

  if (compound->isNsNameEmpty())
  {
    if (isCppFile(compound))
    {
      compound->setNsName(cibParams.globalNsName());
    }
    else
    {
      auto className                = compound->longName();
      const auto [clsId, cibIdData] = [&]() {
        const auto itr = cibIdTable_.find(className);
        if (itr != cibIdTable_.end())
        {
          const CibIdData* cibIdData = &itr->second;
          return std::make_pair(cibIdData->getId(), cibIdData);
        }
        return std::make_pair(nextClassId_++, (const CibIdData*) nullptr);
      }();
      if (cibParams.alwaysUseNsName || compound->isTemplateInstance())
        compound->setClassId(clsId);
      if (cibIdData == nullptr)
      {
        auto classNsName = compound->fullNsName();
        addClass(std::move(className), std::move(classNsName), clsId);
      }
    }
  }

  for (auto& mem : compound->members())
  {
    if (!isPrivate(mem) && isNamespaceLike(mem))
    {
      assignNsName(CibCompoundEPtr(mem), helper, cibParams);
    }
  }
}

void CibIdMgr::assignIds(CibCompound*     compound,
                         const CibHelper& helper,
                         const CibParams& cibParams,
                         bool             forGenericProxy)
{
  if (idsAssigned_.count({compound, forGenericProxy}))
    return;
  idsAssigned_.insert({compound, forGenericProxy});

  // if (!compound->isShared())
  //  return;
  if (compound->isTemplated())
  {
    compound->forEachTemplateInstance(
      [&](CibCompound* ins) { this->assignIds(ins, helper, cibParams, forGenericProxy); });
    return;
  }
  if (compound->name().empty())
    return;
  // Dummy loop
  do
  {
    if (!forGenericProxy && !compound->needsBridging() && !compound->isShared())
      break;
    if (forGenericProxy && (!compound->needsGenericProxyDefinition() || compound->getAllVirtualMethods().empty()))
      break;

    const auto className = forGenericProxy ? compound->longName() + "::__zz_cib_Generic" : compound->longName();
    CibIdData* cibIdData = nullptr;
    auto       itr       = cibIdTable_.find(className);
    if (itr == cibIdTable_.end())
    {
      const auto clsId       = nextClassId_++;
      const auto classNsName = forGenericProxy ? compound->fullNsName() + "::__zz_cib_Generic" : compound->fullNsName();
      cibIdData              = addClass(className, classNsName, clsId);
    }
    else
    {
      cibIdData = &itr->second;
    }

    const auto& methods   = forGenericProxy ? compound->getAllVirtualMethods() : compound->getNeedsBridgingMethods();
    auto        addMethod = [&](const CibFunctionHelper& func) {
      const auto sig = func.signature(helper);
      cibIdData->addOrUpdateMethod(std::move(sig), func.procName(), func);
    };
    for (auto& func : methods)
    {
      if (isPrivate(func) && !func.isPureVirtual())
        continue;
      // TODO: revisit here, we probably should not need protected too but wxWidgets had some issues.
      if (!forGenericProxy && isPrivate(func) && func.isPureVirtual())
        continue;
      addMethod(func);
    }
    if (forGenericProxy)
      addMethod(compound->dtor());
    if (!forGenericProxy)
    {
      compound->forEachAncestor(CppAccessType::kPublic, [&](const CibCompound* parent) {
        this->assignIds(const_cast<CibCompound*>(parent), helper, cibParams, forGenericProxy);
        if (parent->isShared() || !parent->isEmpty())
        {
          auto castToMethodName = compound->castToBaseName(parent, cibParams);
          if (!cibIdData->hasMethod(castToMethodName))
            cibIdData->addOrUpdateMethod(castToMethodName, castToMethodName);
          if (!cibParams.noRtti)
          {
            auto castFromMethodName = compound->castFromBaseName(parent, cibParams);
            if (!cibIdData->hasMethod(castFromMethodName))
              cibIdData->addOrUpdateMethod(castFromMethodName, castFromMethodName);
          }
        }
        return false;
      });
      if (compound->isFacadeLike() && !cibParams_.noRtti)
      {
        if (!cibIdData->hasMethod("__zz_cib_GetClassId"))
          cibIdData->addOrUpdateMethod("__zz_cib_GetClassId", "__zz_cib_GetClassId");
      }
      if (compound->needsGenericProxyDefinition())
      {
        if (!cibIdData->hasMethod("__zz_cib_ReleaseProxy"))
          cibIdData->addOrUpdateMethod("__zz_cib_ReleaseProxy", "__zz_cib_ReleaseProxy");
      }

      if (compound->isSharedProxy() && compound->libraryManagesProxy())
      {
        for (int i = 0; i < 1; ++i)
        {
          if (!cibIdData->hasMethod(kProxyMgrMethods[i]))
            cibIdData->addOrUpdateMethod(kProxyMgrMethods[i], kProxyMgrMethods[i]);
        }
      }
    }
  } while (false);
  for (auto& mem : compound->members())
  {
    if (!isPrivate(mem) && isNamespaceLike(mem))
    {
      assignIds(CibCompoundEPtr(mem), helper, cibParams, forGenericProxy);
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

bool CibIdMgr::saveIds(const std::string& idsFilePath, const CibParams& cibParams) const
{
  std::ofstream stm(idsFilePath, std::ios_base::out);
  stm << "#pragma once\n\n";
  CppIndent indentation;
  for (const auto& cls : cibIdTable_)
  {
    const auto& className   = cls.first;
    const auto& cibIdData   = cls.second;
    const auto& classNsName = cls.second.getFullNsName();
    stm << "namespace __zz_cib_ { namespace __zz_cib_ids { " << expandNs(classNsName.begin(), classNsName.end())
        << '\n';
    stm << ++indentation << "//#= FullClassName: " << className << '\n';
    stm << indentation << "enum { __zz_cib_classId = " << cibIdData.getId() << " };\n";
    stm << --indentation << closingNs(classNsName.begin(), classNsName.end()) << "}}\n\n";
  }
  stm << indentation << "namespace __zz_cib_ { namespace " << cibParams.moduleName << " {\n";
  stm << ++indentation << "enum { __zz_cib_nextClassId = " << nextClassId_ << " };\n";
  stm << indentation << "enum { __zz_cib_internalClassId = " << internalClassId_ << " };\n";
  --indentation;
  stm << --indentation << "}}\n\n";

  for (const auto& cls : cibIdTable_)
  {
    if (cls.second.numMethods() == 0)
      continue;
    const auto& cibIdData   = cls.second;
    const auto& classNsName = cibIdData.getFullNsName();
    stm << "namespace __zz_cib_ { namespace __zz_cib_ids { " << expandNs(classNsName.begin(), classNsName.end()) << '\n'
        << ++indentation << "enum __zz_cib_MethodId {\n";
    ++indentation;
    auto nextMethodId = cibIdData.forEachMethod([&](const CibMethodIdTableEntry& methodIdEntry) {
      stm << indentation << "//#= " << methodIdEntry.sig << '\n';
      stm << indentation << methodIdEntry.name << " = " << methodIdEntry.id << ",\n";
    });
    stm << indentation << "__zz_cib_nextMethodId = " << nextMethodId << '\n';
    stm << --indentation << "};\n";
    stm << --indentation << closingNs(classNsName.begin(), classNsName.end()) << "}}\n\n";
  }
  return true;
}

void CibIdMgr::forEachCompound(CompoundVisitor visitor) const
{
  for (const auto& cls : cibIdTable_)
  {
    if (cls.second.numMethods() == 0)
      continue;
    const auto&              className        = cls.first;
    const auto&              cibIdData        = cls.second;
    const auto&              classNsName      = cls.second.getFullNsName();
    static const std::string genericProxyName = "__zz_cib_Generic";
    if (classNsName.length() > 2 + genericProxyName.length())
    {
      if (strcmp(classNsName.c_str() + classNsName.length() - genericProxyName.length(), genericProxyName.c_str()) == 0)
        continue;
    }
    visitor(className, classNsName, cibIdData);
  }
}
