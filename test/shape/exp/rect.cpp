#include "cib_ShapeLib.h"
#include "rect.h"

namespace _cib_ { namespace Shape {
	CppToC::Geometry::Rectangle::Rectangle() {
		_cib_::Shape::MetaInterface metaIntrface(60000);
		__new = (__newProc) metaIntrface.GetMethod(60100);
		Area = (AreaProc) metaIntrface.GetMethod(60101);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(60102);
		Draw = (DrawProc) metaIntrface.GetMethod(60103);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(60001);
	}
}}
