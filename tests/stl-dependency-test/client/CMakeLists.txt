project(StlDependencyTestClient)

cmake_minimum_required(VERSION 3.4)

## CLIENT FILES

set(CLIENT_SOURCES
	stl-dependency-test.cpp
	../../catch-main.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

foreach(EXP_FILE ${LIBRARY_EXP_FILES})
  set_source_files_properties(${EXP_FILE} GENERATED)
endforeach()

add_executable(StlDependencyTestClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(StlDependencyTestClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(StlDependencyTestClient
	PRIVATE
		StlDependencyTestLib
)

add_test(NAME StlDependencyTestClient COMMAND StlDependencyTestClient)

if(MSVC)
    set_target_properties(StlDependencyTestClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
