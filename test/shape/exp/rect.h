#ifndef __RECT_H__
#	define __RECT_H__

#	include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry
{
/**
 * \brief Represents a rectangle.
 */
	class Rectangle : public Geometry::Shape
	{
	public:
		Rectangle(int left, int top, int right, int bottom);
		virtual double Area() const;
		virtual double Perimeter() const;
		virtual void Draw(HDC hdc) const;

	public:
		class _h_Rectangle;
		Rectangle(_h_Rectangle* h): Geometry::Shape(0) { __set(h); }
		_h_Rectangle* __handle() const { return h_; }

	protected :
		static ::Geometry::Shape::_h_Shape* __cast_to_Geometry__Shape(_h_Rectangle* h);
		void __set(_h_Rectangle* h);

	private :
		_h_Rectangle* h_;
	};

}

namespace _cib_ { namespace bridge {
	namespace Geometry {
		struct Rectangle {
			typedef ::Geometry::Rectangle::_h_Rectangle* (__stdcall *__newProc) (int left, int top, int right, int bottom);
			typedef double (__stdcall *AreaProc) (::Geometry::Rectangle::_h_Rectangle* pRectangleObj);
			typedef double (__stdcall *PerimeterProc) (::Geometry::Rectangle::_h_Rectangle* pRectangleObj);
			typedef void (__stdcall *DrawProc) (::Geometry::Rectangle::_h_Rectangle* pRectangleObj, HDC hdc);
			typedef ::Geometry::Shape::_h_Shape* (__stdcall *__cast_to_Geometry__ShapeProc) (::Geometry::Rectangle::_h_Rectangle* h);

			__newProc __new;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			__cast_to_Geometry__ShapeProc __cast_to_Geometry__Shape;

			static const Rectangle& instance() {
				static Rectangle bridgeIns;
				return bridgeIns;
			}

		private:
			Rectangle();
		};
	}
}}

inline ::Geometry::Shape::_h_Shape* Geometry::Rectangle::__cast_to_Geometry__Shape(::Geometry::Rectangle::_h_Rectangle* h) {
	return _cib_::bridge::Geometry::Rectangle::instance().__cast_to_Geometry__Shape(h);
}

inline void Geometry::Rectangle::__set(::Geometry::Rectangle::_h_Rectangle* h) {
	Geometry::Shape::__set(__cast_to_Geometry__Shape(h));
	h_ = h;
}

inline Geometry::Rectangle::Rectangle(int left, int top, int right, int bottom): Geometry::Shape(0) {
	__set(_cib_::bridge::Geometry::Rectangle::instance().__new(left, top, right, bottom));
}

inline double Geometry::Rectangle::Area() const {
	return _cib_::bridge::Geometry::Rectangle::instance().Area(h_);
}

inline double Geometry::Rectangle::Perimeter() const {
	return _cib_::bridge::Geometry::Rectangle::instance().Perimeter(h_);
}

inline void Geometry::Rectangle::Draw(HDC hdc) const {
	_cib_::bridge::Geometry::Rectangle::instance().Draw(h_, hdc);
}


#endif
