#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "context_log.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::ContextLogger::ContextLogger() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_ContextLogger);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID___new);
		Move = (MoveProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID_Move);
		Line = (LineProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID_Line);
		Curve = (CurveProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID_Curve);
		Close = (CloseProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID_Close);
		__cast_to_Graphics__Context = (__cast_to_Graphics__ContextProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::ContextLogger::kCIBID___cast_to_Graphics__Context);
	}
}}
