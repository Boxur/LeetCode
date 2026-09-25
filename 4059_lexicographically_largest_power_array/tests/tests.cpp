#include "solution.hpp"
#include <gtest/gtest.h>
#include <vector>

TEST(tests, 1) {
  Solution s;
  std::vector<int> nums{7, 5};
  std::vector<int> correct{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 2};
  auto output = s.largestPower(nums);
  ASSERT_EQ(output, correct);
}

TEST(tests, 2) {
  Solution s;
  std::vector<int> nums{3, 1, 7};
  std::vector<int> correct{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3};
  auto output = s.largestPower(nums);
  ASSERT_EQ(output, correct);
}

TEST(tests, 3) {
  Solution s;
  std::vector<int> nums{2, 11, 4};
  std::vector<int> correct{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 1};
  auto output = s.largestPower(nums);
  ASSERT_EQ(output, correct);
}
