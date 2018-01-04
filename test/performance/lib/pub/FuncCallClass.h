#pragma once

#ifdef PERFLIB
# define PERFTESTAPI __declspec(dllexport)
#elif !defined(CIBPERFTEST)
# define PERFTESTAPI __declspec(dllimport)
#else
#define PERFTESTAPI
#endif

class PERFTESTAPI FuncCallClass
{
public:
  static void SimplestFunc();

  void SimplestMethod();
  double FuncWith3Param(int x, double b, float c);
private:
};
