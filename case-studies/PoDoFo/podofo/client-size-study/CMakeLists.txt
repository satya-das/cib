# This is not a full standalone CMake configuration for the hello world
# example.
#
# To build it outside the PoDoFo source tree, you must set your build system
# make the PoDoFo headers available and must link to the PoDoFo library
# and any libraries it depends on (see the README,
#     "5. Using PoDoFo in Your Application") .
#
# Note that you don't need the headers for PoDoFo's dependencies in your
# header search path.

ADD_EXECUTABLE(helloworld-cibified
  ${PoDoFo_SOURCE_DIR}/examples/helloworld/helloworld.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfRect.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfString.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfError.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfName.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfDate.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfStream.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfEncodingFactory.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfElement.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfStreamedDocument.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfPainter.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfPage.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfDocument.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfFont.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/doc/PdfInfo.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfObject.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfVariant.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfDataType.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfMemStream.cpp
  ${PoDoFo_SOURCE_DIR}/exp/podofo/base/PdfFileStream.cpp
)

TARGET_LINK_LIBRARIES(helloworld-cibified
  podofo_cibified
)

target_include_directories(helloworld-cibified
  PUBLIC
    ${PoDoFo_SOURCE_DIR}/exp/
    ${PoDoFo_SOURCE_DIR}/exp/__zz_cib_internal
    ${PoDoFo_SOURCE_DIR}/exp/podofo
    ${PoDoFo_BINARY_DIR}
  PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
  )

