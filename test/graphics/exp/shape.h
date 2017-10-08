#pragma  once

#include "context.h"

namespace Graphics
{

/**
 * \brief Abstract base class for all shapes
 */
	class Shape
	{
	public:
		virtual float Area() const = 0;
		virtual float Perimeter() const = 0;
		virtual void Draw(Context* ctx) const = 0;
		virtual ~Shape();

	public:
		class _h_Shape;
		Shape(_h_Shape* h){ __set(h); }
		_h_Shape* __handle() const { return h_; }
		static Shape* __from_handle(_h_Shape* h);

	protected :
		void __set(_h_Shape* h);

	private :
		_h_Shape* h_;
	};

}

namespace _cib_ { namespace GraphicsLib { namespace CppToC {
	namespace Graphics {
		struct Shape {
			typedef void (__stdcall *__deleteProc) (::Graphics::Shape::_h_Shape* pShapeObj);

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


inline void Graphics::Shape::__set(::Graphics::Shape::_h_Shape* h) {
	h_ = h;
}

inline Graphics::Shape::~Shape(){
	_cib_::GraphicsLib::CppToC::Graphics::Shape::instance().__delete(h_);
}

