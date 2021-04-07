#ifndef REMOVE_DUPLICATES_FROM_SORTED_LIST_H_
#define REMOVE_DUPLICATES_FROM_SORTED_LIST_H_

#include "list-node.h"

namespace solution {
  ListNode* deleteDuplicates(ListNode* head) {
    // Brute force
    // Runtime: 4 ms, faster than 98.75% of C++ online submissions for Remove Duplicates from Sorted List.
    // Memory Usage: 11.5 MB, less than 92.63% of C++ online submissions for Remove Duplicates from Sorted List.
    //
    auto current = head;
    while (current != nullptr && current->next != nullptr) {
      if (current->next->val == current->val) {
        current->next = current->next->next;
      } else {
        current = current->next;
      }
    }
    return head;
  }
}

#endif  // REMOVE_DUPLICATES_FROM_SORTED_LIST_H_
