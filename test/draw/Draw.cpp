#include "rect.h"
#include "context_log.h"

#include <iostream>
#include <Windows.h>
#include <cstdint>

typedef void* (__stdcall *cibGetMetaInterfaceMethodProcType) (std::uint32_t methodId);
cibGetMetaInterfaceMethodProcType cibGetMetaInterfaceMethodProc;

void initShapeLib()
{
  HMODULE hShape = ::LoadLibraryA("shape.dll");
  cibGetMetaInterfaceMethodProc = (cibGetMetaInterfaceMethodProcType)GetProcAddress(hShape, "_cibShapeGetMetaInterfaceMethod@4");
}

int main()
{
  initShapeLib();
  Graphics::Rectangle rect(0, 0, 100, 100);
  Graphics::ContextLogger ctx;
  rect.Draw(&ctx);
}
