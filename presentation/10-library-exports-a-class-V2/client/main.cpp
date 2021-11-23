#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "Circle.h"

TEST_CASE("Client should be able to use library class")
{
  Circle c(2);
  std::cout << "Area of circle is " << c.Area() << "." << std::endl;

  CHECK(c.Radius() == 2);
  const float expectedArea1 = 3.1416*c.Radius()*c.Radius();
  CHECK(c.Area() == expectedArea1);

  c.SetRadius(5);
  CHECK(c.Radius() == 5);
  const float expectedArea2 = 3.1416*c.Radius()*c.Radius();
  CHECK(c.Area() == expectedArea2);

  try {
    Circle c2(1, 1, 5);
    CHECK(c2.Radius() == 5);
  } catch(const std::bad_function_call&) {
    std::clog << "New client with old library used new Circle constructor" << std::endl;
  } catch(...) {
    // fail spectacularly. Should never happen.
    CHECK(false);
  }

  try {
    const auto p = c.Perimeter();
    const float expectedPerimeter = 2 * 3.1416 * c.Radius();
    CHECK(p == expectedPerimeter);
  } catch(const std::bad_function_call&) {
    std::clog << "New client with old library used Perimeter() method" << std::endl;
  } catch(...) {
    // fail spectacularly. Should never happen.
    CHECK(false);
  }

  // Code for presentation
  {

    try {

      Circle c2(1, 1, 5);
      CHECK(c2.Radius() == 5);
      const auto p = c.Perimeter();
      const float expectedPerimeter = 2 * 3.1416 * c.Radius();
      CHECK(p == expectedPerimeter);

    } catch(const std::bad_function_call&) {

      std::clog << "New client with old library" << std::endl;

    }

  }
}
