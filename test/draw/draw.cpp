#include "rect.h"
#include "context_log.h"

#include <iostream>
#include <Windows.h>
#include <cstdint>

namespace {
  static HMODULE g_hGraphics = nullptr;
  using __zz_cib_GraphicsLib_GetMethodTableProc = void(*)(std::uint32_t, __zz_cib_::MethodTable*, size_t*);
  static __zz_cib_GraphicsLib_GetMethodTableProc __zz_cib_GraphicsLib_GetMethodTable;
  void initGraphicsLib()
  {
    g_hGraphics = ::LoadLibraryA("graphics.dll");
    if (g_hGraphics == nullptr)
    {
      std::cout << "ERROR: Null handle." << std::endl;
      exit(-1);
    }
    __zz_cib_GraphicsLib_GetMethodTable = (__zz_cib_GraphicsLib_GetMethodTableProc) GetProcAddress(g_hGraphics, "__zz_cib_GraphicsLib_GetMethodTable");
  }
}

namespace __zz_cib_ {
  using MethodEntry = void(*)();
  using MethodTable = const MethodEntry*;

  void GraphicsLib_GetMethodTable(std::uint32_t classId, MethodTable* pMethodTable, size_t* pLen)
  {
    __zz_cib_GraphicsLib_GetMethodTable(classId, pMethodTable, pLen);
  }
}

int main()
{
  initGraphicsLib();
  Graphics::Rectangle rect(0, 0, 100, 100);
  Graphics::ContextLogger ctx;
  rect.Draw(&ctx);
}
