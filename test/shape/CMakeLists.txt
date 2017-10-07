project(shape)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_CURRENT_BINARY_DIR, ${CMAKE_OBJFILE_OUTPUT_DIRECTORY})

set(SHAPE_PUB_FILE_NAMES
	circ.h
	composite.h
	context.h
	context_log.h
	rect.h
	shape.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/ShapeLib_cibids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_ShapeLib.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_ShapeLib.cpp
)
set(SHAPE_PUB_FILES "")
foreach(PUBFILE ${SHAPE_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND SHAPE_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i ${CMAKE_CURRENT_SOURCE_DIR}/pub -o ${CMAKE_CURRENT_SOURCE_DIR}/exp -b ${CMAKE_CURRENT_SOURCE_DIR}/cib -m Shape
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS ${SHAPE_PUB_FILES}
)
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/cib/ShapeLib_cibids.h GENERATED)

set(SHAPE_SOURCES
	shape.cpp
	rect.cpp
	composite.cpp
	circ.cpp
)
add_library(shape
	SHARED
		${SHAPE_SOURCES}
		${CIB_OUTPUT}
)
target_include_directories(shape
	PRIVATE
		pub
)
