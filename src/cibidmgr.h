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

//////////////////////////////////////////////////////////////////////////

using CibMethodIdTable = std::map<CibMethodSignature, std::pair<CibMethodId, CibMethodCAPIName>>;

struct CibMethodInfo
{
  CibMethodCAPIName     capiName;  //!< Name of C API function.
  CibMethodSignature    methodSig; //!< Exact signature that is used to declare the method
  CibMethodAbiSignature abiSig;    //!< Signature cib uses for cross component MethodTable.
};

/*!
 * Represents an item in ClassId enum and all method-ids of corresponding class.
 */
class CibIdData
{
  using CibMethodIdToMethodMap = std::map<CibMethodId, std::pair<CibMethodCAPIName, CibMethodSignature>>;
  CibClassId             classId;
  CibFullClassNsName     fullNsName;
  CibMethodIdTable       methodIdTable;
  CibMethodIdToMethodMap methodIdToMethodMap;
  CibMethodId            nextMethodId{0};

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

  bool hasMethod(const CibMethodSignature& uniqName)
  {
    return methodIdTable.count(uniqName) > 0;
  }

  CibMethodCAPIName getMethodCApiName(const CibMethodSignature& uniqName) const
  {
    auto itr = methodIdTable.find(uniqName);
    return (itr == methodIdTable.end()) ? CibMethodCAPIName() : itr->second.second;
  }

  void addMethod(CibMethodSignature signature, std::string methodName, CibMethodId methodId = kInvalidMethodId)
  {
    if (methodId == kInvalidMethodId)
    {
      methodId = nextMethodId;
      methodName += "_" + std::to_string(methodId);
    }
    methodIdToMethodMap.emplace(methodId, std::make_pair(methodName, signature));
    methodIdTable.emplace(std::move(signature), std::make_pair(methodId, std::move(methodName)));
    ++nextMethodId;
  }

  void setNextMethodId(CibMethodId methodId)
  {
    // assert(nextMethodId isn't already used);
    nextMethodId = methodId;
  }

public:
  using MethodVisitor = std::function<void(CibMethodId, const CibMethodCAPIName&, const CibMethodSignature&)>;
  /*!
   * Visits each methods in ascending order of their id.
   * @return Id of next method if that gets added.
   */
  CibMethodId forEachMethod(MethodVisitor methodVisitor) const;
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
    saveIds((cibParams_.binderPath / cibParams_.cibIdFilename()).string(), cibParams_);
    saveIds((cibParams_.outputPath / bfs::path(cibParams_.cibInternalDirName) / cibParams_.cibIdFilename()).string(),
            cibParams_);
  }

public:
  void              assignIds(const CibHelper& helper, const CibParams& cibParams);
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
  CibMethodId forEachMethod(const std::string& className, CibIdData::MethodVisitor methodVisitor) const;
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
  CibIdTable       cibIdTable_;
  const CibParams& cibParams_;
  CibClassId       nextClassId_{1};
};

inline CibIdData* CibIdMgr::addClass(CibFullClassName   className,
                                     CibFullClassNsName fullClassNsName,
                                     const std::string& classId)
{
  return addClass(fullClassNsName, className, atoi(classId.c_str()));
}

inline CibMethodId CibIdData::forEachMethod(MethodVisitor methodVisitor) const
{
  for (const auto& item : methodIdToMethodMap)
    methodVisitor(item.first, item.second.first, item.second.second);
  return nextMethodId;
}

inline size_t CibIdData::numMethods() const
{
  return methodIdToMethodMap.empty() ? 0 : 1 + methodIdToMethodMap.rbegin()->first;
}

inline CibMethodId CibIdMgr::forEachMethod(const std::string& className, CibIdData::MethodVisitor methodVisitor) const
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
