#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "context_log.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace ContextLogger {
			::Graphics::ContextLogger* __stdcall __zz_cib_new() {
				return new ::Graphics::ContextLogger();
			}

			void __stdcall __zz_cib_delete(::Graphics::ContextLogger* __zz_cib_obj) {
				delete __zz_cib_obj;
			}

			void __stdcall Move(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
				__zz_cib_obj->::Graphics::ContextLogger::Move(x, y);
			}

			void __stdcall Line(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
				__zz_cib_obj->::Graphics::ContextLogger::Line(x, y);
			}

			void __stdcall Curve(::Graphics::ContextLogger* __zz_cib_obj, float x1, float y1, float x2, float y2, float x3, float y3) {
				__zz_cib_obj->::Graphics::ContextLogger::Curve(x1, y1, x2, y2, x3, y3);
			}

			void __stdcall Close(::Graphics::ContextLogger* __zz_cib_obj) {
				__zz_cib_obj->::Graphics::ContextLogger::Close();
			}

			::Graphics::Context* __stdcall __zz_cib_cast_to___Graphics__Context(::Graphics::ContextLogger* __zz_cib_obj) {
				return __zz_cib_obj;
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace ContextLogger {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_new,
			(MethodEntry) &__zz_cib_delete,
			(MethodEntry) &Move,
			(MethodEntry) &Line,
			(MethodEntry) &Curve,
			(MethodEntry) &Close
		};
		*pMethodTable = methodTable;
		*pLen = 7;
	}
}}}
