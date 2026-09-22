#include "solution.hpp"
#include <gtest/gtest.h>

TEST(tests, 1) {
  Solution s;
  std::vector<int> nums{2, 7, 11, 15};
  int target = 9;
  auto output = s.twoSum(nums, target);
  ASSERT_EQ(output[0], 0);
  ASSERT_EQ(output[1], 1);
}

TEST(tests, 2) {
  Solution s;
  std::vector<int> nums{3, 2, 4};
  int target = 6;
  auto output = s.twoSum(nums, target);
  ASSERT_EQ(output[0], 1);
  ASSERT_EQ(output[1], 2);
}

TEST(tests, 3) {
  Solution s;
  std::vector<int> nums{3, 3};
  int target = 6;
  auto output = s.twoSum(nums, target);
  ASSERT_EQ(output[0], 0);
  ASSERT_EQ(output[1], 1);
}
