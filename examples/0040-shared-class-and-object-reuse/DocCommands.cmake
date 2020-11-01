set(${example}DiffFilesForReadMe
    ${example_ROOT}/readme-assets/impl-diff.diff
    ${example_ROOT}/readme-assets/helper-diff.diff
)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/readme-assets/

    COMMAND diff -Bw -U 1000 --label 0010-simple-class/exp/example.cpp --label exp/example.cpp ${example_ROOT}/../0010-simple-class/exp/example.cpp exp/example.cpp >${example_ROOT}/readme-assets/impl-diff.diff || echo "Ignore failure" >/dev/null

    COMMAND diff -Bw -U 1000 --label 0010-simple-class/exp/__zz_cib_internal/example-postdef.h --label exp/__zz_cib_internal/example-postdef.h ${example_ROOT}/../0010-simple-class/exp/__zz_cib_internal/example-postdef.h exp/__zz_cib_internal/example-postdef.h >${example_ROOT}/readme-assets/helper-diff.diff || echo "Ignore failure" >/dev/null

    DEPENDS ${example_ROOT}/exp/example.cpp ${example_ROOT}/../0010-simple-class/exp/example.cpp
    WORKING_DIRECTORY ${example_ROOT}
)

include("${example_ROOT}/../example-common-doc-cmd.cmake")

