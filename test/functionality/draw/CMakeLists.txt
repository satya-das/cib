project(draw)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)

set(DRAW_SOURCES
	draw.cpp
	svg_context.cpp
	svg_context.h
)

file(GLOB GRAPHICS_EXP_SOURCES
	../graphics/exp/*.cpp
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
