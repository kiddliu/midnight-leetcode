#ifndef PALINDROME_LINKED_LIST_H_
#define PALINDROME_LINKED_LIST_H_

#include <deque>

#include "list-node.h"

namespace solution {

bool isPalindrome(ListNode* head) {
  // Use deque
  // Runtime: 212 ms, faster than 42.35% of C++ online submissions for Palindrome Linked List.
  // Memory Usage: 123.4 MB, less than 22.84% of C++ online submissions for Palindrome Linked List.
  //
  if (head->next == nullptr) return true;

  std::deque<int> temp{};
  while (head != nullptr) {
    temp.push_back(head->val);
    head = head->next;
  }

  auto p1 = temp.cbegin(), p2 = temp.cend() - 1;
  while (p1 <= p2) {
    if (*p1 == *p2) {
      p1++, p2--;
    } else {
      return false;
    }
  }

  return true;
}

}  // namespace solution

#endif  // PALINDROME_LINKED_LIST_H_
