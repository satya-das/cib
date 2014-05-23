#ifndef __CPPPROGEX_H__
#define __CPPPROGEX_H__

#include "cppprog.h"

#include "cppapi.h"

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

	void loadProgramEx(const bfs::path& inputPath) { loadProgram(inputPath); buildCppApiObjTree(); }

public:
    /**
     * Resolves a name of type A::B (with or without scope resolution operators).
     * @param name Name which may contain many scope resolution operators.
     * @param typeNode CppTypeTreeNode object from where the search should begin.
     * @return CppObj corresponding to the name given.
     */
    const CppApiObj* getCppApiObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode);
    /**
     * Resolves a name of type A::B (with or without scope resolution operators).
     * @param name Name which may contain many scope resolution operators.
     * @param begScope Compound object from where the search should begin.
     * @return CppObj corresponding to the name given.
     */
    const CppApiObj* getCppApiObjFromTypeName(const std::string& name, const CppCompound* begScope);
    /**
     * @return CppApiObj corresponding to given CppObj.
     */
    const CppApiObj* CppApiObjFromCppObj(const CppObj* cppObj) const;

private:
    /**
     * Creates CppApiCompound from CppCompound.
     * \note It does not populate inheritance info.
     */
    CppApiCompound* CppCompoundObjToCppApiCompound(CppCompound* cppCompound, CppApiCompound* owner);
    CppApiFunction* CppFunctionObjToCppApiFunction(CppFunction* cppFunc, CppApiCompound* owner);
	CppApiFunction* CppConstructorObjToCppApiFunction(CppConstructor* ctor, CppApiCompound* owner);
	CppApiFunction* CppDestructorObjToCppApiFunction(CppDestructor* dtor, CppApiCompound* owner);
    void resolveInheritance(CppCompound* cppCompound);
	void buildCppApiObjTree();

private:
    typedef std::map<const CppObj*, const CppApiObj*>       CppObjToCppApiObjMap;

private:
    CppObjToCppApiObjMap    cppObjToCppApiObjMap_;
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
	buildCppApiObjTree();
}

inline CppApiFunction* CppProgramEx::CppFunctionObjToCppApiFunction(CppFunction* cppFunc, CppApiCompound* owner)
{
    CppApiFunction* func = new CppApiFunction(cppFunc, owner);
    cppObjToCppApiObjMap_[cppFunc] = func;
    return func;
}

inline CppApiFunction* CppProgramEx::CppConstructorObjToCppApiFunction(CppConstructor* ctor, CppApiCompound* owner)
{
	CppApiFunction* func = new CppApiFunction(ctor, owner);
	cppObjToCppApiObjMap_[ctor] = func;
	return func;
}

inline CppApiFunction* CppProgramEx::CppDestructorObjToCppApiFunction(CppDestructor* dtor, CppApiCompound* owner)
{
	CppApiFunction* func = new CppApiFunction(dtor, owner);
	cppObjToCppApiObjMap_[dtor] = func;
	return func;
}

inline const CppApiObj* CppProgramEx::CppApiObjFromCppObj(const CppObj* cppObj) const
{
    CppObjToCppApiObjMap::const_iterator itr = cppObjToCppApiObjMap_.find(cppObj);
    if(itr != cppObjToCppApiObjMap_.end())
        return itr->second;
    return NULL;
}

inline const CppApiObj* CppProgramEx::getCppApiObjFromTypeName(const std::string& name, const CppCompound* begScope)
{
    return getCppApiObjFromTypeName(name, cppObjToTypeNode_[begScope]);
}

#endif //__CPPPROGEX_H__
