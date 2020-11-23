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
}
