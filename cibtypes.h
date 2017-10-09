#pragma once

#include <map>
#include <vector>
#include <list>
#include <cstdint>

enum CppObjProtLevel : std::uint8_t;

struct CppDocComment;
class CppWriter;
class CppIndent;

class CibCppObj;
class CibCppCompound;
class CibCppFunction;
class CibCppProgram;
class CppProgramEx;

typedef std::list<CppDocComment*>                       CibCppDocs;
typedef std::vector<CibCppCompound*>			              CibCppCompoundArray;
typedef std::vector<CibCppFunction*>			              CibCppFunctionArray;
typedef std::list<std::string>				                  stringlist;
