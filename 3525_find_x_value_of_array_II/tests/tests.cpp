#include "solution.hpp"
#include <gtest/gtest.h>
#include <vector>

TEST(test, 1) {
  Solution s;
  std::vector<int> nums{1, 2, 3, 4, 5};
  int k = 3;
  std::vector<std::vector<int>> queries{
      {2, 2, 0, 2}, {3, 3, 3, 0}, {0, 1, 0, 1}};
  auto output = s.resultArray(nums, k, queries);
  std::vector<int> correct{2, 2, 2};
  ASSERT_EQ(output, correct);
}

TEST(test, 2) {
  Solution s;
  std::vector<int> nums{1, 2, 4, 8, 16, 32};
  int k = 4;
  std::vector<std::vector<int>> queries{{0, 2, 0, 2}, {0, 2, 0, 1}};
  auto output = s.resultArray(nums, k, queries);
  std::vector<int> correct{1, 0};
  ASSERT_EQ(output, correct);
}

TEST(test, 3) {
  Solution s;
  std::vector<int> nums{1, 1, 2, 1, 1};
  int k = 2;
  std::vector<std::vector<int>> queries{{2, 1, 0, 1}};
  auto output = s.resultArray(nums, k, queries);
  std::vector<int> correct{5};
  ASSERT_EQ(output, correct);
}
