set(CIBCMD $<TARGET_FILE:cib> --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example --exception-class=CustomBaseException)

list(APPEND EXP_SOURCES
  ${example_ROOT}/exp/__zz_cib_internal/__zz_cib_Example-exception-throw-on-error.cpp
)
