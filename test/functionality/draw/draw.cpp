#include "circ.h"
#include "rect.h"
#include "composite.h"
#include "context_log.h"
#include "pdf_context.h"

int main()
{
  Graphics::Rectangle rect(0, 0, 100, 100);
  Graphics::LogContext ctx;
  rect.Draw(&ctx);
  auto composite = Graphics::Composite::CreateCompositeOfRectAndCircle();
  composite->Draw(&ctx);
  Graphics::PdfContext pdfContext;
  composite->Draw(&pdfContext);
  for (size_t i = 0; i < composite->NumShapes(); ++i)
    composite->ShapeAt(i)->Draw(&pdfContext);
}
