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

#ifndef __CIB_ID_MGR_H__
#define __CIB_ID_MGR_H__

#include "cppwriter.h"
#include "cppindent.h"

#include "cppprogex.h"
#include "cib.h"
#include "cibparams.h"

#include <cstdint>
#include <map>

//////////////////////////////////////////////////////////////////////////

using CibId       = std::uint32_t;
using CibClassId  = CibId;
using CibMethodId = CibId;

using CibIdIdentifier = std::string;
using CibIdName       = std::string;
/*!
 * Signature of method without name of parameters.
 * The purpose is to create a unique name within the class/namespace to which it belongs.
 */
using CibMethodSignature = CibIdIdentifier;
/*!
 * CAPI Name of method. It is formed by appending method id to original name of method
 */
using CibMethodCAPIName = std::string;
using CibMethodIdTable = std::map<CibMethodSignature, std::pair<CibMethodId, CibMethodCAPIName>>;

/*!
 * Represents an item in ClassId enum and all method-ids of corresponding class.
 */
class CibIdData
{
  using CibMethodIdToMethodMap = std::map<CibMethodId, std::pair<CibMethodCAPIName, CibMethodSignature>>;
  std::string             classIdName; ///< Name of item in enum
  CibClassId              classId;
  CibMethodIdTable        methodIdTable;
  CibMethodIdToMethodMap  methodIdToMethodMap;
  CibMethodId             nextMethodId{ 1 };

public:
  CibIdData(std::string cIdName, CibClassId cId)
    : classIdName(std::move(cIdName))
    , classId(cId)
  {}

  const std::string& getIdName() const {
    return classIdName;
  }

  CibClassId getId() const {
    return classId;
  }

  CibMethodId getNextMethodId() const {
    return nextMethodId;
  }

  bool hasMethod(const CibMethodSignature& uniqName) {
    return methodIdTable.count(uniqName) > 0;
  }

  CibMethodCAPIName getMethodCApiName(const CibMethodSignature& uniqName) const {
    auto itr = methodIdTable.find(uniqName);
    return (itr == methodIdTable.end()) ? CibMethodCAPIName() : itr->second.second;
  }

  void addMethod(CibMethodSignature signature, std::string methodName, CibMethodId methodId = 0) {
    if (methodId == 0) {
      methodId = nextMethodId;
      methodName += "_" + std::to_string(methodId);
    }
    methodIdToMethodMap.emplace(methodId, std::make_pair(methodName, signature));
    methodIdTable.emplace(std::move(signature), std::make_pair(methodId, std::move(methodName)));
    ++nextMethodId;
  }

  void setNextMethodId(CibMethodId methodId) {
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
  size_t numMethods() const;
};

using CibIdTable = std::map<std::string, CibIdData>;

/*!
 * Manages Ids of all exportable entities of a library.
 * It can emit enum for Ids which can be used while calling GetMetaInterface() and GetMethod() APIs.
 * It can read the previously emitted enum and use the same integer values to
 * ensure that IDs for all exportable entities remain unchanged.
 */
class CibIdMgr
{
public:
  /*!
   * Loads IDs from file emitted in previous run.
   * @return true on success. Will return false if it is called more than once or it is called after assignIds().
   */
  bool loadIds(const std::string& idsFilePath, const CibParams& cibParams);
  void assignIds(const CppProgramEx& expProg, const CibParams& cibParams);
  bool saveIds(const std::string& idsFilePath, const CibParams& cibParams) const;
  const CibIdTable& getCibIdTable() const { return cibIdTable_; }
  const CibIdData* getCibIdData(const std::string& className) const {
    auto itr = cibIdTable_.find(className);
    return itr == cibIdTable_.end() ? nullptr : &itr->second;
  }

public:
  /*!
   * Visits each method of a class.
   * @return Id of next method if that gets added.
   */
  CibMethodId forEachMethod(const std::string& className, CibIdData::MethodVisitor methodVisitor) const;
  size_t numMethods(const std::string& className) const;

private:
  void assignIds(const CibCppCompound* compound, const CibParams& cibParams, bool forUnknownProxy);

private:
  void loadClassIds(const CppEnum* classIdEnum);
  void loadMethodIds(std::string className, const CppEnum* methodIdEnum);
  CibIdData* addClass(std::string className, CibClassId classId = 0);
  CibIdData* addClass(std::string className, const std::string& classId);

private:
  CibIdTable cibIdTable_;
  CibClassId nextClassId_{ 1 };
};

inline CibIdData* CibIdMgr::addClass(std::string className, const std::string& classId)
{
  return addClass(className, atoi(classId.c_str()));
}

inline CibMethodId CibIdData::forEachMethod(MethodVisitor methodVisitor) const
{
  for (const auto& item : methodIdToMethodMap)
    methodVisitor(item.first, item.second.first, item.second.second);
  return nextMethodId;
}

inline size_t CibIdData::numMethods() const
{
  return methodIdToMethodMap.empty() ? 0 : methodIdToMethodMap.rbegin()->first;
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

#endif //__CIB_ID_MGR_H__
