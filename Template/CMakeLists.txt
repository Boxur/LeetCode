# TODO: fill out name
cmake_minimum_required(VERSION 3.14)

project("name")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(name
  src/solution.cpp
)
target_include_directories(name PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/f840327b0f76408eafde2440af3b2f0a70662ea6.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tests
  tests/tests.cpp
)

target_link_libraries(tests name GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)
