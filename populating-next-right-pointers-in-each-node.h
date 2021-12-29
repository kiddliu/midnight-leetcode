#ifndef POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H_
#define POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H_

#include "node2.h"

namespace solution {

Node* connect(Node* root) {
  // it should be an easy problem...post the wrong answer and got 1 reject
  // Runtime: 20 ms, faster than 57.99% of C++ online submissions for Populating Next Right Pointers in Each Node.
  // Memory Usage: 16.7 MB, less than 96.18% of C++ online submissions for Populating Next Right Pointers in Each Node.
  //
  auto first = root, current = root;

  while (first && first->left) {
    current = first;

    while (current) {
      current->left->next = current->right;

      if (current->next) {
        current->right->next = current->next->left;
      }
      current = current->next;
    }

    first = first->left;
  }
  return root;
}

}  // namespace solution

#endif  // !POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H_
