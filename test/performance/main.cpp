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
  using __zz_cib_PerfTestLib_GetMethodTableProc = __zz_cib_::MethodTable(*)(std::uint32_t);
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

  __zz_cib_::MethodTable PerfTestLib_GetMethodTable(std::uint32_t classId)
  {
    return __zz_cib_PerfTestLib_GetMethodTable(classId);
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
