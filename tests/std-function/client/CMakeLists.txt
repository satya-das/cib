project(StdFunctionTestsClient)

cmake_minimum_required(VERSION 3.4)

## CLIENT FILES

set(CLIENT_SOURCES
	std-function-test.cpp
	../../catch-main.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

foreach(EXP_FILE ${LIBRARY_EXP_FILES})
  set_source_files_properties(${EXP_FILE} GENERATED)
endforeach()

add_executable(StdFunctionTestsClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(StdFunctionTestsClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(StdFunctionTestsClient
	PRIVATE
		StdFunctionTestsLib
)

add_test(NAME StdFunctionTestsClient COMMAND StdFunctionTestsClient)

if(MSVC)
    set_target_properties(StdFunctionTestsClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
