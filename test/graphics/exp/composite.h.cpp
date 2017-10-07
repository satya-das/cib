#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "composite.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::Composite::Composite() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_Composite);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID___new);
		Add = (AddProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Add);
		NumShapes = (NumShapesProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_NumShapes);
		ShapeAt = (ShapeAtProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_ShapeAt);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Draw);
		CreateCompositeOfRectAndCircle = (CreateCompositeOfRectAndCircleProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_CreateCompositeOfRectAndCircle);
		__cast_to_Graphics__Shape = (__cast_to_Graphics__ShapeProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID___cast_to_Graphics__Shape);
	}
}}
