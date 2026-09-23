#include "solution.hpp"
#include <unordered_map>

int Solution::minOperations(std::vector<int> &nums, int x) {
  int best = -1;
  std::unordered_map<int, int> lvalues;
  lvalues[0] = 0;
  int s = 0;
  for (int i = 0; i < nums.size(); ++i) {
    s += nums[i];
    if (s > x)
      break;
    lvalues[s] = i + 1;
  }
  s = 0;
  for (int i = nums.size() - 1; i >= 0; --i) {
    int searched = x - s;
    if (lvalues.contains(searched) && lvalues[searched] - 1 <= i) {
      int val = lvalues[searched] + nums.size() - 1 - i;
      if (val < best || best == -1)
        best = val;
    }
    s += nums[i];
    if (s > x)
      break;
  }
  return best;
}
