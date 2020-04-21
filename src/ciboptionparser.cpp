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

static bfs::path getResDir(const char* progPath)
{
  auto      progDir = bfs::path(progPath).parent_path();
  bfs::path resDir  = progDir / "cibres";
  return resDir;
}

CibOptionParser::CibOptionParser(int argc, const char* argv[])
  : resourcePath(getResDir(argv[0]).string())
{
  namespace po = boost::program_options;
  po::options_description desc("Allowed options");
  auto                    addOption = [&](const char* name, auto& value, bool isRequired, const char* doc) {
    using valueType = typename std::decay<decltype(value)>::type;
    auto* typedVal  = po::value<valueType>();
    if (isRequired)
      typedVal->required();
    typedVal->notifier([&value](valueType val) { value = val; });
    desc.add(boost::make_shared<po::option_description>(name, typedVal, doc));
  };
  desc.add_options()("help,h", "Produce this help message");
  addOption("input-folder,i", inputPath, true, "Input folder from where the headers and source files will be parsed.");
  addOption("output-folder,o", outputPath, true, "Output folder for emitting files for client.");
  addOption("bind-folder,b", binderPath, true, "Folder where binding code will be emitted for library.");
  addOption("module,m", moduleName, true, "Name of module/library.");
  addOption("cib-ids-file,c", cibIdFile, false, "Previously created cib-ids-file.");
  addOption(
    "library-managed-proxy,p", libraryManagedProxies, false, "Library should not manage proxy object lifecycle.");
  addOption("macro,M", knownMacros, false, "List of comma separated known macro names.");
  addOption("apidecor,A", knownApiDecor, false, "List of comma separated known api decoration names.");
  addOption("ignorable-macros,I", ignorableMacros, false, "Ignorable macros.");
  addOption("no-exact-delegation,d",
            noExactDelegation,
            false,
            "Whether the delegation for non pure virtual function should be exact. Default is to use exact delegation");
  addOption("always-use-unique-namespace,u",
            alwaysUseNsName,
            false,
            "CIB generated glue code are placed in multi layer namespace. "
            "Name of some namespaces are exactly same as class names unless "
            "the class is an instantiation of a template class. "
            "Use this option to always use unique names for namespaces rather than same as class names.");
  addOption("no-rtti,t",
            noRtti,
            false,
            "If library is compiled with no rtti option then CIB needs to know if"
            " it needs to avoid generating code that uses RTTI.");
  addOption("no-exception,e",
            noException,
            false,
            "If library is compiled with no exception option then CIB needs to know if"
            " it needs to avoid generating code to throw exception.");
  addOption(
    "value-class,V",
    valueClasses,
    false,
    "Share the object layout across component boundary and don't use proxies. This option can be used multiple times.");
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
