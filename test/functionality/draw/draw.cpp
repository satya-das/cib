#include "rect.h"
#include "composite.h"
#include "context_log.h"
#include "pdf_context.h"

#include <iostream>
#include <Windows.h>
#include <cstdint>

namespace {
  static HMODULE g_hGraphics = nullptr;
  using __zz_cib_GraphicsLib_GetMethodTableProc = __zz_cib_::MethodTable(*)(std::uint32_t);
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

  __zz_cib_::MethodTable GraphicsLib_GetMethodTable(std::uint32_t classId)
  {
    return __zz_cib_GraphicsLib_GetMethodTable(classId);
  }
}

int main()
{
  initGraphicsLib();
  Graphics::Rectangle rect(0, 0, 100, 100);
  Graphics::ContextLogger ctx;
  rect.Draw(&ctx);
  auto composite = Graphics::Composite::CreateCompositeOfRectAndCircle();
  composite->Draw(&ctx);
  Graphics::PdfContext pdfContext;
  composite->Draw(&pdfContext);
  for (size_t i = 0; i < composite->NumShapes(); ++i)
    composite->ShapeAt(i)->Draw(&pdfContext);
}
