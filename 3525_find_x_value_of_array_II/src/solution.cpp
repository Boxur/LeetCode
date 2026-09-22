#include "solution.hpp"
#include <vector>

std::vector<int> Solution::resultArray(std::vector<int> &nums, int k,
                                       std::vector<std::vector<int>> &queries) {
  std::vector<int> results;
  results.reserve(queries.size());
  int y = 0;
  for (auto &q : queries) {
    int x = q[3];
    nums[q[0]] = q[1];
    int mult = 1;
    int counter = 0;
    for (int i = q[2]; i < nums.size(); ++i) {
      if (mult == 0) {
        if (x == 0)
          counter += nums.size() - i;
        break;
      }
      mult = (mult * nums[i] % k) % k;
      if (mult == x)
        counter++;
    }
    results.push_back(counter);
  }
  return results;
}
