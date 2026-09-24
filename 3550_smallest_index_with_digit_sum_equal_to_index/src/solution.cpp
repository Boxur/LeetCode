#include "solution.hpp"

int Solution::smallestIndex(std::vector<int> &nums) {
  for (int i = 0; i < nums.size(); ++i) {
    int n = nums[i];
    int num = 0;
    while (n > 0) {
      num += n % 10;
      n /= 10;
    }
    if (num == i)
      return i;
  }
  return -1;
}
