#pragma once

#include "window.hpp"

#include <imgui.h>

namespace viz {

class Application {
public:
  Application();

  void run();

  ~Application();

private:
  viz::Window window_{};
  ImGuiIO io_;
};

} // namespace viz
