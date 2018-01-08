#include "__zz_cib_Graphics_ids.h"
#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;
namespace __zz_cib_ {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
}

namespace __zz_cib_ { namespace Graphics { namespace Circle { MethodTable GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Composite { MethodTable GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Context { MethodTable GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace ContextLogger { MethodTable GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle { MethodTable GetMethodTable(); }}}
namespace __zz_cib_ { namespace Graphics { namespace Shape { MethodTable GetMethodTable(); }}}

namespace __zz_cib_ {
	MethodTable GraphicsLib_GetMethodTable(std::uint32_t classId)
	{
		switch(classId) {
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle:
			return __zz_cib_::Graphics::Circle::GetMethodTable();
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite:
			return __zz_cib_::Graphics::Composite::GetMethodTable();
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Context:
			return __zz_cib_::Graphics::Context::GetMethodTable();
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__ContextLogger:
			return __zz_cib_::Graphics::ContextLogger::GetMethodTable();
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle:
			return __zz_cib_::Graphics::Rectangle::GetMethodTable();
		case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Shape:
			return __zz_cib_::Graphics::Shape::GetMethodTable();
		default:
			return nullptr;
		}
	}
}
