set(PROJECT "example2")

project(${PROJECT})

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${BASEOUTDIR}/pdb)

set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../../../documentation/${PROJECT})
set(LIBNAME ${PROJECT}_lib)
set(CLIENTNAME ${PROJECT}_client)

set(PUB_FILE_NAMES
	example.h
)
set(CIB_OUTPUT
	${PROJECT_ROOT}/cib/__zz_cib_Example.h
	${PROJECT_ROOT}/cib/__zz_cib_Example.cpp
	${PROJECT_ROOT}/cib/__zz_cib_Example-decl.h
	${PROJECT_ROOT}/cib/__zz_cib_Example-export.h
	${PROJECT_ROOT}/cib/__zz_cib_Example-ids.h
	${PROJECT_ROOT}/cib/__zz_cib_Example-mtable.h
	${PROJECT_ROOT}/cib/__zz_cib_Example-classId-repo.cpp
)
set(PUB_FILES "")
foreach(PUBFILE ${PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${PROJECT_ROOT}/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${PROJECT_ROOT}/cib/${PUBFILE}.cpp)
	list(APPEND GRAPHICS_PUB_FILES ${PROJECT_ROOT}/pub/${PUBFILE})
endforeach()
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
add_custom_command(
	OUTPUT ${PROJECT_ROOT}/cib/__zz_cib_Example.cpp
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i pub -o exp -b cib -m Example
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${PUB_FILES}
	WORKING_DIRECTORY ${PROJECT_ROOT}
)

set(LIB_SOURCES
    ${PROJECT_ROOT}/src/example-lib.cpp
)
add_library(${LIBNAME}
	SHARED
		${LIB_SOURCES}
		${PUB_FILES}
		${CIB_OUTPUT}
)
target_include_directories(${LIBNAME}
	PRIVATE
		${PROJECT_ROOT}/pub
)
add_dependencies(${LIBNAME} cib)

set(CLIENT_SOURCES
    ${PROJECT_ROOT}/src/example-client.cpp
)
file(GLOB EXP_SOURCES
	${PROJECT_ROOT}/exp/*.cpp
)
add_executable(${CLIENTNAME}
	${CLIENT_SOURCES}
	${EXP_SOURCES}
)
target_include_directories(${CLIENTNAME}
	PRIVATE
		${PROJECT_ROOT}/exp
)
target_link_libraries(${CLIENTNAME}
	PRIVATE
		${LIBNAME}
)
if(MSVC)
    set_target_properties(${CLIENTNAME} PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
