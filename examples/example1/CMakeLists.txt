set(PROJECT "example1")

project(${PROJECT})

add_custom_command(
	OUTPUT ${LIB_GLUE_SRCS}
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i pub -o exp -b cib -m Example
	COMMAND echo Generated files: ${LIB_GLUE_SRCS}
	DEPENDS cib CibResources ${PUB_FILES} ${RESPATHS}
	WORKING_DIRECTORY ${PROJECT_ROOT}
)

add_custom_target(${PROJECT}GlueCode DEPENDS ${LIB_GLUE_SRCS})

set(LIB_SOURCES
    ${PROJECT_ROOT}/src/example-lib.cpp
)
add_library(${LIBNAME}
	SHARED
		${LIB_SOURCES}
		${PUB_FILES}
		${LIB_GLUE_SRCS}
)
target_include_directories(${LIBNAME}
	PRIVATE
		${PROJECT_ROOT}/pub
)
add_dependencies(${LIBNAME} cib ${PROJECT}GlueCode)

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
