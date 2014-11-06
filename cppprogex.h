#ifndef __CPPPROGEX_H__
#define __CPPPROGEX_H__

#include "cppprog.h"

#include "cib.h"

#include <boost/filesystem.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief Represents an entire C++ program.
 * 
 * For our purpose we may use only C++ header files but this class can be used to load and parse C++ source files as well.
 */
class CppProgramEx : public CppProgram
{
public:
	CppProgramEx();
	CppProgramEx(const bfs::path& inputPath);

	void loadProgramEx(const bfs::path& inputPath) { loadProgram(inputPath); buildCibCppObjTree(); }

public:
    /**
     * Resolves a name of type A::B (with or without scope resolution operators).
     * @param name Name which may contain many scope resolution operators.
     * @param typeNode CppTypeTreeNode object from where the search should begin.
     * @return CppObj corresponding to the name given.
     */
    const CibCppObj* getCibCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode);
    /**
     * Resolves a name of type A::B (with or without scope resolution operators).
     * @param name Name which may contain many scope resolution operators.
     * @param begScope Compound object from where the search should begin.
     * @return CppObj corresponding to the name given.
     */
    const CibCppObj* getCibCppObjFromTypeName(const std::string& name, const CppCompound* begScope);
    /**
     * @return CibCppObj corresponding to given CppObj.
     */
    const CibCppObj* CibCppObjFromCppObj(const CppObj* cppObj) const;

private:
    /**
     * Creates CibCppCompound from CppCompound.
     * \note It does not populate inheritance info.
     */
    CibCppCompound* CppCompoundObjToCibCppCompound(CppCompound* cppCompound, CibCppCompound* owner);
    CibCppFunction* CppFunctionObjToCibCppFunction(CppFunction* cppFunc, CibCppCompound* owner);
	CibCppFunction* CppConstructorObjToCibCppFunction(CppConstructor* ctor, CibCppCompound* owner);
	CibCppFunction* CppDestructorObjToCibCppFunction(CppDestructor* dtor, CibCppCompound* owner);
    void resolveInheritance(CppCompound* cppCompound);
	void buildCibCppObjTree();

private:
    typedef std::map<const CppObj*, const CibCppObj*>       CppObjToCibCppObjMap;

private:
    CppObjToCibCppObjMap    cppObjToCibCppObjMap_;
	bool					cppApiObjTreeCreated_;
};

//////////////////////////////////////////////////////////////////////////

inline CppProgramEx::CppProgramEx()
	: cppApiObjTreeCreated_(false)
{
}

inline CppProgramEx::CppProgramEx(const bfs::path& inputPath)
	: CppProgram(inputPath)
	, cppApiObjTreeCreated_(false)
{
	buildCibCppObjTree();
}

inline CibCppFunction* CppProgramEx::CppFunctionObjToCibCppFunction(CppFunction* cppFunc, CibCppCompound* owner)
{
    CibCppFunction* func = new CibCppFunction(cppFunc, owner);
    cppObjToCibCppObjMap_[cppFunc] = func;
    return func;
}

inline CibCppFunction* CppProgramEx::CppConstructorObjToCibCppFunction(CppConstructor* ctor, CibCppCompound* owner)
{
	CibCppFunction* func = new CibCppFunction(ctor, owner);
	cppObjToCibCppObjMap_[ctor] = func;
	return func;
}

inline CibCppFunction* CppProgramEx::CppDestructorObjToCibCppFunction(CppDestructor* dtor, CibCppCompound* owner)
{
	CibCppFunction* func = new CibCppFunction(dtor, owner);
	cppObjToCibCppObjMap_[dtor] = func;
	return func;
}

inline const CibCppObj* CppProgramEx::CibCppObjFromCppObj(const CppObj* cppObj) const
{
    CppObjToCibCppObjMap::const_iterator itr = cppObjToCibCppObjMap_.find(cppObj);
    if(itr != cppObjToCibCppObjMap_.end())
        return itr->second;
    return NULL;
}

inline const CibCppObj* CppProgramEx::getCibCppObjFromTypeName(const std::string& name, const CppCompound* begScope)
{
    return getCibCppObjFromTypeName(name, cppObjToTypeNode_[begScope]);
}

#endif //__CPPPROGEX_H__
