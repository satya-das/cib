#include "A.h"

#include <iostream>

class DrawLogger : public Context {
  void DrawCircle(float r) override {
    std::cout << "DrawCircle(" << r << ")\n";

    std::cout << std::endl;
  }
};

int main() {
  DrawLogger logger;
  Circle c(5.0);
  c.Draw(&logger);
}
