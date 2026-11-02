#pragma once

#define GL_SILENCE_DEPRECATION
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h>

namespace viz {

class Window {
public:
  Window();
  ~Window();

  GLFWwindow *operator()() { return window_; }
  float scale() const { return scale_; }
  char *glsl_version() const { return glsl_version_; }

private:
  GLFWwindow *window_;
  float scale_;
  char *glsl_version_;
};

} // namespace viz
