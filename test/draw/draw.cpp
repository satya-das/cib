#include "rect.h"
#include "context_log.h"

#include <iostream>
#include <Windows.h>
#include <cstdint>

typedef void* (__stdcall *cibGetMetaInterfaceMethodProcType) (std::uint32_t methodId);
cibGetMetaInterfaceMethodProcType cibGetMetaInterfaceMethodProc;

void initGraphicsLib()
{
  HMODULE hGraphics = ::LoadLibraryA("graphics.dll");
  if (hGraphics == NULL)
  {
    std::cout << "ERROR: Null handle." << std::endl;
    exit(-1);
  }
  cibGetMetaInterfaceMethodProc = (cibGetMetaInterfaceMethodProcType)GetProcAddress(hGraphics, "_cibGraphicsGetMetaInterfaceMethod@4");
}

int main()
{
  initGraphicsLib();
  Graphics::Rectangle rect(0, 0, 100, 100);
  Graphics::ContextLogger ctx;
  rect.Draw(&ctx);
}
