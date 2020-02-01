cmake_minimum_required(VERSION 2.8.7)

include("../../common/cmake/conf.cmake")

add_custom_target(ExamplesReadme ALL)
set(EXAMPLE_HEADERS "")

# We are using single CMakeLists.txt for all exxamples.
# Because we do not want to make same change in all files if we want to.

foreach(example ${EXAMPLES})
    set(example_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example})

    set(LIB_GLUE_SRCS_EXTRA "")
    include("${example}/lists.cmake")
endforeach()

set(EXAMPLE_HEADERS ${EXAMPLE_HEADERS} PARENT_SCOPE)

