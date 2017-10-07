#pragma  once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
class Context;
   /**
    * \brief Represents a rectangle.
    */
	class Circle : public Graphics::Shape
	{
	public:
		Circle(float Ox, float Oy, float radius);
		virtual float Area() const;
		virtual float Perimeter() const;
		virtual void Draw(Context* ctx) const;

	public:
		class _h_Circle;
		Circle(_h_Circle* h): Graphics::Shape(0) { __set(h); }
		_h_Circle* __handle() const { return h_; }
		static Circle* __fromHandle(_h_Circle* h);

	protected :
		static ::Graphics::Shape::_h_Shape* __cast_to_Graphics__Shape(_h_Circle* h);
		void __set(_h_Circle* h);

	private :
		_h_Circle* h_;
	};

}

namespace _cib_ { namespace ShapeLib { namespace CppToC {
	namespace Graphics {
		struct Circle {
			typedef ::Graphics::Circle::_h_Circle* (__stdcall *__newProc) (float Ox, float Oy, float radius);
			typedef float (__stdcall *AreaProc) (::Graphics::Circle::_h_Circle* pCircleObj);
			typedef float (__stdcall *PerimeterProc) (::Graphics::Circle::_h_Circle* pCircleObj);
			typedef void (__stdcall *DrawProc) (::Graphics::Circle::_h_Circle* pCircleObj, ::Graphics::Context::_h_Context* ctx);
			typedef ::Graphics::Shape::_h_Shape* (__stdcall *__cast_to_Graphics__ShapeProc) (::Graphics::Circle::_h_Circle* h);

			__newProc __new;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			__cast_to_Graphics__ShapeProc __cast_to_Graphics__Shape;

			static const Circle& instance() {
				static Circle bridgeIns;
				return bridgeIns;
			}

		private:
			Circle();
		};
	}
}}}

inline ::Graphics::Shape::_h_Shape* Graphics::Circle::__cast_to_Graphics__Shape(::Graphics::Circle::_h_Circle* h) {
	return _cib_::ShapeLib::CppToC::Graphics::Circle::instance().__cast_to_Graphics__Shape(h);
}

inline void Graphics::Circle::__set(::Graphics::Circle::_h_Circle* h) {
	Graphics::Shape::__set(__cast_to_Graphics__Shape(h));
	h_ = h;
}

inline Graphics::Circle::Circle(float Ox, float Oy, float radius): Graphics::Shape(0) {
	__set(_cib_::ShapeLib::CppToC::Graphics::Circle::instance().__new(Ox, Oy, radius));
}

inline float Graphics::Circle::Area() const {
	return _cib_::ShapeLib::CppToC::Graphics::Circle::instance().Area(h_);
}

inline float Graphics::Circle::Perimeter() const {
	return _cib_::ShapeLib::CppToC::Graphics::Circle::instance().Perimeter(h_);
}

inline void Graphics::Circle::Draw(Context* ctx) const {
	_cib_::ShapeLib::CppToC::Graphics::Circle::instance().Draw(h_, ctx->__handle());
}

