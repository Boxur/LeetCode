#include "solution.hpp"
#include <gtest/gtest.h>

TEST(TESTS, 1) {
  Solution s;
  ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
  ListNode *correct = new ListNode(7, new ListNode(0, new ListNode(8)));
  auto output = s.addTwoNumbers(l1, l2);
  while (correct != nullptr) {
    ASSERT_TRUE(output != nullptr);
    ASSERT_EQ(output->val, correct->val);
    output = output->next;
    correct = correct->next;
  }
}

TEST(TESTS, 2) {
  Solution s;
  ListNode *l1 = new ListNode(0);
  ListNode *l2 = new ListNode(0);
  ListNode *correct = new ListNode(0);
  auto output = s.addTwoNumbers(l1, l2);
  while (correct != nullptr) {
    ASSERT_TRUE(output != nullptr);
    ASSERT_EQ(output->val, correct->val);
    output = output->next;
    correct = correct->next;
  }
}

TEST(TESTS, 3) {
  Solution s;
  ListNode *l1 = new ListNode(
      9,
      new ListNode(
          9,
          new ListNode(
              9, new ListNode(
                     9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
  ListNode *l2 =
      new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
  ListNode *correct = new ListNode(
      8,
      new ListNode(
          9, new ListNode(
                 9, new ListNode(
                        9, new ListNode(
                               0, new ListNode(
                                      0, new ListNode(0, new ListNode(1))))))));
  auto output = s.addTwoNumbers(l1, l2);
  while (correct != nullptr) {
    ASSERT_TRUE(output != nullptr);
    ASSERT_EQ(output->val, correct->val);
    output = output->next;
    correct = correct->next;
  }
}
