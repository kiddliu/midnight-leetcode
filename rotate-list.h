#ifndef ROTATE_LIST_H_
#define ROTATE_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* rotateRight(ListNode* head, int k) {
  // form a ring
  // Runtime: 7 ms, faster than 77.83% of C++ online submissions for Rotate List.
  // Memory Usage: 11.8 MB, less than 55.22% of C++ online submissions for Rotate List.
  //
  if (head == nullptr || head->next == nullptr || k == 0) return head;

  auto current{head}, previous{head};
  auto count{1};

  while (current->next != nullptr) {
    ++count;
    previous = current;
    current = current->next;
  }

  if (k % count == 0) return head;
  k = count - k % count;

  current->next = head;
  previous = current;
  current = current->next;

  while (k-- > 0) {
    previous = current;
    current = current->next;
  }

  previous->next = nullptr;

  return current;
}

}  // namespace solution

#endif  // ROTATE_LIST_H_
