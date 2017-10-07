#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "context_log.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Graphics::ContextLogger::ContextLogger() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Graphics::kCIBID_ContextLogger);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID___new);
		Move = (MoveProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Move);
		Line = (LineProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Line);
		Curve = (CurveProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Curve);
		Close = (CloseProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID_Close);
		__cast_to_Graphics__Context = (__cast_to_Graphics__ContextProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::ContextLogger::kCIBID___cast_to_Graphics__Context);
	}
}}
