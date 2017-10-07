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
file(GLOB SHAPE_EXP_SOURCES
	../shape/exp/*.cpp
)
add_executable(draw
	${DRAW_SOURCES}
	${SHAPE_EXP_SOURCES}
)
target_include_directories(draw
	PRIVATE
		../shape/exp
)
