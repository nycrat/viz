load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":application",
    ],
)

cc_library(
    name = "application",
    srcs = ["application.cpp"],
    hdrs = ["application.hpp"],
    deps = [
        ":window",
        "@imgui//:imgui",
        "@imgui//backends:platform-glfw",
        "@imgui//backends:renderer-opengl3",
    ],
)

cc_library(
    name = "window",
    srcs = ["window.cpp"],
    hdrs = ["window.hpp"],
    deps = [
        "@imgui//backends:platform-glfw",
    ],
)
