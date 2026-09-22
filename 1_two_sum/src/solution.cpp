#include "solution.hpp"
#include <unordered_map>
#include <vector>

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> seen;
  for (int i = 0; i < nums.size(); ++i) {
    int searched = target - nums[i];
    if (seen.contains(searched))
      return {seen[searched], i};
    seen[nums[i]] = i;
  }
  return {-1, -1};
}
