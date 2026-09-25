#include "solution.hpp"
#include <climits>
#include <cstddef>
#include <utility>

std::vector<int> Solution::largestPower(std::vector<int> &nums) {
  int mask{INT_MAX};
  int best{};

  std::vector<int> ret(15, 0);
  std::size_t s{nums.size()};
  for (std::size_t i{}; i < s; ++i) {
    best = -1;
    for (std::size_t j{}; j < s - i; ++j) {
      nums[j] &= mask;
      if (best == -1 || nums[best] < nums[j])
        best = j;
    }
    mask = nums[best];
    for (std::size_t j = 15; j-- > 0;) {
      ret[j] += nums[best] % 2;
      nums[best] /= 2;
    }

    std::swap(nums[best], nums[s - 1 - i]);
  }
  return ret;
}
