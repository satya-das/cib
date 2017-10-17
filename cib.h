#ifndef __CIB_H__
#define __CIB_H__

#include <vector>

//////////////////////////////////////////////////////////////////////////

struct CppCompound;

struct CibParams;


typedef std::vector<CppCompound*> CppCompoundArray;

class Cib
{
public:
  Cib(const CibParams& params);

public:
  CppCompoundArray createLibraryGlueCode() const;
  CppCompoundArray createClientGlueCode() const;

private:
  const CibParams& params_;
};

#endif //__CIB_H__
