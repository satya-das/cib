#include "stdafx.h"
#include "composite.h"
#include "circ.h"
#include "rect.h"

double Geometry::Composite::Area() const
{
	double A = 0;
	for(std::vector<Shape*>::const_iterator itr = shapes_.begin(); itr != shapes_.end(); ++itr)
		A += (*itr)->Area();
	return A;
}

double Geometry::Composite::Perimeter() const
{
	double P = 0;
	for(std::vector<Shape*>::const_iterator itr = shapes_.begin(); itr != shapes_.end(); ++itr)
		P += (*itr)->Perimeter();
	return P;
}

void Geometry::Composite::Draw(HDC hdc) const
{
	for(std::vector<Shape*>::const_iterator itr = shapes_.begin(); itr != shapes_.end(); ++itr)
		(*itr)->Draw(hdc);
}

Geometry::Composite* Geometry::Composite::CreateCompositeOfRectAndCircle()
{
	Composite* comp = new Composite;
	comp->Add(new Circle(45, 45, 45));
	comp->Add(new Geometry::Rectangle(0, 0, 90, 90));
	return comp;
}
