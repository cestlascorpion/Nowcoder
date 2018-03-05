//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder056.h"

ListNode *Nowcoder056::deleteDuplication2(ListNode *pHead) {
    if (pHead == nullptr)
        return nullptr;

    ListNode *p1 = pHead;
    ListNode *p2 = pHead;
    int val = p1->val;
    while (p1->next != nullptr) {
        if (p1->next->val != val) {
            p1 = p1->next;
            p2 = p2->next;
            val = p1->val;
        } else {
            do {
                p1 = p1->next;
            } while (p1 && p1->val == val);
            if (p1 == nullptr) {
                p2->next = nullptr;
                return pHead;
            } else {
                p2->next = p1;
                p2 = p1;
                val = p2->val;
            }
        }
    }
    return pHead;
}
