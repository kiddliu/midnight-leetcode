#ifndef POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_H_
#define POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_H_

#include "node2.h"

namespace solution {

Node* connect(Node* root) {
  // why requires return value?
  // Runtime: 19 ms, faster than 52.51% of C++ online submissions for Populating Next Right Pointers in Each Node II.
  // Memory Usage: 17.3 MB, less than 84.52% of C++ online submissions for Populating Next Right Pointers in Each Node II.
  //
  Node *current = root, *head = nullptr, *tail = nullptr;

  while (current) {
    if (current->left) {
      if (tail)
        tail = tail->next = current->left;
      else
        head = tail = current->left;
    }
    if (current->right) {
      if (tail)
        tail = tail->next = current->right;
      else
        head = tail = current->right;
    }
    if (!(current = current->next)) {
      current = head;
      head = tail = nullptr;
    }
  }

  return root;
}

}  // namespace solution

#endif  // !POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_H_
