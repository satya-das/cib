set(${example}DiffFilesForReadMe
    ${example_ROOT}/header-diff.diff
    ${example_ROOT}/ids-diff.diff
    ${example_ROOT}/lib-glue-diff.diff
    ${example_ROOT}/proxy-diff.diff
    ${example_ROOT}/impl-diff.diff
)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/../readme-assets/${example}
    COMMAND diff -Bw -U1000 --label pub/example.h --label exp/example.h pub/example.h exp/example.h >../readme-assets/${example}/header-diff.diff || echo $$\? >/dev/null
    COMMAND diff -Bw -u --label ../example1/cib/__zz_cib_Example-ids.h ../example1/cib/__zz_cib_Example-ids.h --label cib/__zz_cib_Example-ids.h cib/__zz_cib_Example-ids.h >../readme-assets/${example}/ids-diff.diff || echo $$\? >/dev/null
    COMMAND diff -Bw -u --label ../example1/cib/example.h.cpp --label cib/example.h.cpp ../example1/cib/example.h.cpp cib/example.h.cpp >../readme-assets/${example}/lib-glue-diff.diff || echo $$\? >/dev/null
    COMMAND diff -Bw -U1000 --label ../example1/exp/example.h --label exp/example.h ../example1/exp/example.h exp/example.h >../readme-assets/${example}/proxy-diff.diff || echo $$\? >/dev/null
    COMMAND diff -Bw -u --label ../example1/exp/__zz_cib_internal/example-impl.h --label exp/__zz_cib_internal/example-impl.h ../example1/exp/__zz_cib_internal/example-impl.h exp/__zz_cib_internal/example-impl.h >../readme-assets/${example}/impl-diff.diff || echo $$\? >/dev/null
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/exp/example.h
    WORKING_DIRECTORY ${example_ROOT}
)

add_custom_target(${example}DiffsForReadMe ALL DEPENDS ${${example}DiffFilesForReadMe})

