#include "solution.hpp"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
  int s = 0;
  ListNode *s1 = l1, *s2 = l2, *p1 = nullptr, *p2 = nullptr, *pf = nullptr;
  int carry = 0;
  while (l1 != nullptr || l2 != nullptr) {
    int v1, v2;
    v1 = l1 ? l1->val : 0;
    v2 = l2 ? l2->val : 0;
    int total = carry + v1 + v2;
    carry = total / 10;
    total %= 10;
    if (l1) {
      l1->val = total;
      p1 = l1;
      l1 = l1->next;
    } else if (!s) {
      s = 2;
    }
    if (l2) {
      l2->val = total;
      p2 = l2;
      l2 = l2->next;
    } else if (!s) {
      s = 1;
    }
  }
  if (carry != 0) {
    if (s == 1)
      p1->next = new ListNode(carry);
    else
      p2->next = new ListNode(carry);
  }

  return (s == 1 ? s1 : s2);
}
