#pragma  once
#include "context.h"
#include <iostream>

#include "__zz_cib_internal/log_context-predef.h"

namespace Graphics
{
/*!
 * Context for logging drawing calls rather than actually drawing anything.
 */
	class LogContext : public ::Graphics::Context
	{
	public:
		LogContext(LogContext&& rhs);
	public:
		LogContext();
		~LogContext();
		virtual void Line(float x1, float y1, float x2, float y2);
		virtual void Rect(float l, float b, float r, float t);
		virtual void Circle(float cx, float cy, float r);
		virtual void Ellipse(float cx, float cy, float a, float b);
		LogContext(const ::Graphics::LogContext& __zz_cib_param0);

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(LogContext, Graphics::LogContext);
	};
}

#include "__zz_cib_internal/log_context-impl.h"
