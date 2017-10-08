#pragma  once

#include "shape.h"
#include "context.h"

#include <vector>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{

typedef std::vector<Graphics::Shape*> Shapes;

	class Composite : public Graphics::Shape
	{
	public:
		Composite();
		void Add(Shape* shape);
		size_t NumShapes() const;
		Shape* ShapeAt(size_t idxShape) const;
		virtual float Area() const;
		virtual float Perimeter() const;
		virtual void Draw(Context* ctx) const;
		static Composite* CreateCompositeOfRectAndCircle();

	public:
		class _h_Composite;
		Composite(_h_Composite* h): Graphics::Shape(0) { __set(h); }
		_h_Composite* __handle() const { return h_; }
		static Composite* __from_handle(_h_Composite* h);

	protected :
		static ::Graphics::Shape::_h_Shape* __cast_to_Graphics__Shape(_h_Composite* h);
		void __set(_h_Composite* h);

	private :
		_h_Composite* h_;
	};
}

namespace _cib_ { namespace GraphicsLib { namespace CppToC {
	namespace Graphics {
		struct Composite {
			typedef ::Graphics::Composite::_h_Composite* (__stdcall *__newProc) ();
			typedef void (__stdcall *AddProc) (::Graphics::Composite::_h_Composite* pCompositeObj, ::Graphics::Shape::_h_Shape* shape);
			typedef size_t (__stdcall *NumShapesProc) (::Graphics::Composite::_h_Composite* pCompositeObj);
			typedef ::Graphics::Shape::_h_Shape* (__stdcall *ShapeAtProc) (::Graphics::Composite::_h_Composite* pCompositeObj, size_t idxShape);
			typedef float (__stdcall *AreaProc) (::Graphics::Composite::_h_Composite* pCompositeObj);
			typedef float (__stdcall *PerimeterProc) (::Graphics::Composite::_h_Composite* pCompositeObj);
			typedef void (__stdcall *DrawProc) (::Graphics::Composite::_h_Composite* pCompositeObj, ::Graphics::Context::_h_Context* ctx);
			typedef ::Graphics::Composite::_h_Composite* (__stdcall *CreateCompositeOfRectAndCircleProc) ();
			typedef ::Graphics::Shape::_h_Shape* (__stdcall *__cast_to_Graphics__ShapeProc) (::Graphics::Composite::_h_Composite* h);

			__newProc __new;
			AddProc Add;
			NumShapesProc NumShapes;
			ShapeAtProc ShapeAt;
			AreaProc Area;
			PerimeterProc Perimeter;
			DrawProc Draw;
			CreateCompositeOfRectAndCircleProc CreateCompositeOfRectAndCircle;
			__cast_to_Graphics__ShapeProc __cast_to_Graphics__Shape;

			static const Composite& instance() {
				static Composite bridgeIns;
				return bridgeIns;
			}

		private:
			Composite();
		};
	}
}}}

inline ::Graphics::Shape::_h_Shape* Graphics::Composite::__cast_to_Graphics__Shape(::Graphics::Composite::_h_Composite* h) {
	return _cib_::GraphicsLib::CppToC::Graphics::Composite::instance().__cast_to_Graphics__Shape(h);
}

inline void Graphics::Composite::__set(::Graphics::Composite::_h_Composite* h) {
	Graphics::Shape::__set(__cast_to_Graphics__Shape(h));
	h_ = h;
}

inline Graphics::Composite::Composite(): Graphics::Shape(0) {
	__set(_cib_::GraphicsLib::CppToC::Graphics::Composite::instance().__new());
}

inline void Graphics::Composite::Add(Shape* shape){
	_cib_::GraphicsLib::CppToC::Graphics::Composite::instance().Add(h_, shape->__handle());
}

inline size_t Graphics::Composite::NumShapes() const {
	return _cib_::GraphicsLib::CppToC::Graphics::Composite::instance().NumShapes(h_);
}

inline ::Graphics::Shape* Graphics::Composite::ShapeAt(size_t idxShape) const {
	return Graphics::Shape::__from_handle(
		_cib_::GraphicsLib::CppToC::Graphics::Composite::instance().ShapeAt(h_, idxShape)
	);
}

inline float Graphics::Composite::Area() const {
	return _cib_::GraphicsLib::CppToC::Graphics::Composite::instance().Area(h_);
}

inline float Graphics::Composite::Perimeter() const {
	return _cib_::GraphicsLib::CppToC::Graphics::Composite::instance().Perimeter(h_);
}

inline void Graphics::Composite::Draw(Context* ctx) const {
	_cib_::GraphicsLib::CppToC::Graphics::Composite::instance().Draw(h_, ctx->__handle());
}

inline ::Graphics::Composite* Graphics::Composite::CreateCompositeOfRectAndCircle(){
	return Graphics::Composite::__from_handle(
		_cib_::GraphicsLib::CppToC::Graphics::Composite::instance().CreateCompositeOfRectAndCircle()
	);
}

