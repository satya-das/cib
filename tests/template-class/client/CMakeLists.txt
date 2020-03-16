project(TemplateTestsClient)

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

add_executable(TemplateTestsClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(TemplateTestsClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(TemplateTestsClient
	PRIVATE
		TemplateTestsLib
)

add_test(NAME TemplateTestsClient COMMAND TemplateTestsClient)

if(MSVC)
    set_target_properties(TemplateTestsClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
