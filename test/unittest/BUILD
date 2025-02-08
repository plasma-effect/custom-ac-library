cc_test(
    name = "ac_library_test",
    srcs = glob(["*.cpp"]),
    deps = [
      "//:ac_library",
      "//test/utils",
      "@googletest//:gtest",
      "@googletest//:gtest_main"
    ],
    copts = [
      "-std=c++20",
      "-Wall",
      "-Wextra",
      "-Wshadow",
      "-Wconversion",
      "-Wno-sign-conversion",
      "-Werror",
      "-fsanitize=undefined,address",
      "-fno-sanitize-recover=all"
    ],
    linkopts = [
      "-fsanitize=undefined,address"
    ]
)
