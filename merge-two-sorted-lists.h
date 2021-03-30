#ifndef MERGE_TWO_SORTED_LISTS_H_
#define MERGE_TWO_SORTED_LISTS_H_

#include "list-node.h"

namespace solution {

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  // Compare and Inject
  // Runtime: 8 ms, faster than 71.84% of C++ online submissions for Merge Two Sorted Lists.
  // Memory Usage: 14.8 MB, less than 27.76% of C++ online submissions for Merge Two Sorted Lists.
  //
  if (l1->next == nullptr && l2->next == nullptr) {
    return l1;
  }

  if (l1->next == nullptr) return l2;
  if (l2->next == nullptr) return l1;

  ListNode* result = nullptr;
  do {
    auto v1 = l1->val;
    auto v2 = l2->val;

    if (v1 <= v2) {
      if (result == nullptr) {
        result = l1;
      } else {
        result->next = l1;
      }
      l1 = l1->next;
    } else {
      if (result == nullptr) {
        result = l2;
      } else {
        result->next = l2;
      }
      l2 = l2->next;
    }
    result = result->next;
  } while (l1 != nullptr && l2 != nullptr);

  if (l1 != nullptr) {
    result->next = l1;
  }
  if (l2 != nullptr) {
    result->next = l2;
  }

  return result;
}

}

#endif  // MERGE_TWO_SORTED_LISTS_H_
