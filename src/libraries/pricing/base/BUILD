# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)
filegroup(
    name = "libraries_pricing_base_incs",
    srcs = glob([
        "inc/*.h",
    ]),
)

filegroup(
    name = "libraries_pricing_base_srcs",
    srcs = glob([
        "src/*.cc",
    ]),
)

cc_library(
    name = "libraries_pricing_base_library",
    srcs = [":libraries_pricing_base_srcs"],
    hdrs = [":libraries_pricing_base_incs"],
    includes = [":libraries_pricing_base_incs"],
    deps = [
    ],
    linkstatic=1
)

# cc_test(
#     name = "libraries_pricing_base_library_unit_tests",
#     srcs = [
#         "tests/unit/calculation_tests.cc",
#     ],
#     size = "small",
#     visibility = [
#         "//visibility:private",
#     ],
#     deps = [
#      "@com_github_google_test//:gtest_main",
#      ":libraries_pricing_currency_spot_arbitrage_library",
#     ]
# )

cc_test(
  name = "libraries_pricing_currency_spot_arbitrage_library_performance_tests",
  srcs = ["tests/performance/calculation_tests.cc"],
  deps = [
    "@com_github_google_benchmark//:benchmark_main",
    ":libraries_pricing_currency_spot_arbitrage_library",
  ]
)
