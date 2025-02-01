cmake_policy(SET CMP0048 NEW)
project(ACLibrary)

cmake_minimum_required(VERSION 3.17)

if(NOT "${CMAKE_CXX_STANDARD}")
  set(CMAKE_CXX_STANDARD 20)
endif()
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT MSVC)
    message("Not MSVC")
    add_compile_options(-Wall -Wextra -Wshadow -Wconversion -Wno-sign-conversion -Werror)
    add_compile_options(-fsanitize=undefined,address -fno-sanitize-recover=all)
    add_link_options(-fsanitize=undefined,address)
else()
    message("Use MSVC")
    add_compile_options(/W4 /permissive- /sdl)
endif()

enable_testing()

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include(GoogleTest)

include_directories(.)
include_directories(../../)

add_executable(AllTest
  basic_test.cpp
  convolution_test.cpp
  fenwicktree_test.cpp
  lazysegtree_stress_test.cpp
  math_test.cpp
  mincostflow_test.cpp
  scc_test.cpp
  string_test.cpp
  type_traits_test.cpp
  dsu_test.cpp
  internal_math_test.cpp
  lazysegtree_test.cpp
  maxflow_test.cpp
  modint_test.cpp
  segtree_test.cpp
  twosat_test.cpp
  utils/math_test.cpp)
target_link_libraries(AllTest gtest gtest_main)
gtest_discover_tests(AllTest)
