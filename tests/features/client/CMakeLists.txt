project(FeatureTestsClient)

cmake_minimum_required(VERSION 3.4)

## CLIENT FILES

set(CLIENT_SOURCES
	template-test.cpp
	../../catch-main.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

foreach(EXP_FILE ${LIBRARY_EXP_FILES})
  set_source_files_properties(${EXP_FILE} GENERATED)
endforeach()

add_executable(FeatureTestsClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(FeatureTestsClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(FeatureTestsClient
	PRIVATE
		FeatureTestsLib
)

add_test(NAME FeatureTestsClient COMMAND FeatureTestsClient)

if(MSVC)
    set_target_properties(FeatureTestsClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
