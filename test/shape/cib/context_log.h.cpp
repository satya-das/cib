#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "context_log.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Graphics {
		namespace ContextLogger {
			::Graphics::ContextLogger* __stdcall __new() {
				return new ::Graphics::ContextLogger();
			}

			void __stdcall Move(::Graphics::ContextLogger* pContextLoggerObj, float x, float y) {
				pContextLoggerObj->::Graphics::ContextLogger::Move(x, y);
			}

			void __stdcall Line(::Graphics::ContextLogger* pContextLoggerObj, float x, float y) {
				pContextLoggerObj->::Graphics::ContextLogger::Line(x, y);
			}

			void __stdcall Curve(::Graphics::ContextLogger* pContextLoggerObj, float x1, float y1, float x2, float y2, float x3, float y3) {
				pContextLoggerObj->::Graphics::ContextLogger::Curve(x1, y1, x2, y2, x3, y3);
			}

			void __stdcall Close(::Graphics::ContextLogger* pContextLoggerObj) {
				pContextLoggerObj->::Graphics::ContextLogger::Close();
			}

			::Graphics::Context* __stdcall __cast_to_Graphics__Context(::Graphics::ContextLogger* pContextLoggerObj) {
				return pContextLoggerObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Move, (void*) Move);
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Line, (void*) Line);
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Curve, (void*) Curve);
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Close, (void*) Close);
					AddMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID___cast_to_Graphics__Context, (void*) __cast_to_Graphics__Context);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
