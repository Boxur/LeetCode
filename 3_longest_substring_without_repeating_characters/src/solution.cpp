#include "solution.hpp"
#include <print>

int Solution::lengthOfLongestSubstring(std::string s) {
  int where[256]{}, l{}, r{}, ret{}, cur{};
  for (int i = 0; i < s.size(); i++) {
    if (where[s[i]] == 0) {
      where[s[i]] = i + 1;

    } else {
      if (where[s[i]] > l)
        l = where[s[i]];
      where[s[i]] = i + 1;
    }
    ++r;
    cur = r - l;
    if (ret < cur)
      ret = cur;
  }
  return ret;
}
