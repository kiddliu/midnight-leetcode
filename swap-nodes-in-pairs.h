#ifndef SWAP_NODES_IN_PAIRS_H_
#define SWAP_NODES_IN_PAIRS_H_

#include "list-node.h"

namespace solution {

ListNode* swapPairs(ListNode* head) {
  // should use double pointer
  // Runtime: 4 ms, faster than 59.00% of C++ online submissions for Swap Nodes in Pairs.
  // Memory Usage: 7.6 MB, less than 52.02% of C++ online submissions for Swap Nodes in Pairs.
  //
  if (head == nullptr || head->next == nullptr) return head;

  auto result = head->next, current = result, stored = head;

  while (current && current->next) {
    auto temp = stored;
    stored = current->next;
    current->next = temp;
    temp->next = stored->next;

    if (current->next->next == nullptr) {
      current = current->next;
    } else {
      current = current->next->next;
    }
  }

  current->next = stored;
  stored->next = nullptr;

  return result;
}

}

#endif  // !SWAP_NODES_IN_PAIRS_H_
