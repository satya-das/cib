set(CIBCMD $<TARGET_FILE:cib> -i pub -o exp -b cib -m Example --exception-class=CustomBaseException)

list(APPEND EXP_SOURCES
  ${example_ROOT}/exp/__zz_cib_internal/__zz_cib_Example-exception-throw-on-error.cpp
)
