## To Build

While in folder `cib/case-studies/PoDoFo/podofo`, do:
cmake -G Ninja -DPODOFO_BUILD_CIBIFIED:BOOL=TRUE -DPODOFO_USE_VISIBILITY:BOOL=TRUE ..
```sh
mkdir build
cd build
cmake -G Ninja -DPODOFO_BUILD_CIBIFIED:BOOL=TRUE -DPODOFO_USE_VISIBILITY:BOOL=TRUE ..
ninja
```

To run all tests:

```sh
mkdir tmp
../cibification/run-all-tests.sh ..
```
