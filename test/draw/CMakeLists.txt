project(draw)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

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
