set(${example}DiffFilesForReadMe
    ${example_ROOT}/readme-assets/header-diff.diff
    ${example_ROOT}/readme-assets/ids-diff.diff
    ${example_ROOT}/readme-assets/lib-glue-diff.diff
    ${example_ROOT}/readme-assets/proxy-diff.diff
    ${example_ROOT}/readme-assets/impl-diff.diff
)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/readme-assets/
    COMMAND diff -Bw -U 1000 --label pub/example.h --label exp/example.h pub/example.h exp/example.h >readme-assets/header-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -u --label ../0010-simple-class/cib/__zz_cib_Example-ids.h ../0010-simple-class/cib/__zz_cib_Example-ids.h --label cib/__zz_cib_Example-ids.h cib/__zz_cib_Example-ids.h >readme-assets/ids-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -u --label ../0010-simple-class/cib/example.h.cpp --label cib/example.h.cpp ../0010-simple-class/cib/example.h.cpp cib/example.h.cpp >readme-assets/lib-glue-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -U 1000 --label ../0010-simple-class/exp/example.h --label exp/example.h ../0010-simple-class/exp/example.h exp/example.h >readme-assets/proxy-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -u --label ../0010-simple-class/exp/__zz_cib_internal/example-postdef.h --label exp/__zz_cib_internal/example-postdef.h ../0010-simple-class/exp/__zz_cib_internal/example-postdef.h exp/__zz_cib_internal/example-postdef.h >readme-assets/impl-diff.diff || echo "Ignore failure" >/dev/null
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/exp/example.h
    WORKING_DIRECTORY ${example_ROOT}
)

include("${example_ROOT}/../example-common-doc-cmd.cmake")

