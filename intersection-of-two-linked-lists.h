#ifndef INTERSECTION_OF_TWO_LINKED_LISTS_H_
#define INTERSECTION_OF_TWO_LINKED_LISTS_H_

#include <vector>

#include "list-node.h"

namespace solution {

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
  // Brute force
  // Runtime: 44 ms, faster than 59.72% of C++ online submissions for Intersection of Two Linked Lists.
  // Memory Usage: 16.8 MB, less than 15.67% of C++ online submissions for Intersection of Two Linked Lists.
  //if (headA == nullptr || headB == nullptr) return nullptr;

  //std::vector<ListNode*> vecA{}, vecB{};
  //auto currentA = headA, currentB = headB;
  //while (currentA != nullptr) {
  //  vecA.push_back(currentA);
  //  currentA = currentA->next;
  //}
  //while (currentB != nullptr) {
  //  vecB.push_back(currentB);
  //  currentB = currentB->next;
  //}
  //auto crbeginA = vecA.crbegin(), crA = crbeginA, crendA = vecA.crend(),
  //     crbeginB = vecB.crbegin(), crB = crbeginB, crendB = vecB.crend();
  //while (crA != crendA && *crA == *crB) {
  //  ++crA;
  //  ++crB;
  //}

  //return crA == crbeginA ? nullptr : *(crA - 1);

  // Two pointers: the a + c + b = b + c + a;
  // Runtime: 36 ms, faster than 96.06% of C++ online submissions for Intersection of Two Linked Lists.
  // Memory Usage: 14.5 MB, less than 77.00% of C++ online submissions for Intersection of Two Linked Lists.
  // 
  ListNode *pA = headA;
  ListNode *pB = headB;
  while (pA != pB) {
    pA = pA == nullptr ? headB : pA->next;
    pB = pB == nullptr ? headA : pB->next;
  }
  return pA;
}

}

#endif  // INTERSECTION_OF_TWO_LINKED_LISTS_H_
