#include "__zz_cib_Graphics_ids.h"
#include <cstdint>

namespace __zz_cib_ {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
}

namespace __zz_cib_ { namespace Graphics { namespace Circle { void GetMethodTable(MethodTable*, size_t*); }}}
namespace __zz_cib_ { namespace Graphics { namespace Composite { void GetMethodTable(MethodTable*, size_t*); }}}
namespace __zz_cib_ { namespace Graphics { namespace Context { void GetMethodTable(MethodTable*, size_t*); }}}
namespace __zz_cib_ { namespace Graphics { namespace ContextLogger { void GetMethodTable(MethodTable*, size_t*); }}}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle { void GetMethodTable(MethodTable*, size_t*); }}}
namespace __zz_cib_ { namespace Graphics { namespace Shape { void GetMethodTable(MethodTable*, size_t*); }}}

namespace __zz_cib_ {
	void GraphicsLib_GetMethodTable(std::uint32_t classId, __zz_cib_::MethodTable* pMethodTable, size_t* pLen)
	{
		switch(classId) {
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle:
			__zz_cib_::Graphics::Circle::GetMethodTable(pMethodTable, pLen);
			break;
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite:
			__zz_cib_::Graphics::Composite::GetMethodTable(pMethodTable, pLen);
			break;
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Context:
			__zz_cib_::Graphics::Context::GetMethodTable(pMethodTable, pLen);
			break;
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__ContextLogger:
			__zz_cib_::Graphics::ContextLogger::GetMethodTable(pMethodTable, pLen);
			break;
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle:
			__zz_cib_::Graphics::Rectangle::GetMethodTable(pMethodTable, pLen);
			break;
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Shape:
			__zz_cib_::Graphics::Shape::GetMethodTable(pMethodTable, pLen);
			break;
		default:
			*pMethodTable = nullptr;
			*pLen = 0;
		}
	}
}
