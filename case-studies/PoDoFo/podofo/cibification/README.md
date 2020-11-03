Case study of CIB architecture and cib tool with PoDoFo library
===============================================================

# Setup

## Changes in headers

This folder contains `src` subfolder that contains slightly modified headers from original podofo headers.
Changes were required for cib tool to work properly. Since cib tool relies on parsing of C++ headers it is very difficult business. A tool that depends on parsing of C++ files cannot be perfect as C++ files can be overwhemingly complex that can make any tool useless. Since parsing for implementing CIB architecture only requres parsing of public headers it is expected that public headers will be reasonably clean. The changes in `src` subfolder was done to make headers reasonably clean so that CIB can understand them.

A thing to note is that a limitation of cib tool is not necessarily a limitation of CIB architecture. CIB architecture in principle can be implemented using hand written code.

## Changes in headers and sources

The original headers and sources also needed some change:
  - There were functions for which no definition was present, they needed removal.
  - Variable parameter function support is not yet present in CIB tool and so they were modified for simplification.

# Report
All example and test programs were built to use cibified library and the results are compared:

## Runtime Performance
All examples and tests were run sequentially using a [shell script](run-all-tests.sh) on Ubuntu and total time were reported using `time` command.

| Original library (sec) | Cibiffied library (sec) | Diff (sec) | Diff (%) |
| ---------------------- | ----------------------- | ---------- | -------- |
| 18.931                 | 18.846                  | -0.085     | -0.45%   |
| 18.837                 | 18.953                  | 0.116      | 0.62%    |
| 18.731                 | 18.914                  | 0.183      | 0.98%    |
| 18.825                 | 18.970                  | 0.145      | 0.77%    |
| 18.848                 | 18.878                  | 0.030      | 0.16%    |


| SUMMARY              | % degrade | Actual (sec) |
| -------------------- | --------- | ------------ |
| MAX performance diff | 0.98%     | +0.18        |
| MIN performance diff | -0.45%    | -0.09        |
| AVERAGE diff         | 0.41%     | +0.08        |

## Memory Usage
All examples and tests were run with `valgrind` on Ubuntu and reported momery usage is tabulated. See [shell script](run-all-tests-with-valgrind.sh).

| TEST NAME                | Orig Memory Usage | Cibified Usage | Diff     | %Diff  |
| ------------------------ | ----------------- | -------------- | -------- | ------ |
| VariantTest              | 351,771           | 388681         | 36910    | 10.49% |
| helloworld-base14        | 6,709,476         | 6737268        | 27792    | 0.41%  |
| helloworld               | 4,501,549         | 4512917        | 11368    | 0.25%  |
| SignatureTest            | 539,088           | 550576         | 11488    | 2.13%  |
| FormTest                 | 984,632           | 1007304        | 22672    | 2.30%  |
| ContentParser            | 71,390,442        | 72525690       | 1135248  | 1.59%  |
| TokenizerTest            | 88,288            | 94160          | 5872     | 6.65%  |
| podofocountpages         | 357,233           | 363985         | 6752     | 1.89%  |
| podofoincrementalupdates | 313,493           | 320829         | 7336     | 2.34%  |
| podofopdfinfo            | 1,432,199         | 1509007        | 76808    | 5.36%  |
| podofotxtextract         | 83,046,069        | 130085229      | 47039160 | 56.64% |
| podofoimgextract         | 4,736,436         | 4916292        | 179856   | 3.80%  |
| ParserTest               | 4,976,589         | 4984381        | 7792     | 0.16%  |
| WatermarkTest            | 15,895,690        | 15916362       | 20672    | 0.13%  |
| podofocolor              | 83,461,280        | 89344728       | 5883448  | 7.05%  |
| podofocrop               | 5,121,150         | 5175887        | 54737    | 1.07%  |
| podofoencrypt            | 6,090,495         | 6098607        | 8112     | 0.13%  |
| podofogc                 | 4,976,589         | 4984381        | 7792     | 0.16%  |
| podofopages1             | 5,017,816         | 5025216        | 7400     | 0.15%  |
| podofopages2             | 5,005,814         | 5012830        | 7016     | 0.14%  |
| podofouncompress         | 132,910,914       | 133029538      | 118624   | 0.09%  |
| podofotxt2pdf            | 101,835           | 108661         | 6826     | 6.70%  |
| podofomerge              | 5,392,759         | 5400031        | 7272     | 0.13%  |
| LargeTest1               | 162,066,882       | 162377210      | 310328   | 0.19%  |
| LargeTest2               | 478,000,526       | 478310902      | 310376   | 0.06%  |
| podofoimg2pdf            | 1,177,174         | 1185846        | 8672     | 0.74%  |

| SUMMARY             | Diff of memory usage | % diff |
| ------------------- | -------------------- | ------ |
| MAX Memory Diff     | 47,039,160           | 56.64% |
| AVERAGE Memory Diff | 2,127,705            | 4.26%  |

Other than an outlier the extra memory consumption isn't bad. Despite the outlier on average the extra memory consumption is only **4.26%** higher.

_Only heap memory is computed and static memory is not part of this report_

# Future improvements

While `std::vector`, `std::list`, and `std::function` were properly cibified, some STL classes like `std:string`, `std::ostream` etc. were allowed to pass component boundary as is, this can be a bottleneck in ascertaining ABI compatibility and stability. Further work is needed to avoid exporting them as is.
Nevertheless the aim of this case study is to check viability of the architecture and the tool. I don't expect much change even when these remaining STL objects are properly cibified.

# To Build And Test

## To Build
While in folder `cib/case-studies/PoDoFo/podofo`, do:

```sh
mkdir build
cd build
cmake -G Ninja -DPODOFO_BUILD_CIBIFIED:BOOL=TRUE -DPODOFO_USE_VISIBILITY:BOOL=TRUE ..
ninja
```

## To Run all tests

Whild in `build` folder, do:

```sh
mkdir tmp
../cibification/run-all-tests.sh ..
```
