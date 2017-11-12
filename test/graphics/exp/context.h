#pragma  once

#include "__zz_cib_internal/context_impl1.h"

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
		virtual ~Context() = 0;

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Context, ::Graphics::Context);
	};
}


#include "__zz_cib_internal/context_impl2.h"
