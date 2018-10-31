#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-export.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Composite { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Context { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Ellipse { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace LogContext { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Point { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Shape { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}}

extern "C" __zz_cib_export const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Graphics_GetMethodTable(std::uint32_t classId)
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
