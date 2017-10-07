project(draw)

cmake_minimum_required(VERSION 3.4)

if (CMAKE_BUILD_TYPE MATCHES Release)
	set(TARGET_SUBDIR Release)
else()
	set(TARGET_SUBDIR Debug)
endif()

if(MSVC)
	SET(CMAKE_CXX_FLAGS "/EHsc")
endif(MSVC)

set(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/../../..)
set(BASEOUTDIR ${ROOT_DIR}/build_results/${TARGET_SUBDIR})
set(BINDIR ${BASEOUTDIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)

file(GLOB DRAW_SOURCES
	*.cpp
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
