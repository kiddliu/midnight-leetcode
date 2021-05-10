// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "list-node.h"

#include "remove-linked-list-elements.h"

int main() {
  ListNode* head = new ListNode(1,
                                new ListNode(2,
                                             new ListNode(6,
                                                          new ListNode(3,
                                                                       new ListNode(4,
                                                                                    new ListNode(5,
                                                                                                 new ListNode(6))))))); 
  assert(solution::removeElements(head, 6) == head);
}
