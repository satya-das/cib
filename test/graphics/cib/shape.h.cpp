#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"
#include "composite.h"
#include "rect.h"
#include "shape.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

namespace __zz_cib_ {
	namespace Graphics {
		namespace Shape { namespace __zz_cib_UnknownProxy {
			class Shape : public ::Graphics::Shape {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				float Area() const override {
					using AreaProc = float (__stdcall *) (__zz_cib_::PROXY*);
					auto proc = (AreaProc) __zz_cib_mtbl[__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1];
					return proc(__zz_cib_proxy);
				}
				float Perimeter() const override {
					using PerimeterProc = float (__stdcall *) (__zz_cib_::PROXY*);
					auto proc = (PerimeterProc) __zz_cib_mtbl[__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2];
					return proc(__zz_cib_proxy);
				}
				void Draw(::Graphics::Context* ctx) const override {
					using DrawProc = void (__stdcall *) (__zz_cib_::PROXY*, ::Graphics::Context* ctx);
					auto proc = (DrawProc) __zz_cib_mtbl[__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3];
					return proc(__zz_cib_proxy, ctx);
				}
				~Shape() override {
					using __zz_cib_deleteProc = void (__stdcall *) (__zz_cib_::PROXY*);
					auto proc = (__zz_cib_deleteProc) __zz_cib_mtbl[__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::__zz_cib_delete_4];
					proc(__zz_cib_proxy);
				}
				Shape(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::Shape::Shape()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
			};
		}}
		namespace Shape {
			void __stdcall __zz_cib_delete_1(::Graphics::Shape* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Shape* __stdcall __zz_cib_new_2(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::Shape(proxy, mtbl);
			}
			std::uint32_t __stdcall __zz_cib_get_class_id_3(::Graphics::Shape* __zz_cib_obj) {
				static bool classIdRepoPopulated = false;
				if (!classIdRepoPopulated) {
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Circle))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle;
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Composite))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite;
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Rectangle))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle;
					classIdRepoPopulated = true;
				}
				return __zz_cib_gClassIdRepo[std::type_index(typeid(__zz_cib_obj))];
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, std::uint32_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_delete_1,
			(MethodEntry) &__zz_cib_new_2,
			(MethodEntry) &__zz_cib_get_class_id_3
		};
		*pMethodTable = methodTable;
		*pLen = 4;
	}
}}}
