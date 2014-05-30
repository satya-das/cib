#ifndef __SHAPE_H__
#	define __SHAPE_H__

#	include <WinDef.h>

namespace Geometry
{
/**
 * \brief Abstract base class for all shapes
 */
	class Shape
	{
	public:
		virtual double Area() const /*= 0*/;
		virtual double Perimeter() const /*= 0*/;
		virtual void Draw(HDC hdc) const /*= 0*/;
		virtual ~Shape();

	public:
		class _h_Shape;
		Shape(_h_Shape* h){ __set(h); }
		_h_Shape* __handle() const { return h_; }

	protected :
		void __set(_h_Shape* h);

	private :
		_h_Shape* h_;
	};

}

namespace _cib_ { namespace ShapeLib { namespace CppToC {
	namespace Geometry {
		struct Shape {
			typedef double (__stdcall *AreaProc) (::Geometry::Shape::_h_Shape* pShapeObj);
			typedef double (__stdcall *PerimeterProc) (::Geometry::Shape::_h_Shape* pShapeObj);
			typedef void (__stdcall *DrawProc) (::Geometry::Shape::_h_Shape* pShapeObj, HDC hdc);
			typedef void (__stdcall *__deleteProc) (::Geometry::Shape::_h_Shape* pShapeObj);

			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			__deleteProc __delete;

			static const Shape& instance() {
				static Shape bridgeIns;
				return bridgeIns;
			}

		private:
			Shape();
		};
	}
}}}


inline void Geometry::Shape::__set(::Geometry::Shape::_h_Shape* h) {
	h_ = h;
}

inline double Geometry::Shape::Area() const {
	return _cib_::ShapeLib::CppToC::Geometry::Shape::instance().Area(h_);
}

inline double Geometry::Shape::Perimeter() const {
	return _cib_::ShapeLib::CppToC::Geometry::Shape::instance().Perimeter(h_);
}

inline void Geometry::Shape::Draw(HDC hdc) const {
	_cib_::ShapeLib::CppToC::Geometry::Shape::instance().Draw(h_, hdc);
}

inline Geometry::Shape::~Shape(){
	_cib_::ShapeLib::CppToC::Geometry::Shape::instance().__delete(h_);
}


#endif
