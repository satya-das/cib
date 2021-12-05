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

namespace {

namespace po  = boost::program_options;
namespace bfs = boost::filesystem;

static bfs::path getResDir(const char* progPath)
{
  // TODO: Use https://www.boost.org/doc/libs/1_76_0/doc/html/boost/dll/program_location.html
  auto      progDir = bfs::path(progPath).parent_path();
  bfs::path resDir  = progDir / "cibres";
  return resDir;
}

template <typename ValueType>
void processInput(ValueType& value)
{
}

template <>
void processInput(bfs::path& value)
{
  if (value.is_relative())
    value = bfs::absolute(value);
}

} // namespace

CibOptionParser::CibOptionParser(int argc, const char* argv[])
  : resourcePath(getResDir(argv[0]).string())
{
  po::options_description desc("Allowed options");
  auto                    addOption = [&](const char* name, auto& value, bool isRequired, const char* doc) {
    using valueType = typename std::decay<decltype(value)>::type;
    auto* typedVal  = po::value<valueType>();
    if (isRequired)
      typedVal->required();
    typedVal->notifier([&value](valueType inputVal) {
      processInput(inputVal);
      value = std::move(inputVal);
    });
    desc.add(boost::make_shared<po::option_description>(name, typedVal, doc));
  };

  desc.add_options()("help,h", "Produce this help message");
  addOption(
    "input-folder", inputPath, true, "<REQUIRED> Input folder from where the headers and source files will be parsed.");
  addOption("output-folder", outputPath, true, "<REQUIRED> Output folder for emitting files for client.");
  addOption("bind-folder", libGlueDir, true, "<REQUIRED> Folder where binding code will be emitted for library.");
  addOption("module", moduleName, true, "<REQUIRED> Name of module/library.");
  addOption("cib-ids-file", cibIdFile, false, "Previously created cib-ids-file.");
  addOption("macro",
            knownMacros,
            false,
            "This can be used to make parser know about some macros so that parsing of C++ files can be done. This "
            "option can be used multiple times.");
  addOption("apidecor",
            knownApiDecor,
            false,
            "Use this to make parser aware about API decorating macros, like DLLEXPORT which can be defined as "
            "__declspec(dllexport) on Windows. This option can be used multiple times.");
  addOption("undefined-macro",
            undefinedMacros,
            false,
            "Use this to make parser aware about undefined macros that must be taken into account while parsing C++ "
            "headers.\n"
            "Example:\n\t  --undefined-macro SWIG\n"
            "This option can be used multiple times.");
  addOption("defined-macro",
            definedMacros,
            false,
            "Use this to make parser aware about defined macros that must be taken into account while parsing C++ "
            "headers.\n"
            "Example:\n\t  --defined-macro USE_UNICODE:1\n"
            "This option can be used multiple times.");
  addOption("ignorable-macro",
            ignorableMacros,
            false,
            "Use this to make parser aware about ignorable macros that must be taken into account while parsing C++ "
            "headers.\n"
            "Example:\n\t  --ignorable-macro UNUSED_PARAM\n"
            "This option can be used multiple times.");
  addOption("renamed-keyword",
            renamedKeywords,
            false,
            "Use this to make parser aware about keywords that are renamed.\n"
            "Example:\n\t  --renamed-keyword override:OVERRIDE\n"
            "This option can be used multiple times.");
  addOption("no-exact-delegation",
            noExactDelegation,
            false,
            "Whether the delegation for non pure virtual function should be exact. Default is to use exact delegation");
  // addOption("always-use-unique-namespace,u",
  //           alwaysUseNsName,
  //           false,
  //           "CIB generated glue code are placed in multi layer namespace. "
  //           "Name of some namespaces are exactly same as class names unless "
  //           "the class is an instantiation of a template class. "
  //           "Use this option to always use unique names for namespaces rather than same as class names.");
  addOption("no-rtti",
            noRtti,
            false,
            "If library is compiled with no rtti option then CIB needs to know if"
            " it needs to avoid generating code that uses RTTI.");
  addOption("handle-exception",
            handleException,
            false,
            "If library throws exceptions then it should be handled in an ABI stable manner.");
  addOption(
    "wx-style-header-dependency",
    wxStyleHeaderDependency,
    false,
    "It should be set to true if the header dependency is same as what is used in the wxWidgets. In wxWidgets "
    "library, platform specific implementation headers are in separate folders. Although the platform specific headers "
    "depend on the same named file in the parent folder but that file in not included in the platform specific header "
    "file. The same named header in the parent folder includes the platform specific file at the very end.");
  addOption("exception-class",
            exceptionClasses,
            false,
            "To handle exception properly CIB needs to know what are the custom exception classes. Using this option "
            "also means '--handle-exception' option is used.");
  addOption("no-copy-class",
            noCopyClasses,
            false,
            "If the copy constructor is deleted or private then cib already knows about non-copyability of the class. "
            "This option can be used to make cib aware if some other method is used to make a class non-copyable."
            "This option can be used multiple times.");
  addOption("value-class",
            valueClasses,
            false,
            "Share the object layout across component boundary and don't use proxies. "
            "This option can be used multiple times.");
  addOption("interface-class",
            interfaceClasses,
            false,
            "Force a class to be treated as an interface class. Class must have atleast one public virtual method. "
            "NOTE: Classes with at least one pure virtual method are automatically considered as interface class.");

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
