#ifndef __COMPOSITE_H__
#	define __COMPOSITE_H__

#	include "shape.h"

#	include <vector>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry
{

typedef std::vector<Geometry::Shape*> Shapes;

	class Composite : public Geometry::Shape
	{
	public:
		Composite();
		void Add(Shape* shape);
		size_t NumShapes() const;
		Shape* ShapeAt(size_t idxShape) const;
		virtual double Area() const;
		virtual double Perimeter() const;
		virtual void Draw(HDC hdc) const;
		static Composite* CreateCompositeOfRectAndCircle();

	public:
		class _h_Composite;
		Composite(_h_Composite* h): Geometry::Shape(0) { __set(h); }
		_h_Composite* __handle() const { return h_; }

	protected :
		static ::Geometry::Shape::_h_Shape* __cast_to_Geometry__Shape(_h_Composite* h);
		void __set(_h_Composite* h);

	private :
		_h_Composite* h_;
	};
}

namespace _cib_ { namespace bridge {
	namespace Geometry {
		struct Composite {
			typedef ::Geometry::Composite::_h_Composite* (__stdcall *__newProc) ();
			typedef void (__stdcall *AddProc) (::Geometry::Composite::_h_Composite* pCompositeObj, ::Geometry::Shape::_h_Shape* shape);
			typedef size_t (__stdcall *NumShapesProc) (::Geometry::Composite::_h_Composite* pCompositeObj);
			typedef ::Geometry::Shape::_h_Shape* (__stdcall *ShapeAtProc) (::Geometry::Composite::_h_Composite* pCompositeObj, size_t idxShape);
			typedef double (__stdcall *AreaProc) (::Geometry::Composite::_h_Composite* pCompositeObj);
			typedef double (__stdcall *PerimeterProc) (::Geometry::Composite::_h_Composite* pCompositeObj);
			typedef void (__stdcall *DrawProc) (::Geometry::Composite::_h_Composite* pCompositeObj, HDC hdc);
			typedef ::Geometry::Composite::_h_Composite* (__stdcall *CreateCompositeOfRectAndCircleProc) ();
			typedef ::Geometry::Shape::_h_Shape* (__stdcall *__cast_to_Geometry__ShapeProc) (::Geometry::Composite::_h_Composite* h);

			__newProc __new;
			AddProc Add;
			NumShapesProc NumShapes;
			ShapeAtProc ShapeAt;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			CreateCompositeOfRectAndCircleProc CreateCompositeOfRectAndCircle;
			__cast_to_Geometry__ShapeProc __cast_to_Geometry__Shape;

			static const Composite& instance() {
				static Composite bridgeIns;
				return bridgeIns;
			}

		private:
			Composite();
		};
	}
}}

inline ::Geometry::Shape::_h_Shape* Geometry::Composite::__cast_to_Geometry__Shape(::Geometry::Composite::_h_Composite* h) {
	return _cib_::bridge::Geometry::Composite::instance().__cast_to_Geometry__Shape(h);
}

inline void Geometry::Composite::__set(::Geometry::Composite::_h_Composite* h) {
	Geometry::Shape::__set(__cast_to_Geometry__Shape(h));
	h_ = h;
}

inline Geometry::Composite::Composite(): Geometry::Shape(0) {
	__set(_cib_::bridge::Geometry::Composite::instance().__new());
}

inline void Geometry::Composite::Add(Shape* shape){
	_cib_::bridge::Geometry::Composite::instance().Add(h_, shape->__handle());
}

inline size_t Geometry::Composite::NumShapes() const {
	return _cib_::bridge::Geometry::Composite::instance().NumShapes(h_);
}

inline ::Geometry::Shape* Geometry::Composite::ShapeAt(size_t idxShape) const {
	return new Geometry::Shape(
		_cib_::bridge::Geometry::Composite::instance().ShapeAt(h_, idxShape)
	);
}

inline double Geometry::Composite::Area() const {
	return _cib_::bridge::Geometry::Composite::instance().Area(h_);
}

inline double Geometry::Composite::Perimeter() const {
	return _cib_::bridge::Geometry::Composite::instance().Perimeter(h_);
}

inline void Geometry::Composite::Draw(HDC hdc) const {
	_cib_::bridge::Geometry::Composite::instance().Draw(h_, hdc);
}

inline ::Geometry::Composite* Geometry::Composite::CreateCompositeOfRectAndCircle(){
	return new Geometry::Composite(
		_cib_::bridge::Geometry::Composite::instance().CreateCompositeOfRectAndCircle()
	);
}


#endif
