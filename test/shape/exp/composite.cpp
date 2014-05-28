#include "cib_ShapeLib.h"
#include "composite.h"

namespace _cib_ { namespace Shape {
	CppToC::Geometry::Composite::Composite() {
		_cib_::Shape::MetaInterface metaIntrface(40000);
		__new = (__newProc) metaIntrface.GetMethod(40100);
		Add = (AddProc) metaIntrface.GetMethod(40101);
		NumShapes = (NumShapesProc) metaIntrface.GetMethod(40102);
		ShapeAt = (ShapeAtProc) metaIntrface.GetMethod(40103);
		Area = (AreaProc) metaIntrface.GetMethod(40104);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(40105);
		Draw = (DrawProc) metaIntrface.GetMethod(40106);
		CreateCompositeOfRectAndCircle = (CreateCompositeOfRectAndCircleProc) metaIntrface.GetMethod(40107);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(40001);
	}
}}
