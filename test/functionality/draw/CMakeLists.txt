project(draw)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)

set(DRAW_SOURCES
	draw.cpp
)

file(GLOB GRAPHICS_EXP_SOURCES
	../graphics/exp/*.cpp
)

add_executable(draw
	${DRAW_SOURCES}
	${GRAPHICS_EXP_SOURCES}
)
target_include_directories(draw
	PRIVATE
		../graphics/exp
)

target_link_libraries(draw
	PRIVATE
		graphics
)

add_executable(draw_wo_cib
	${DRAW_SOURCES}
)
set_target_properties(draw_wo_cib
	PROPERTIES
		COMPILE_DEFINITIONS GRAPHICSAPI=${DLLIMPORT}
)
target_link_libraries(draw_wo_cib
	PRIVATE
		graphics_wo_cib
)
target_include_directories(draw_wo_cib
	PRIVATE
		../graphics/pub
)
