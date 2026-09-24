#include "solution.hpp"
#include <gtest/gtest.h>

TEST(tests, 1) {
  Solution sol;
  std::string s = "abcabcbb";
  int correct = 3;
  auto output = sol.lengthOfLongestSubstring(s);
  ASSERT_EQ(output, correct);
}

TEST(tests, 2) {
  Solution sol;
  std::string s = "bbbbb";
  int correct = 1;
  auto output = sol.lengthOfLongestSubstring(s);
  ASSERT_EQ(output, correct);
}

TEST(tests, 3) {
  Solution sol;
  std::string s = "pwwkew";
  int correct = 3;
  auto output = sol.lengthOfLongestSubstring(s);
  ASSERT_EQ(output, correct);
}

TEST(tests, 4) {
  Solution sol;
  std::string s = "baaabca";
  int correct = 3;
  auto output = sol.lengthOfLongestSubstring(s);
  ASSERT_EQ(output, correct);
}

TEST(tests, 5) {
  Solution sol;
  std::string s = "bccddadcb";
  int correct = 4;
  auto output = sol.lengthOfLongestSubstring(s);
  ASSERT_EQ(output, correct);
}
