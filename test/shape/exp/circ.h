#ifndef __CIRC_HH
#	define __CIRC_HH

#	include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry
{
/**
 * \brief Represents a rectangle.
 */
	class Circle : public Geometry::Shape
	{
	public:
		Circle(int Ox, int Oy, int radius);
		virtual double Area() const;
		virtual double Perimeter() const;
		virtual void Draw(HDC hdc) const;

	public:
		class _h_Circle;
		Circle(_h_Circle* h): Geometry::Shape(0) { __set(h); }
		_h_Circle* __handle() const { return h_; }

	protected :
		static ::Geometry::Shape::_h_Shape* __cast_to_Geometry__Shape(_h_Circle* h);
		void __set(_h_Circle* h);

	private :
		_h_Circle* h_;
	};

}

namespace _cib_ { namespace bridge {
	namespace Geometry {
		struct Circle {
			typedef ::Geometry::Circle::_h_Circle* (__stdcall *__newProc) (int Ox, int Oy, int radius);
			typedef double (__stdcall *AreaProc) (::Geometry::Circle::_h_Circle* pCircleObj);
			typedef double (__stdcall *PerimeterProc) (::Geometry::Circle::_h_Circle* pCircleObj);
			typedef void (__stdcall *DrawProc) (::Geometry::Circle::_h_Circle* pCircleObj, HDC hdc);
			typedef ::Geometry::Shape::_h_Shape* (__stdcall *__cast_to_Geometry__ShapeProc) (::Geometry::Circle::_h_Circle* h);

			__newProc __new;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			__cast_to_Geometry__ShapeProc __cast_to_Geometry__Shape;

			static const Circle& instance() {
				static Circle bridgeIns;
				return bridgeIns;
			}

		private:
			Circle();
		};
	}
}}

inline ::Geometry::Shape::_h_Shape* Geometry::Circle::__cast_to_Geometry__Shape(::Geometry::Circle::_h_Circle* h) {
	return _cib_::bridge::Geometry::Circle::instance().__cast_to_Geometry__Shape(h);
}

inline void Geometry::Circle::__set(::Geometry::Circle::_h_Circle* h) {
	Geometry::Shape::__set(__cast_to_Geometry__Shape(h));
	h_ = h;
}

inline Geometry::Circle::Circle(int Ox, int Oy, int radius): Geometry::Shape(0) {
	__set(_cib_::bridge::Geometry::Circle::instance().__new(Ox, Oy, radius));
}

inline double Geometry::Circle::Area() const {
	return _cib_::bridge::Geometry::Circle::instance().Area(h_);
}

inline double Geometry::Circle::Perimeter() const {
	return _cib_::bridge::Geometry::Circle::instance().Perimeter(h_);
}

inline void Geometry::Circle::Draw(HDC hdc) const {
	_cib_::bridge::Geometry::Circle::instance().Draw(h_, hdc);
}


#endif
