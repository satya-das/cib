#include "A.h"

#include <assert.h>
#include <iostream>

class DrawLogger : public Context {
  void DrawCircle(float r) override {
    std::cout << "DrawCircle(" << r << ")";
  }
};

int main() {
  DrawLogger logger;
  Circle c(5.0);
  c.Draw(&logger);
}
