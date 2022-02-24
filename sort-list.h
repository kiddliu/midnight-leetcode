#ifndef SORT_LIST_H_
#define SORT_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* splitList(ListNode* head) {
  ListNode* temp = nullptr;
  while (head && head->next) {
    temp = temp == nullptr ? head : temp->next;
    head = head->next->next;
  }
  ListNode* mid{temp->next};
  temp->next = nullptr;
  return mid;
}

ListNode* mergeList(ListNode* left, ListNode* right) {
  auto head = new ListNode(), p = head;

  while (left && right) {
    if (left->val < right->val) {
      p->next = left;
      left = left->next;
    } else {
      p->next = right;
      right = right->next;
    }
    p = p->next;
  }

  if (left) {
    p->next = left;
  } else {
    p->next = right;
  }

  return head->next;
}

ListNode* sortList(ListNode* head) {
  // merge sort
  // Runtime: 96 ms, faster than 83.90% of C++ online submissions for Sort List.
  // Memory Usage: 48.8 MB, less than 10.81% of C++ online submissions for Sort List.
  //
  if (head == nullptr || head->next == nullptr) return head;
  auto mid = splitList(head), left = sortList(head), right = sortList(mid);
  return mergeList(left, right);
}

}


#endif  // SORT_LIST_H_
