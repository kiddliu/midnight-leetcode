#ifndef ADD_TWO_NUMBERS_H_
#define ADD_TWO_NUMBERS_H_

#include "list-node.h"

namespace solution {

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // straight forward
        // Runtime: 36 ms, faster than 48.40% of C++ online submissions for Add Two Numbers.
        // Memory Usage : 71.5 MB, less than 46.97 % of C++ online submissions for Add Two Numbers.
        //
        auto head = new ListNode(), p = head;
        auto carry{ 0 };

        while (l1 || l2) {
            auto element = new ListNode();

            if (l1) element->val += l1->val, l1 = l1->next;
            if (l2) element->val += l2->val, l2 = l2->next;
            element->val += carry;

            carry = element->val > 9;
            if (carry) element->val -= 10;

            p->next = element;
            p = element;
        }
        if (carry) {
            p->next = new ListNode(carry);
        }

        return head->next;
    }

}

#endif // !ADD_TWO_NUMBERS_H_
