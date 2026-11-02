#include "application.hpp"

#include <cstdio>
#include <exception>

int main() {
  try {
    viz::Application app;
    app.run();
  } catch (const std::exception &ex) {
    std::fputs(ex.what(), stderr);
  }
  return 0;
}
