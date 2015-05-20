#include "stdafx.h"
#include "rect.h"
#include <stdlib.h>
#include <iostream>

///////////////////////////////////////////////////////////////////////////////////////////////////

double Geometry::Rectangle::Area() const
{
	int w = right_- left_;
	int h = bottom_ - top_;
	return w * h;
}

double Geometry::Rectangle::Perimeter() const
{
	int w = right_- left_;
	int h = bottom_ - top_;
	return 2 * (w + h);
}

void Geometry::Rectangle::Draw(HDC hdc) const
{
	::Rectangle(hdc, left_, top_, right_, bottom_);
}
