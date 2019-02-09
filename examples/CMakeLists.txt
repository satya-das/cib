cmake_minimum_required(VERSION 2.8.7)

include("../../common/cmake/conf.cmake")

add_custom_target(DiffsForReadMe ALL)
set(EXAMPLE_HEADERS "")
set(FINAL_LCOV_CMD "lcov -o cib.info")
set(LCOV_TARGETS "")

foreach(example ${EXAMPLES})
    set(example_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example}_client)

    set(PUB_FILE_BASE_NAMES
	    example # File name without extension
    )
    set(LIB_GLUE_SRCS
	    ${example_ROOT}/cib/__zz_cib_Example-gateway.cpp
	    ${example_ROOT}/cib/__zz_cib_Example-classId-repo.cpp
	    ${example_ROOT}/cib/__zz_cib_Example-decl.h
	    ${example_ROOT}/cib/__zz_cib_Example-export.h
	    ${example_ROOT}/cib/__zz_cib_Example-ids.h
	    ${example_ROOT}/cib/__zz_cib_Example-mtable.h
	    ${example_ROOT}/cib/__zz_cib_Example-mtable-helper.h
	    ${example_ROOT}/cib/__zz_cib_Example-proxy.h
    )
    set(PUB_FILES "")
    set(EXP_SOURCES "")
    foreach(PUBFILE ${PUB_FILE_BASE_NAMES})
	    list(APPEND LIB_GLUE_SRCS ${example_ROOT}/cib/${PUBFILE}.h.cpp)
	    list(APPEND PUB_FILES ${example_ROOT}/pub/${PUBFILE}.h)
	    list(APPEND EXP_HEADERS ${example_ROOT}/exp/${PUBFILE}.h)
	    list(APPEND EXP_SOURCES ${example_ROOT}/exp/${PUBFILE}.cpp)
    endforeach()
    list(APPEND EXAMPLE_HEADERS ${PUB_FILES})
    foreach(CIBOUTFILE ${LIB_GLUE_SRCS})
	    set_source_files_properties(${CIBOUTFILE} GENERATED)
    endforeach()
    foreach(CIBOUTFILE ${EXP_HEADERS})
	    set_source_files_properties(${CIBOUTFILE} GENERATED)
    endforeach()
    foreach(CIBOUTFILE ${EXP_SOURCES})
	    set_source_files_properties(${CIBOUTFILE} GENERATED)
    endforeach()

    ## Vars that can be changed by CMakeVars.txt file in respective example
    set(CIBCMD ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m Example)
    set(DEPENDS cib ${example}GlueCode)
    include("${example}/CMakeVars.txt")
    
    add_custom_command(
	    OUTPUT ${LIB_GLUE_SRCS}
	    COMMAND echo Running cib...
	    COMMAND ${CIBCMD}
	    COMMAND echo Generated files: ${LIB_GLUE_SRCS}
	    DEPENDS cib CibResources ${PUB_FILES} ${RESPATHS}
	    WORKING_DIRECTORY ${example_ROOT}
    )
    add_custom_target(${example}GlueCode DEPENDS ${LIB_GLUE_SRCS})

    set(LIB_SOURCES
        ${example_ROOT}/src/example-lib.cpp
    )
    add_library(${LIBNAME}
	    SHARED
		    ${LIB_SOURCES}
		    ${PUB_FILES}
		    ${LIB_GLUE_SRCS}
    )
    target_include_directories(${LIBNAME}
	    PRIVATE
		    ${example_ROOT}/pub
    )
    add_dependencies(${LIBNAME} cib ${DEPENDS})

    set(CLIENT_SOURCES
        ${example_ROOT}/src/example-client.cpp
        example-main.cpp
    )
    add_executable(${CLIENTNAME}
	    ${CLIENT_SOURCES}
	    ${EXP_SOURCES}
    )
    add_test(NAME ${CLIENTNAME} COMMAND ${CLIENTNAME})
    add_custom_target(${example}_lcov ${CMAKE_BINARY_DIR}/examples/${example}_client
        COMMAND lcov -c -d ${CMAKE_BINARY_DIR}/CMakeFiles/cib.dir -o ${example}.info || echo "Ignore" >/dev/null
        DEPENDS ${CLIENTNAME}
    )
    string(CONCAT FINAL_LCOV_CMD ${FINAL_LCOV_CMD} " -a ${example}.info")
    list(APPEND LCOV_TARGETS ${example}_lcov)

    target_include_directories(${CLIENTNAME}
	    PRIVATE
		    ${example_ROOT}/exp
    )
    target_link_libraries(${CLIENTNAME}
	    PRIVATE
		    ${LIBNAME}
    )
    if(MSVC)
        set_target_properties(${CLIENTNAME} PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    endif()

	if(NOT MSVC)
		include("${example}/DocCommands.cmake")
		add_dependencies(DiffsForReadMe ${example}DiffsForReadMe)
	endif()
endforeach()

add_custom_target(CibCoverage echo "Running lcov to create final cib.info ..."
    COMMAND echo "${FINAL_LCOV_CMD}" >run-lcov.sh
    COMMAND chmod +x run-lcov.sh
    COMMAND "./run-lcov.sh"
    COMMAND lcov --remove cib.info '*cppparser*' --output-file cib.info
    COMMAND lcov --remove cib.info '*third-party/*' --output-file cib.info
    COMMAND lcov --remove cib.info '*common/*' --output-file cib.info
    COMMAND lcov --remove cib.info '*boost/*' --output-file cib.info
    COMMAND lcov --remove cib.info '/usr/*' --output-file cib.info
    COMMAND genhtml cib.info
    DEPENDS ${LCOV_TARGETS}
)

set(EXAMPLE_HEADERS ${EXAMPLE_HEADERS} PARENT_SCOPE)

