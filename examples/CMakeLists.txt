cmake_minimum_required(VERSION 2.8.7)

include("../../common/cmake/conf.cmake")

add_custom_target(ExamplesReadme ALL)
set(EXAMPLE_HEADERS "")
set(FINAL_LCOV_CMD "lcov -o cib.info")
set(LCOV_TARGETS "")

# We are using single CMakeLists.txt for all exxamples.
# Because we do not want to make same change in all files if we want to.

foreach(example ${EXAMPLES})
    set(example_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example})

    set(LIB_GLUE_SRCS_EXTRA "")
    include("${example}/lists.cmake")
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

