project(cibperftest)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_CURRENT_BINARY_DIR, ${CMAKE_OBJFILE_OUTPUT_DIRECTORY})

set(PERFTEST_LIB_FILES
	lib/pub/FuncCallClass.h
	lib/src/FuncCallClass.cpp
)

SET(_definitions PERFLIB)

add_library(libperf STATIC ${PERFTEST_LIB_FILES})
add_library(perf SHARED ${PERFTEST_LIB_FILES})
set_target_properties(perf PROPERTIES COMPILE_DEFINITIONS ${_definitions})
target_include_directories(perf PRIVATE lib/pub)

#target_link_libraries(perf PUBLIC libperf)

set(PERTEST_FILES
	FuncCallTests.h
	FuncCallTests.cpp
	main.cpp
)

add_executable(perftest ${PERTEST_FILES})
target_link_libraries(perftest PUBLIC perf)
target_include_directories(perftest PUBLIC lib/pub)

##################################

set(PERFTEST_PUB_FILE_NAMES
	FuncCallClass.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/PerfTestLib_cibids.h
	${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/cib_PerfTestLib.h
	${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/cib_PerfTestLib.cpp
)
set(PERFTEST_PUB_FILES "")
foreach(PUBFILE ${PERFTEST_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/${PUBFILE}.cpp)
	list(APPEND PERFTEST_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lib/pub/${PUBFILE})
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i ${CMAKE_CURRENT_SOURCE_DIR}/lib/pub -o ${CMAKE_CURRENT_SOURCE_DIR}/lib/exp -b ${CMAKE_CURRENT_SOURCE_DIR}/lib/cib -m PerfTest
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS ${PERFTEST_PUB_FILES}
)
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/lib/cib/PerfTestLib_cibids.h GENERATED)

set(PERFTEST_SOURCES
	lib/src/FuncCallClass.cpp
)
add_library(cibperf
	SHARED
		${PERFTEST_SOURCES}
		${CIB_OUTPUT}
		lib/src/cibperf_main.cpp
)
SET(_cibperfdefinitions CIBPERFTEST)
set_target_properties(cibperf PROPERTIES COMPILE_DEFINITIONS ${_cibperfdefinitions})
target_include_directories(cibperf
	PRIVATE
		lib/pub
		lib/cib
)
add_executable(cibperftest ${PERTEST_FILES} cibperftest.cpp)
set_target_properties(cibperftest PROPERTIES COMPILE_DEFINITIONS ${_cibperfdefinitions})
target_include_directories(cibperftest PUBLIC lib/exp)
target_link_libraries(cibperftest PUBLIC cibperf)
