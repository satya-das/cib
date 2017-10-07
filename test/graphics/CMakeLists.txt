project(graphics)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_CURRENT_BINARY_DIR, ${CMAKE_OBJFILE_OUTPUT_DIRECTORY})

set(GRAPHICS_PUB_FILE_NAMES
	circ.h
	composite.h
	context.h
	context_log.h
	rect.h
	shape.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/GraphicsLib_cibids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_GraphicsLib.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_GraphicsLib.cpp
)
set(GRAPHICS_PUB_FILES "")
foreach(PUBFILE ${GRAPHICS_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND GRAPHICS_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i ${CMAKE_CURRENT_SOURCE_DIR}/pub -o ${CMAKE_CURRENT_SOURCE_DIR}/exp -b ${CMAKE_CURRENT_SOURCE_DIR}/cib -m Graphics
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS ${GRAPHICS_PUB_FILES}
)
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/cib/GraphicsLib_cibids.h GENERATED)

set(GRAPHICS_SOURCES
	shape.cpp
	rect.cpp
	composite.cpp
	circ.cpp
)
add_library(graphics
	SHARED
		${GRAPHICS_SOURCES}
		${CIB_OUTPUT}
)
target_include_directories(graphics
	PRIVATE
		pub
)
