#include "FuncCallTests.h"

#ifdef CIBPERFTEST

#include <iostream>
#include <Windows.h>
#include <cstdint>

namespace __zz_cib_ {
  using MethodEntry = void(*)();
  using MethodTable = const MethodEntry*;
}

namespace {
  static HMODULE g_hPerfTest = nullptr;
  using __zz_cib_PerfTestLib_GetMethodTableProc = void(*)(std::uint32_t, __zz_cib_::MethodTable*, size_t*);
  static __zz_cib_PerfTestLib_GetMethodTableProc __zz_cib_PerfTestLib_GetMethodTable;
  void initPerfTestLib()
  {
    g_hPerfTest = ::LoadLibraryA("cibperf.dll");
    if (g_hPerfTest == nullptr)
    {
      std::cout << "ERROR: Null handle." << std::endl;
      exit(-1);
    }
    __zz_cib_PerfTestLib_GetMethodTable = (__zz_cib_PerfTestLib_GetMethodTableProc)GetProcAddress(g_hPerfTest, "__zz_cib_PerfTestLib_GetMethodTable");
  }
}

namespace __zz_cib_ {
  using MethodEntry = void(*)();
  using MethodTable = const MethodEntry*;

  void PerfTestLib_GetMethodTable(std::uint32_t classId, MethodTable* pMethodTable, size_t* pLen)
  {
    __zz_cib_PerfTestLib_GetMethodTable(classId, pMethodTable, pLen);
  }
}
#endif

int main()
{
#ifdef CIBPERFTEST
  initPerfTestLib();
#endif

  TestFuncCall();
}
