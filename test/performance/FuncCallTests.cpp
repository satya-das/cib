#include "FuncCallClass.h"

#include <iostream>
#include <chrono>

void TestFuncCall()
{
  auto start = std::chrono::system_clock::now();
  FuncCallClass funcCall;
  for (unsigned i = 0; i < 1000000; ++i)
    funcCall.FuncWith3Param(1, true, 'n');
  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> diff = end - start;
  std::cout << __FUNCTION__ << ": " << diff.count() << '\n';
}
