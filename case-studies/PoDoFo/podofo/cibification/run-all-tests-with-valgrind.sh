#!/bin/bash

# Example run
# From the build folder:
#   $ mkdir -p tmp
#   $ rm -rf tmp/* && time ~/github/podofo/cibification/run-all-tests.sh ~/github/podofo/
#
# NOTE: It assumes existence of tmp dir in the build folder.


if [[ $# -ne 1 ]]
then
    SCRIPT=`basename $0`
    echo "Usage: ${SCRIPT} <PoDoFo root directory>"
    exit 1
fi

PODOFO_ROOT=$1

TMPDIR="tmp"
TESTFILEDIR=$PODOFO_ROOT/cibification/TestFiles
TESTFILE1=$TESTFILEDIR/file-example_PDF_1MB.pdf
TESTFILE2=$TESTFILEDIR/ASamplePDF.pdf
IMGFILE=$TESTFILEDIR/galaxies.jpg
TXTFILE=$TESTFILEDIR/random-text-file

exec 3> valgrind2.log

valgrind --log-fd=3 --leak-check=full ./test/VariantTest/VariantTest                                                                                              2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./examples/helloworld-base14/helloworld-base14              $TMPDIR/helloworld-base14.pdf                                   2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./examples/helloworld/helloworld                            $TMPDIR/helloworld.pdf                                          2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/SignatureTest/SignatureTest                          $TMPDIR/SignatureTest.pdf                                       2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/FormTest/FormTest                                    $TMPDIR/FormTest.pdf                                            2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/ContentParser/ContentParser -a                       $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/TokenizerTest/TokenizerTest                          $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofocountpages/podofocountpages                   $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofoincrementalupdates/podofoincrementalupdates   $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofopdfinfo/podofopdfinfo                         $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofotxtextract/podofotxtextract                   $TESTFILE1                                                      2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofoimgextract/podofoimgextract                   $TESTFILE1                      $TMPDIR                         2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/ParserTest/ParserTest                                $TESTFILE1                      $TMPDIR/ParserTest.pdf          2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/WatermarkTest/WatermarkTest                          $TESTFILE1                      $TMPDIR/WatermarkTest.pdf       2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofocolor/podofocolor grayscale                   $TESTFILE1                      $TMPDIR/podofocolor.pdf         2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofocrop/podofocrop                               $TESTFILE1                      $TMPDIR/podofocrop.pdf          2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofoencrypt/podofoencrypt -u UP -o OP             $TESTFILE1                      $TMPDIR/podofoencrypt.pdf       2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofogc/podofogc                                   $TESTFILE1                      $TMPDIR/podofogc.pdf            2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofopages/podofopages -move 1 2                   $TESTFILE1                      $TMPDIR/podofopages1.pdf        2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofopages/podofopages -delete 2                   $TESTFILE1                      $TMPDIR/podofopages2.pdf        2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofouncompress/podofouncompress                   $TESTFILE1                      $TMPDIR/podofouncompress.pdf    2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofotxt2pdf/podofotxt2pdf                         $TXTFILE                        $TMPDIR/podofotxt2pdf.pdf       2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofomerge/podofomerge                             $TESTFILE1 $TESTFILE2           $TMPDIR/podofomerge.pdf         2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/LargeTest/LargeTest                                  $TMPDIR/LargeTest1.pdf          $IMGFILE                        2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./test/LargeTest/LargeTest -m                               $TMPDIR/LargeTest2.pdf          $IMGFILE                        2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt
valgrind --log-fd=3 --leak-check=full ./tools/podofoimg2pdf/podofoimg2pdf                         $TMPDIR/podofoimg2pdf.pdf       $IMGFILE                        2>tmp/${LINENO}.err.txt 1>tmp/${LINENO}.out.txt

exec 3>&-
