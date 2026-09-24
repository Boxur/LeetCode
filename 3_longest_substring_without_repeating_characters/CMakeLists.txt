cmake_minimum_required(VERSION 3.14)

project("longest_substring_without_repeating_characters")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(longest_substring_without_repeating_characters
  src/solution.cpp
)
target_include_directories(longest_substring_without_repeating_characters PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

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

target_link_libraries(tests longest_substring_without_repeating_characters GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)
