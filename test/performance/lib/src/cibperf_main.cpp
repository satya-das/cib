#include "cib_PerfTestLib.h"

extern "C" __declspec(dllexport) void __zz_cib_PerfTestLib_GetMethodTable(std::uint32_t classId, __zz_cib_::MethodTable* pMethodTable, std::uint32_t* pLen)
{
  __zz_cib_::PerfTestLib_GetMethodTable(classId, pMethodTable, pLen);
}
