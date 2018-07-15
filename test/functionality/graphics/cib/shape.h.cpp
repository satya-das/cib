#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"
#include "composite.h"
#include "ellipse.h"
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

				template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {
					return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
				}
			public:
				float Area() const override {
					using AreaProc = float (__zz_cib_decl *) (__zz_cib_::PROXY*);
					auto proc = getProc<AreaProc>(__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1);
					return proc(__zz_cib_proxy);
				}
				float Perimeter() const override {
					using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_::PROXY*);
					auto proc = getProc<PerimeterProc>(__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2);
					return proc(__zz_cib_proxy);
				}
				void Draw(::Graphics::Context* ctx) const override {
					using DrawProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, ::Graphics::Context* ctx);
					auto proc = getProc<DrawProc>(__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3);
					return proc(__zz_cib_proxy, ctx);
				}
				~Shape() override {
					if (__zz_cib_proxy) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*);
						auto proc = getProc<__zz_cib_deleteProc>(__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::__zz_cib_methodid::__zz_cib_delete_4);
						proc(__zz_cib_proxy);
					}
				}
				Shape(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::Shape::Shape()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace Shape {
			void __zz_cib_decl __zz_cib_delete_1(::Graphics::Shape* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Shape* __zz_cib_decl __zz_cib_new_2(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::Shape(proxy, mtbl);
			}
			std::uint32_t __zz_cib_decl __zz_cib_get_class_id_3(::Graphics::Shape* __zz_cib_obj) {
				static bool classIdRepoPopulated = false;
				if (!classIdRepoPopulated) {
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Circle))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle;
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Composite))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite;
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Ellipse))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Ellipse;
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Rectangle))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle;
					classIdRepoPopulated = true;
				}
				return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
			}
			void __zz_cib_decl __zz_cib_release_proxy_4(::Graphics::Shape* __zz_cib_obj) {
				auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Shape::__zz_cib_UnknownProxy::Shape*>(__zz_cib_obj);
				if (unknownProxy)
					unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 4 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_delete_1,
			(MethodEntry) &__zz_cib_new_2,
			(MethodEntry) &__zz_cib_get_class_id_3,
			(MethodEntry) &__zz_cib_release_proxy_4
		};
		return methodTable;
	}
}}}
