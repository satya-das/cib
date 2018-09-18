#pragma  once
#include <cstddef>

#include "__zz_cib_internal/context-predef.h"

namespace Graphics
{
/*!
 * Drawing context to draw graphics primitives.
 */
	class Context
	{
	public:
		Context(Context&& rhs);
	public:
		virtual void Line(float x1, float y1, float x2, float y2) = 0;
		virtual void Rect(float l, float b, float r, float t) = 0;
		virtual void Circle(float cx, float cy, float r) = 0;
		virtual void Ellipse(float cx, float cy, float a, float b) = 0;
		virtual ~Context();
	protected:
		Context();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Context, ::Graphics::Context);
	};
}

#include "__zz_cib_internal/context-impl.h"
