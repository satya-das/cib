project(BaseTemplateInterfaceTestsClient)

cmake_minimum_required(VERSION 3.4)

## CLIENT FILES

set(CLIENT_SOURCES
	base-template-interface-test.cpp
	../../catch-main.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

foreach(EXP_FILE ${LIBRARY_EXP_FILES})
  set_source_files_properties(${EXP_FILE} GENERATED)
endforeach()

add_executable(BaseTemplateInterfaceTestsClient
	${CLIENT_SOURCES}
	${LIBRARY_EXP_FILES}
)
target_include_directories(BaseTemplateInterfaceTestsClient
	PRIVATE
		${EXP_DIR}
)

target_link_libraries(BaseTemplateInterfaceTestsClient
	PRIVATE
		BaseTemplateInterfaceTestsLib
)

add_test(NAME BaseTemplateInterfaceTestsClient COMMAND BaseTemplateInterfaceTestsClient)

if(MSVC)
    set_target_properties(BaseTemplateInterfaceTestsClient PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
