project(draw)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(DRAW_SOURCES
	draw.cpp
	svg_context.cpp
	svg_context.h
)

set(GRAPHICS_EXP_SOURCES
	../graphics/exp/circ.cpp
	../graphics/exp/context.cpp
	../graphics/exp/ellipse.cpp
	../graphics/exp/log_context.cpp
	../graphics/exp/rect.cpp
	../graphics/exp/shape.cpp
	../graphics/exp/point.cpp
	../graphics/exp/composite.cpp
)

add_executable(draw_cibified
	${DRAW_SOURCES}
	${GRAPHICS_EXP_SOURCES}
)
target_include_directories(draw_cibified
	PRIVATE
		../graphics/exp
)

target_link_libraries(draw_cibified
	PRIVATE
		graphics_cibified
)

add_executable(draw
	${DRAW_SOURCES}
)
set_target_properties(draw
	PROPERTIES
		COMPILE_DEFINITIONS GRAPHICSAPI=${DLLIMPORT}
)
target_link_libraries(draw
	PRIVATE
		graphics
)
target_include_directories(draw
	PRIVATE
		../graphics/pub
)
if(MSVC)
    set_target_properties(draw PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(draw_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
