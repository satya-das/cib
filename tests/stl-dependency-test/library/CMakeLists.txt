project(StlDependencyTestLib)

cmake_minimum_required(VERSION 3.4)

## LIBRARY FILES

set(LIBRARY_SOURCES
	example-class.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

set(LIBRARY_CIB_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_StlDependencyTest-proxy-mgr.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/vector.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_vector-iterator.h.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_vector-reverse_iterator.h.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_bidirectional_iterator.h.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_bidirectional_reverse_iterator.h.cpp
)

set(LIBRARY_PUB_FILES "")
foreach(PUB_FILE_NAME ${LIBRARY_PUB_FILE_NAMES})
	list(APPEND LIBRARY_CIB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUB_FILE_NAME}.cpp)
	list(APPEND LIBRARY_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUB_FILE_NAME})
endforeach()

set(CIB_OUTPUT ${LIBRARY_CIB_FILES} ${LIBRARY_EXP_FILES})

foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${CIB} --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module StlDependencyTest
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(StlDependencyTestLib
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_CIB_FILES}
		${LIBRARY_PUB_FILES}
)

target_include_directories(StlDependencyTestLib
	PRIVATE
		pub
		cib
)
add_dependencies(StlDependencyTestLib cib)

if(MSVC)
    set_target_properties(StlDependencyTestLib PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

