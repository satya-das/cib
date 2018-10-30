
cmake_minimum_required(VERSION 3.4)

include("../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${BASEOUTDIR}/pdb)

set(EXAMPLES example1 example2)
foreach(example ${EXAMPLES})
    set(example_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example}_client)

    set(PUB_FILE_NAMES
	    example.h
    )
    set(LIB_GLUE_SRCS
	    ${example_ROOT}/cib/__zz_cib_Example.cpp
	    ${example_ROOT}/cib/__zz_cib_Example-classId-repo.cpp
	    ${example_ROOT}/cib/__zz_cib_Example-decl.h
	    ${example_ROOT}/cib/__zz_cib_Example-export.h
	    ${example_ROOT}/cib/__zz_cib_Example-ids.h
	    ${example_ROOT}/cib/__zz_cib_Example-mtable.h
	    ${example_ROOT}/cib/__zz_cib_Example-mtable-helper.h
	    ${example_ROOT}/cib/__zz_cib_Example-proxy.h
    )
    set(PUB_FILES "")
    foreach(PUBFILE ${PUB_FILE_NAMES})
	    list(APPEND LIB_GLUE_SRCS ${example_ROOT}/cib/${PUBFILE}.cpp)
	    list(APPEND PUB_FILES ${example_ROOT}/pub/${PUBFILE})
    endforeach()
    foreach(CIBOUTFILE ${LIB_GLUE_SRCS})
	    set_source_files_properties(${CIBOUTFILE} GENERATED)
    endforeach()

    set(CIBCMD ${BINDIR}/cib -i pub -o exp -b cib -m Example)
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
    )
    file(GLOB EXP_SOURCES
	    ${example_ROOT}/exp/*.cpp
    )
    add_executable(${CLIENTNAME}
	    ${CLIENT_SOURCES}
	    ${EXP_SOURCES}
    )
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
endforeach()

