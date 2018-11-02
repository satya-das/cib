#include "composite.h"
#include "circ.h"
#include "rect.h"

double Graphics::Composite::Area() const
{
  double A = 0;
  for (std::vector<Shape*>::const_iterator itr = shapes_.begin(); itr != shapes_.end(); ++itr)
    A += (*itr)->Area();
  return A;
}

double Graphics::Composite::Perimeter() const
{
  double P = 0;
  for (std::vector<Shape*>::const_iterator itr = shapes_.begin(); itr != shapes_.end(); ++itr)
    P += (*itr)->Perimeter();
  return P;
}

void Graphics::Composite::Draw(Context* ctx) const
{
for (auto shape : shapes_)
    shape->Draw(ctx);
}

Graphics::Composite* Graphics::Composite::CreateCompositeOfRectAndCircle()
{
  Composite* comp = new Composite;
  comp->Add(new Circle(45, 45, 45));
  comp->Add(new Graphics::Rectangle(0, 0, 90, 90));
  return comp;
}
