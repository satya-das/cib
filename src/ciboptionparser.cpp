/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "ciboptionparser.h"

#include <boost/make_shared.hpp>
#include <boost/program_options.hpp>

#include <iostream>

CibOptionParser::CibOptionParser(int argc, const char* argv[])
{
  namespace po = boost::program_options;
  po::options_description desc("Allowed options");
  auto                    addOption = [&](const char* name, auto& value, bool isRequired) {
    using valueType = typename std::decay<decltype(value)>::type;
    auto* typedVal  = po::value<valueType>();
    if (isRequired)
      typedVal->required();
    typedVal->notifier([&value](valueType val) { value = val; });
    desc.add(boost::make_shared<po::option_description>(name, typedVal));
  };
  desc.add_options()("help,h", "produce help message");
  addOption("input-folder,i", inputPath, true);
  addOption("output-folder,o", outputPath, true);
  addOption("bind-folder,b", binderPath, true);
  addOption("module,m", moduleName, true);
  addOption("cib-ids-file,c", cibIdFile, false);
  addOption("macro,M", knownMacros, false);
  addOption("apidecor,A", knownApiDecor, false);
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);

  if (vm.count("help"))
  {
    std::cout << desc << "\n";
    exit(0);
  }
  try
  {
    po::notify(vm);
  }
  catch (std::exception& e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    std::cout << desc << "\n";
    exit(-1);
  }
}
