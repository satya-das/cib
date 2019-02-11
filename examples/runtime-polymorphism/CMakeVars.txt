set(CIBCMD ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m Example)
set(DEPENDS cib ${example}GlueCode simple-class_lib)

