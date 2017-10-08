#pragma  once

namespace Graphics
{
/*!
 * Drawing context to draw graphics primitives.
 */
	class Context
	{
	public:
		virtual void Move(float x, float y) = 0;
		virtual void Line(float x, float y) = 0;
		virtual void Curve(float x1, float y1, float x2, float y2, float x3, float y3) = 0;
		virtual void Close() = 0;

	public:
		class _h_Context;
		Context(_h_Context* h){ __set(h); }
		_h_Context* __handle() const { return h_; }

	protected :
		void __set(_h_Context* h);

	private :
		_h_Context* h_;
	};
}

namespace _cib_ { namespace GraphicsLib { namespace CppToC {
	namespace Graphics {
		struct Context {


			static const Context& instance() {
				static Context bridgeIns;
				return bridgeIns;
			}

		private:
			Context();
		};
	}
}}}


inline void Graphics::Context::__set(::Graphics::Context::_h_Context* h) {
	h_ = h;
}

