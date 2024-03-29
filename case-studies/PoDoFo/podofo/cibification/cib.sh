../../../../build/cib                                       \
  --module CibPoDoFo                                        \
  --bind-folder ../cib/                                     \
  --input-folder src/                                       \
  --output-folder ../exp/                                   \
  --cib-ids-file ../cib/__zz_cib_CibPoDoFo-ids.h            \
  --apidecor PODOFO_DEPRECATED                              \
  --apidecor PODOFO_API                                     \
  --apidecor PODOFO_DOC_API                                 \
  --apidecor PODOFO_EXCEPTION_API_DOXYGEN                   \
  --apidecor PODOFO_NOTHROW                                 \
  --macro    PODOFO_RAISE_LOGIC_IF                          \
  --ignorable-macro PODOFO_LOCAL                            \
  --ignorable-macro PDF_SIZE_FORMAT

#git checkout exp/podofo/base/PdfEncrypt.cpp
#git checkout exp/__zz_cib_internal/__zz_cib_Class264.h
