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

#pragma once

#include "cppindent.h"
#include "cppwriter.h"

#include "cibhelper.h"
#include "cibparams.h"
#include "cibtypes.h"

#include <cstdint>
#include <map>
#include <unordered_set>

//////////////////////////////////////////////////////////////////////////

struct CibMethodIdTableEntry
{
  CibMethodIdTableEntry(CibMethodId _id, CibMethodSignature _sig, CibMethodCAPIName _name, const CppObj* _obj)
    : id(_id)
    , sig(std::move(_sig))
    , name(std::move(_name))
    , obj(_obj)
  {
  }

  CibMethodId        id{kInvalidMethodId};
  CibMethodSignature sig;
  CibMethodCAPIName  name;
  const CppObj*      obj{nullptr};
};

using MethodIdVisitor = std::function<void(const CibMethodIdTableEntry&)>;

class CibMethodIdTable
{
public:
  const CibMethodIdTableEntry& addOrUpdateMethod(CibMethodId        methodId,
                                                 const CppObj*      obj,
                                                 CibMethodSignature signature,
                                                 std::string        methodName)
  {
    auto       idItr              = idIndex.find(methodId);
    const auto entryAlreadyExists = (idItr != idIndex.end());

    if (entryAlreadyExists)
    {
      auto& entry = data[idItr->second];
      entry.obj   = obj;
      return entry;
    }
    else
    {
      const auto allDataValid = (!signature.empty() && !methodName.empty());
      assert(allDataValid);
      (void) allDataValid;
      const auto entryId  = data.size();
      idIndex[methodId]   = entryId;
      sigIndex[signature] = entryId;
      data.emplace_back(methodId, std::move(signature), std::move(methodName), obj);
      return data[entryId];
    }
  }

  size_t numMethods() const
  {
    return data.empty() ? 0 : 1 + idIndex.rbegin()->first;
  }

  bool hasMethod(const CibMethodSignature& uniqName) const
  {
    return sigIndex.count(uniqName) > 0;
  }

  const CibMethodIdTableEntry* find(const CibMethodSignature& uniqName) const
  {
    const auto sigItr = sigIndex.find(uniqName);
    if (sigItr == sigIndex.end())
      return nullptr;
    return &data[sigItr->second];
  }

  void forEachMethod(MethodIdVisitor methodIdVisitor) const
  {
    for (const auto& item : idIndex)
      methodIdVisitor(data[item.second]);
  }

private:
  using MethodIdTableData  = std::vector<CibMethodIdTableEntry>;
  using MethodIdTableRowId = MethodIdTableData::size_type;
  using MethodIdIndex      = std::map<CibMethodId, MethodIdTableRowId>;
  using MethodSigIndex     = std::map<CibMethodSignature, MethodIdTableRowId>;

  MethodIdTableData data;
  MethodIdIndex     idIndex;
  MethodSigIndex    sigIndex;
};

/*!
 * Represents an item in ClassId enum and all method-ids of corresponding class.
 */
class CibIdData
{
  using CibMethodsSet = std::unordered_set<CibMethodCAPIName>;

  CibClassId         classId;
  CibFullClassNsName fullNsName;
  CibMethodIdTable   methodIdTable;
  CibMethodId        nextMethodId{0};
  CibMethodsSet      allCApiNames;

public:
  CibIdData(CibClassId cId, CibFullClassNsName fullClassNsName)
    : classId(cId)
    , fullNsName(std::move(fullClassNsName))
  {
  }

  CibClassId getId() const
  {
    return classId;
  }

  const CibFullClassNsName& getFullNsName() const
  {
    return fullNsName;
  }
  CibMethodId getNextMethodId() const
  {
    return nextMethodId;
  }

  bool hasMethod(const CibMethodSignature& uniqName) const
  {
    return methodIdTable.hasMethod(uniqName);
  }

  CibMethodCAPIName getMethodCApiName(const CibMethodSignature& uniqName) const
  {
    const auto* entry = methodIdTable.find(uniqName);
    return (entry == nullptr) ? CibMethodCAPIName() : entry->name;
  }

  void addOrUpdateMethod(CibMethodSignature signature,
                         std::string        methodName,
                         const CppObj*      obj      = nullptr,
                         CibMethodId        methodId = kInvalidMethodId)
  {
    if (methodId == kInvalidMethodId)
    {
      methodId = nextMethodId;
      // if (allCApiNames.count(methodName) != 0)
      if (signature != methodName)
        methodName += "_" + std::to_string(methodId);
      assert(allCApiNames.count(methodName) == 0);
    }
    allCApiNames.insert(methodName);
    methodIdTable.addOrUpdateMethod(methodId, obj, std::move(signature), std::move(methodName));
    ++nextMethodId;
  }

  void setNextMethodId(CibMethodId methodId)
  {
    // assert(nextMethodId isn't already used);
    nextMethodId = methodId;
  }

public:
  /*!
   * Visits each methods in ascending order of their id.
   * @return Id of next method if that gets added.
   */
  CibMethodId forEachMethod(MethodIdVisitor methodVisitor) const;
  size_t      numMethods() const;
};

using CibIdTable = std::map<CibFullClassName, CibIdData>;

/*!
 * Manages Ids of all exportable entities of a library.
 * It can emit enum for Ids which can be used while calling GetMetaInterface() and GetMethod() APIs.
 * It can read the previously emitted enum and use the same integer values to
 * ensure that IDs for all exportable entities remain unchanged.
 */
class CibIdMgr
{
public:
  CibIdMgr(const CibParams& cibParams)
    : cibParams_(cibParams)
  {
    loadIds(cibParams.inputCibIdFile.string());
  }

  ~CibIdMgr()
  {
    saveIds((cibParams_.libGlueDir / cibParams_.cibIdFilename()).string(), cibParams_);
    saveIds((cibParams_.outputPath / bfs::path(cibParams_.cibInternalDirName) / cibParams_.cibIdFilename()).string(),
            cibParams_);
  }

public:
  void              assignIds(const CibHelper& helper, const CibParams& cibParams);
  void              assignNsName(CibCompound* compound, const CibHelper& helper, const CibParams& cibParams);
  bool              saveIds(const std::string& idsFilePath, const CibParams& cibParams) const;
  const CibIdTable& getCibIdTable() const
  {
    return cibIdTable_;
  }
  const CibIdData* getCibIdData(const std::string& className) const
  {
    auto itr = cibIdTable_.find(className);
    return itr == cibIdTable_.end() ? nullptr : &itr->second;
  }

public:
  using CompoundVisitor = std::function<void(const CibFullClassName&, const CibFullClassNsName&, const CibIdData&)>;
  void forEachCompound(CompoundVisitor visitor) const;
  /*!
   * Visits each method of a class.
   * @return Id of next method if that gets added.
   */
  CibMethodId forEachMethod(const std::string& className, MethodIdVisitor methodVisitor) const;
  size_t      numMethods(const std::string& className) const;

private:
  void assignIds(CibCompound* compound, const CibHelper& helper, const CibParams& cibParams, bool forGenericProxy);

private:
  /*!
   * Loads IDs from file emitted in previous run.
   * @return true on success. Will return false if it is called more than once or it is called after
   * assignIds().
   */
  bool       loadIds(const std::string& idsFilePath);
  void       loadMethodIds(std::string className, const CppEnum* methodIdEnum);
  CibIdData* addClass(CibFullClassName className, CibFullClassNsName fullClassNsName, CibClassId classId = 0);
  CibIdData* addClass(CibFullClassName className, CibFullClassNsName fullClassNsName, const std::string& classId);

private:
  CibIdTable                                    cibIdTable_;
  const CibParams&                              cibParams_;
  CibClassId                                    nextClassId_{256};
  CibClassId                                    internalClassId_{1};
  std::set<std::pair<const CibCompound*, bool>> idsAssigned_;
  std::set<const CibCompound*>                  nsNameAssigned_;
};

inline CibIdData* CibIdMgr::addClass(CibFullClassName   className,
                                     CibFullClassNsName fullClassNsName,
                                     const std::string& classId)
{
  return addClass(fullClassNsName, className, atoi(classId.c_str()));
}

inline CibMethodId CibIdData::forEachMethod(MethodIdVisitor methodVisitor) const
{
  methodIdTable.forEachMethod(methodVisitor);
  return nextMethodId;
}

inline size_t CibIdData::numMethods() const
{
  return methodIdTable.numMethods();
}

inline CibMethodId CibIdMgr::forEachMethod(const std::string& className, MethodIdVisitor methodVisitor) const
{
  auto itr = cibIdTable_.find(className);
  if (itr == cibIdTable_.end())
    return 0;
  return itr->second.forEachMethod(methodVisitor);
}

inline size_t CibIdMgr::numMethods(const std::string& className) const
{
  auto itr = cibIdTable_.find(className);
  if (itr == cibIdTable_.end())
    return 0;
  return itr->second.numMethods();
}
