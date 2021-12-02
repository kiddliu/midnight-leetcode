#ifndef ODD_EVEN_LINKED_LIST_H_
#define ODD_EVEN_LINKED_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* oddEvenList(ListNode* head) {
  // have an even head and connect 2 at last
  // Runtime: 4 ms, faster than 99.08% of C++ online submissions for Odd Even Linked List.
  // Memory Usage: 10.5 MB, less than 27.35% of C++ online submissions for Odd Even Linked List.
  //
  if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
    return head;

	auto odd = head, even = head->next, even_head = even;

  while (odd && odd->next) {
    odd->next = even->next;
    if (odd->next == nullptr) break;

    odd = odd->next;
    even->next = odd->next;
    even = even->next;
  }
  odd->next = even_head;

  return head;
}

}

#endif  // ODD_EVEN_LINKED_LIST_H_
