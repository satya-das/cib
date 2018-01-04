#include "context.h"

#include <iostream>

#include "__zz_cib_internal/context_log_impl1.h"

namespace Graphics
{
/*!
 * Context for logging drawing calls rather than actually drawing anything.
 */
	class ContextLogger : public ::Graphics::Context
	{
	public:
		ContextLogger();
		~ContextLogger();
		virtual void Move(float x, float y);
		virtual void Line(float x, float y);
		virtual void Curve(float x1, float y1, float x2, float y2, float x3, float y3);
		virtual void Close();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(ContextLogger, ::Graphics::ContextLogger);
	};
}


#include "__zz_cib_internal/context_log_impl2.h"
