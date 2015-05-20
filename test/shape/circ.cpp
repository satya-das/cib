#include "stdafx.h"
#include "circ.h"
#include <stdlib.h>
#include <iostream>

#include <WindowsX.h>

///////////////////////////////////////////////////////////////////////////////////////////////////

static const double PI = 3.1416;

double Geometry::Circle::Area() const
{
	return PI * radius_ * radius_;
}

double Geometry::Circle::Perimeter() const
{
	return 2 * PI * radius_;
}

void Geometry::Circle::Draw(HDC hdc) const
{
	SelectBrush(hdc, GetStockBrush(NULL_BRUSH));
	::Ellipse(hdc, Ox_-radius_, Oy_-radius_, Ox_+radius_, Oy_+radius_);
}
