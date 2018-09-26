#include "__zz_cib_Graphics.h"
#include "__zz_cib_Graphics-ids.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Composite { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Context { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Ellipse { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace LogContext { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Point { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Shape { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}

extern "C" __zz_cib_export __zz_cib_::__zz_cib_MethodTable __zz_cib_Graphics_GetMethodTable(std::uint32_t classId)
{
	switch(classId) {
	case __zz_cib_::Graphics::Circle::__zz_cib_classid:
		return __zz_cib_::Graphics::Circle::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::Composite::__zz_cib_classid:
		return __zz_cib_::Graphics::Composite::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::Context::__zz_cib_classid:
		return __zz_cib_::Graphics::Context::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::Ellipse::__zz_cib_classid:
		return __zz_cib_::Graphics::Ellipse::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::LogContext::__zz_cib_classid:
		return __zz_cib_::Graphics::LogContext::__zz_cib_GetMethodTable();
	case __zz_cib_::Point::__zz_cib_classid:
		return __zz_cib_::Point::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::Rectangle::__zz_cib_classid:
		return __zz_cib_::Graphics::Rectangle::__zz_cib_GetMethodTable();
	case __zz_cib_::Graphics::Shape::__zz_cib_classid:
		return __zz_cib_::Graphics::Shape::__zz_cib_GetMethodTable();
	default:
		return nullptr;
	}
}
