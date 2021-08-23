#ifndef CONVERT_BINARY_NUMBER_IN_A_LINKED_LIST_TO_INTEGER_H_
#define CONVERT_BINARY_NUMBER_IN_A_LINKED_LIST_TO_INTEGER_H_

#include "list-node.h"

namespace solution {

int getDecimalValue(ListNode* head) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
  // Memory Usage: 8.2 MB, less than 59.35% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
  //
  auto result{0};
  while (head != nullptr) {
    result <<= 1;
    result += head->val;
    head = head->next;
  }

  return result;
}


}

#endif  // CONVERT_BINARY_NUMBER_IN_A_LINKED_LIST_TO_INTEGER_H_
