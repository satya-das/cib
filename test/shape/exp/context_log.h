#include "context.h"

#include <iostream>

namespace Graphics
{
   /*!
    * Context for logging drawing calls rather than actually drawing anything.
    */
	class ContextLogger : public Graphics::Context
	{
	public:
		ContextLogger();
		virtual void Move(float x, float y);
		virtual void Line(float x, float y);
		virtual void Curve(float x1, float y1, float x2, float y2, float x3, float y3);
		virtual void Close();

	public:
		class _h_ContextLogger;
		ContextLogger(_h_ContextLogger* h): Graphics::Context(0) { __set(h); }
		_h_ContextLogger* __handle() const { return h_; }
		static ContextLogger* __fromHandle(_h_ContextLogger* h);

	protected :
		static ::Graphics::Context::_h_Context* __cast_to_Graphics__Context(_h_ContextLogger* h);
		void __set(_h_ContextLogger* h);

	private :
		_h_ContextLogger* h_;
	};
}

namespace _cib_ { namespace ShapeLib { namespace CppToC {
	namespace Graphics {
		struct ContextLogger {
			typedef ::Graphics::ContextLogger::_h_ContextLogger* (__stdcall *__newProc) ();
			typedef void (__stdcall *MoveProc) (::Graphics::ContextLogger::_h_ContextLogger* pContextLoggerObj, float x, float y);
			typedef void (__stdcall *LineProc) (::Graphics::ContextLogger::_h_ContextLogger* pContextLoggerObj, float x, float y);
			typedef void (__stdcall *CurveProc) (::Graphics::ContextLogger::_h_ContextLogger* pContextLoggerObj, float x1, float y1, float x2, float y2, float x3, float y3);
			typedef void (__stdcall *CloseProc) (::Graphics::ContextLogger::_h_ContextLogger* pContextLoggerObj);
			typedef ::Graphics::Context::_h_Context* (__stdcall *__cast_to_Graphics__ContextProc) (::Graphics::ContextLogger::_h_ContextLogger* h);

			__newProc __new;
			MoveProc Move;
			LineProc Line;
			CurveProc Curve;
			CloseProc Close;
			__cast_to_Graphics__ContextProc __cast_to_Graphics__Context;

			static const ContextLogger& instance() {
				static ContextLogger bridgeIns;
				return bridgeIns;
			}

		private:
			ContextLogger();
		};
	}
}}}

inline ::Graphics::Context::_h_Context* Graphics::ContextLogger::__cast_to_Graphics__Context(::Graphics::ContextLogger::_h_ContextLogger* h) {
	return _cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().__cast_to_Graphics__Context(h);
}

inline void Graphics::ContextLogger::__set(::Graphics::ContextLogger::_h_ContextLogger* h) {
	Graphics::Context::__set(__cast_to_Graphics__Context(h));
	h_ = h;
}

inline Graphics::ContextLogger::ContextLogger(): Graphics::Context(0) {
	__set(_cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().__new());
}

inline void Graphics::ContextLogger::Move(float x, float y){
	_cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().Move(h_, x, y);
}

inline void Graphics::ContextLogger::Line(float x, float y){
	_cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().Line(h_, x, y);
}

inline void Graphics::ContextLogger::Curve(float x1, float y1, float x2, float y2, float x3, float y3){
	_cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().Curve(h_, x1, y1, x2, y2, x3, y3);
}

inline void Graphics::ContextLogger::Close(){
	_cib_::ShapeLib::CppToC::Graphics::ContextLogger::instance().Close(h_);
}

