#ifndef DELETE_NODE_IN_A_LINKED_LIST_H_
#define DELETE_NODE_IN_A_LINKED_LIST_H_

#include <algorithm>

#include "list-node.h"

namespace solution {

void deleteNode(ListNode* node) {
  // stupid brute force, should *node = *node->next;
  // Runtime: 12 ms, faster than 75.74% of C++ online submissions for Delete Node in a Linked List.
  // Memory Usage: 7.6 MB, less than 69.44% of C++ online submissions for Delete Node in a Linked List.
  // 
  while (true) {
    node->val = node->next->val;

    if (node->next->next == nullptr) {
      delete node->next;
      node->next = nullptr;
      break;
    } else {
      node = node->next;
    }
  }
}

}

#endif  // DELETE_NODE_IN_A_LINKED_LIST_H_
