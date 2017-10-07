#pragma  once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
/**
 * \brief Represents a rectangle.
 */
	class Rectangle : public Graphics::Shape
	{
	public:
		Rectangle(float left, float top, float right, float bottom);
		virtual float Area() const;
		virtual float Perimeter() const;
		virtual void Draw(Context* ctx) const;

	public:
		class _h_Rectangle;
		Rectangle(_h_Rectangle* h): Graphics::Shape(0) { __set(h); }
		_h_Rectangle* __handle() const { return h_; }
		static Rectangle* __fromHandle(_h_Rectangle* h);

	protected :
		static ::Graphics::Shape::_h_Shape* __cast_to_Graphics__Shape(_h_Rectangle* h);
		void __set(_h_Rectangle* h);

	private :
		_h_Rectangle* h_;
	};
}

namespace _cib_ { namespace ShapeLib { namespace CppToC {
	namespace Graphics {
		struct Rectangle {
			typedef ::Graphics::Rectangle::_h_Rectangle* (__stdcall *__newProc) (float left, float top, float right, float bottom);
			typedef float (__stdcall *AreaProc) (::Graphics::Rectangle::_h_Rectangle* pRectangleObj);
			typedef float (__stdcall *PerimeterProc) (::Graphics::Rectangle::_h_Rectangle* pRectangleObj);
			typedef void (__stdcall *DrawProc) (::Graphics::Rectangle::_h_Rectangle* pRectangleObj, ::Graphics::Context::_h_Context* ctx);
			typedef ::Graphics::Shape::_h_Shape* (__stdcall *__cast_to_Graphics__ShapeProc) (::Graphics::Rectangle::_h_Rectangle* h);

			__newProc __new;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			__cast_to_Graphics__ShapeProc __cast_to_Graphics__Shape;

			static const Rectangle& instance() {
				static Rectangle bridgeIns;
				return bridgeIns;
			}

		private:
			Rectangle();
		};
	}
}}}

inline ::Graphics::Shape::_h_Shape* Graphics::Rectangle::__cast_to_Graphics__Shape(::Graphics::Rectangle::_h_Rectangle* h) {
	return _cib_::ShapeLib::CppToC::Graphics::Rectangle::instance().__cast_to_Graphics__Shape(h);
}

inline void Graphics::Rectangle::__set(::Graphics::Rectangle::_h_Rectangle* h) {
	Graphics::Shape::__set(__cast_to_Graphics__Shape(h));
	h_ = h;
}

inline Graphics::Rectangle::Rectangle(float left, float top, float right, float bottom): Graphics::Shape(0) {
	__set(_cib_::ShapeLib::CppToC::Graphics::Rectangle::instance().__new(left, top, right, bottom));
}

inline float Graphics::Rectangle::Area() const {
	return _cib_::ShapeLib::CppToC::Graphics::Rectangle::instance().Area(h_);
}

inline float Graphics::Rectangle::Perimeter() const {
	return _cib_::ShapeLib::CppToC::Graphics::Rectangle::instance().Perimeter(h_);
}

inline void Graphics::Rectangle::Draw(Context* ctx) const {
	_cib_::ShapeLib::CppToC::Graphics::Rectangle::instance().Draw(h_, ctx->__handle());
}

