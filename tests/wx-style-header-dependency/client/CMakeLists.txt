project(wxStyleHeaderDependencyTestsClient)

cmake_minimum_required(VERSION 3.4)

## CLIENT FILES

set(CLIENT_SOURCES
	wx-style-header-dependency-test.cpp
	../../catch-main.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

foreach(EXP_FILE ${LIBRARY_EXP_FILES})
  set_source_files_properties(${EXP_FILE} GENERATED)
endforeach()

add_executable(wxStyleHeaderDependencyTestsClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(wxStyleHeaderDependencyTestsClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(wxStyleHeaderDependencyTestsClient
	PRIVATE
		wxStyleHeaderDependencyTestsLib
)

add_test(NAME wxStyleHeaderDependencyTestsClient COMMAND wxStyleHeaderDependencyTestsClient)

if(MSVC)
    set_target_properties(wxStyleHeaderDependencyTestsClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
