#ifndef REMOVE_DUPLICATES_FROM_SORTED_LIST_II_H_
#define REMOVE_DUPLICATES_FROM_SORTED_LIST_II_H_

#include "list-node.h"

namespace solution {

ListNode* deleteDuplicates(ListNode* head) {
  // double pointers
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Duplicates from Sorted List II.
  // Memory Usage: 11.2 MB, less than 59.49% of C++ online submissions for Remove Duplicates from Sorted List II.
  //
  if (!head || !head->next) return head;

  auto current = &head;

  while (*current) {
    if ((*current)->next && (*current)->next->val == (*current)->val) {
      auto temp = *current;
      while (temp && (*current)->val == temp->val) {
        temp = temp->next;
      }
      *current = temp;
    } else {
      current = &((*current)->next);
    }
  }

  return head;
}

}  // namespace solution

#endif  // !REMOVE_DUPLICATES_FROM_SORTED_LIST_II_H_
