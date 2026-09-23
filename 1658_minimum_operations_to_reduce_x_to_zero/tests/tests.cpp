#include "solution.hpp"
#include <gtest/gtest.h>

TEST(tests, 1) {
  Solution s;
  int x = 5;
  std::vector<int> nums = {1, 1, 4, 2, 3};
  int correct = 2;
  auto output = s.minOperations(nums, x);
  ASSERT_EQ(output, correct);
}

TEST(tests, 2) {
  Solution s;
  int x = 4;
  std::vector<int> nums = {5, 6, 7, 8, 9};
  int correct = -1;
  auto output = s.minOperations(nums, x);
  ASSERT_EQ(output, correct);
}

TEST(tests, 3) {
  Solution s;
  int x = 10;
  std::vector<int> nums = {3, 2, 20, 1, 1, 3};
  int correct = 5;
  auto output = s.minOperations(nums, x);
  ASSERT_EQ(output, correct);
}

TEST(tests, 4) {
  Solution s;
  int x = 3;
  std::vector<int> nums = {1, 1};
  int correct = -1;
  auto output = s.minOperations(nums, x);
  ASSERT_EQ(output, correct);
}

TEST(tests, 5) {
  Solution s;
  int x = 134365;
  std::vector<int> nums = {8828,  9581,  49,   9818, 9974, 9869, 9991, 10000,
                           10000, 10000, 9999, 9993, 9904, 8819, 1231, 6309};
  int correct = 16;
  auto output = s.minOperations(nums, x);
  ASSERT_EQ(output, correct);
}
