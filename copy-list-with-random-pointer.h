#ifndef COPY_LIST_WITH_RANDOM_POINTER_H_
#define COPY_LIST_WITH_RANDOM_POINTER_H_

#include "node3.h"

namespace solution {

Node* copyRandomList(Node* head) {
  // in_place intervined
  // Runtime: 11 ms, faster than 67.35% of C++ online submissions for Copy List with Random Pointer.
  // Memory Usage: 11.2 MB, less than 60.87% of C++ online submissions for Copy List with Random Pointer.
  //
  if (head == nullptr) return head;

  auto current{head}, dup{current}, next{current};

  while (current) {
    dup = new Node(current->val);
    dup->next = current->next;
    current->next = dup;

    current = dup->next;
  }

  current = head;

  while (current) {
    if (current->random) current->next->random = current->random->next;

    current = current->next->next;
  }

  current = head;

  auto result = new Node(0), tail{result};
  while (current) {
    tail->next = current->next;
    tail = tail->next;

    current->next = tail->next;
    current = current->next;
  }

  return result->next;
}

}

#endif  // !copy_list_with_random_pointer_h_
