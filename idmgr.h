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

#ifndef __CIB_ID_MGR_H__
#define __CIB_ID_MGR_H__

#include "cppprogex.h"
#include "cppwriter.h"
#include "cib.h"
#include "params.h"

//////////////////////////////////////////////////////////////////////////

typedef int CibId;

/**
 * Information about an item name and its value.
 * It is basically an item of an enum.
 * An item in CibId enum contains three things: unique string (as comment), name, and value.
 * The Unique string is not part of CibIdData but used as key in CibIdEnum.
 * It is designed this way to make search for an item efficient.
 */
struct CibIdData
{
  std::string idName;     ///< This is the name of enum item.
  CibId idVal;            ///< This is the value of item.
};
/**
 * A map between unique string that identifies a C/C++ item and CibIdData.
 * CibIdEnum represents an anonymous enum that defines id for all entities (class, and functions) of a compound type.
 * The key in the map is the unique string that identifies an exportable entity.
 */
typedef std::map<std::string, CibIdData> CibIdEnum;

struct CibIdNode;

typedef std::map<std::string, CibIdNode> CibIdEnumTree;

/**
 * Represents a node in the tree of CibIdEnum.
 * A node contains ids of exportable entities of a compound type and a subtree
 * that defines ids of exportable entities of nested compound type.
 * A compound type can be a namespace/class/struct/union.
 */
struct CibIdNode
{
  CibIdEnum idEnum;
  CibIdEnumTree childs;
};
/**
 * Manages Ids of all exportable entities of a library.
 * It can emit enum for Ids which can be used while calling GetMetaInterface() and GetMethod() APIs.
 * It can read the previously emitted enum and use the same integer values to
 * ensure that IDs for all exportable entities remain unchanged.
 */
class CibIdMgr
{
public:
  CibIdMgr(std::string moduleName);

public:
  /**
   * Loads IDs from file emitted in previous run.
   * @return true on success. Will return false if it is called more than once or it is called after assignIds().
   */
  bool loadIds(const std::string& idsFilePath);
  void assignIds(const CppProgramEx& expProg, const CibParams& cibParams);
  bool saveIds(const std::string& idsFilePath) const;

private:
  void init();
  void loadIds(const CppCompound* nodeCompound, CibIdNode& idNode);
  void assignIds(const CppObjArray& inList, const CppProgramEx& expProg, CibIdNode& idNode, const CibIdNode* oldIdNode, const CibParams& cibParams);
  void assignIdsToSpecialMethods(const CibCppCompound* compound, CibIdNode& idNode, const CibIdNode* oldIdNode, const CibParams& cibParams);
  void emitIds(std::ostream& stm, const CibIdNode& idNode, CppWriter::Indentation indentation) const;

private:
  std::string moduleName_;
  CibIdNode idTreeRoot_;
  CibIdNode oldIdTreeRoot_;
  CibId lastCibId_;
};

inline CibIdMgr::CibIdMgr(std::string moduleName)
  : moduleName_(std::move(moduleName))
  , lastCibId_(0)
{
}

#endif //__CIB_ID_MGR_H__
