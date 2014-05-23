#include "cib.h"
#include "circ.h"

namespace _cib_ {
	bridge::Geometry::Circle::Circle() {
		_cib_::MetaInterface metaIntrface(20000);
		__new = (__newProc) metaIntrface.GetMethod(20100);
		Area = (AreaProc) metaIntrface.GetMethod(20101);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(20102);
		Draw = (DrawProc) metaIntrface.GetMethod(20103);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(20001);
	}
}
