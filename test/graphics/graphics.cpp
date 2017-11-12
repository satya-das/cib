#include "cib/cib_GraphicsLib.h"

extern "C" __declspec(dllexport) void __zz_cib_GraphicsLib_GetMethodTable(std::uint32_t classId, __zz_cib_::MethodTable* pMethodTable, size_t* pLen)
{
  __zz_cib_::GraphicsLib_GetMethodTable(classId, pMethodTable, pLen);
}
