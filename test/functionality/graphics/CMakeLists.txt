project(graphics)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${BASEOUTDIR}/pdb)
set(CMAKE_CURRENT_BINARY_DIR, ${CMAKE_OBJFILE_OUTPUT_DIRECTORY})

set(GRAPHICS_PUB_FILE_NAMES
	circ.h
	composite.h
	context.h
	ellipse.h
	log_context.h
	rect.h
	shape.h
	point.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Graphics_ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_GraphicsLib.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_GraphicsLib.cpp
)
set(GRAPHICS_PUB_FILES "")
foreach(PUBFILE ${GRAPHICS_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND GRAPHICS_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
add_custom_command(
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_GraphicsLib.cpp
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i pub -o exp -b cib -m Graphics
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${GRAPHICS_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(GRAPHICS_SOURCES
	circ.cpp
	composite.cpp
	ellipse.cpp
	log_context.cpp
	rect.cpp
	point.cpp
)
add_library(graphics_cibified
	SHARED
		${GRAPHICS_SOURCES}
		${GRAPHICS_PUB_FILES}
		${CIB_OUTPUT}
)
target_include_directories(graphics_cibified
	PRIVATE
		pub
)
target_compile_definitions(graphics_cibified
	PRIVATE
		COMPILE_DEFINITIONS GRAPHICSAPI=
)
add_dependencies(graphics_cibified cib)

add_library(graphics
	SHARED
		${GRAPHICS_SOURCES}
		${GRAPHICS_PUB_FILES}
)
target_compile_definitions(graphics
	PRIVATE
		COMPILE_DEFINITIONS GRAPHICSAPI=${DLLEXPORT}
)
target_include_directories(graphics
	PUBLIC
		pub
)
if(MSVC)
    set_target_properties(graphics PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(graphics_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
