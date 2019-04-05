project(memory_cibified)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)

set(MEMORY_SOURCES
	memory.cpp
)

file(GLOB MEMORY_EXP_SOURCES
	../memorylib/exp/*.cpp
)

add_executable(memory_cibified
	${MEMORY_SOURCES}
	${MEMORY_EXP_SOURCES}
)
target_include_directories(memory_cibified
	PRIVATE
		../memorylib/exp
)

target_link_libraries(memory_cibified
	PRIVATE
		memorylib_cibified
)

add_executable(memory
	${MEMORY_SOURCES}
)
target_link_libraries(memory
	PRIVATE
		memorylib
)
target_include_directories(memory
	PRIVATE
		../memorylib/pub
)
