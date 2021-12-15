#ifndef INSERTION_SORT_LIST_H_
#define INSERTION_SORT_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* insertionSortList(ListNode* head) {
  // no swap, we do insert!
  // Runtime: 48 ms, faster than 43.85% of C++ online submissions for Insertion Sort List.
  // Memory Usage: 9.7 MB, less than 31.96% of C++ online submissions for Insertion Sort List.
  //
  auto input = head->next, current = head;
  head->next = nullptr;

  while (input) {
    auto element = input;
    input = input->next;

    while (current) {
      if (current->val < element->val) {
        if (current->next && current->next->val < element->val) {
          current = current->next;
        } else {
          element->next = current->next;
          current->next = element;
          break;
        }
      } else {
        element->next = current;
        head = element;
        break;
      }
    }
    current = head;
  }

  return head;
}

}  // namespace solution

#endif  // INSERTION_SORT_LIST_H_
