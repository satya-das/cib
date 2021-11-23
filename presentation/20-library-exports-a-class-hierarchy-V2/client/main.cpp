#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "Derived.h"

TEST_CASE("Use class hierarchy")
{
  Derived derived;
  Base* pBase = &derived;
  CHECK(pBase->F() == 1);
  CHECK(pBase->Base::G() == 2);
  CHECK(pBase->G() == 3);
  CHECK(derived.H() == 4);

  try {
    const auto expectedEVal = pBase->E();
    CHECK(expectedEVal == 9);
  } catch(const std::bad_function_call&) {
    std::clog << "New client with old library used Base::E() method" << std::endl;
  } catch(...) {
    // fail spectacularly. Should never happen.
    CHECK(false);
  }
}
