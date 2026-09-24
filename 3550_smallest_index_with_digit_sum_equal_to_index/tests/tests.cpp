#include "solution.hpp"
#include <gtest/gtest.h>

TEST(tests, 1) {
  Solution s;
  std::vector<int> nums{1, 3, 2};
  int correct = 2;
  auto output = s.smallestIndex(nums);
  ASSERT_EQ(output, correct);
}

TEST(tests, 2) {
  Solution s;
  std::vector<int> nums{1, 10, 11};
  int correct = 1;
  auto output = s.smallestIndex(nums);
  ASSERT_EQ(output, correct);
}

TEST(tests, 3) {
  Solution s;
  std::vector<int> nums{1, 2, 3};
  int correct = -1;
  auto output = s.smallestIndex(nums);
  ASSERT_EQ(output, correct);
}
