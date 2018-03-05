//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder036.h"

ListNode *Nowcoder036::FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
    ListNode *p1 = pHead1;
    ListNode *p2 = pHead2;
    while (p1 != p2) {
        p1 = (p1 == nullptr ? pHead2 : p1->next);
        p2 = (p2 == nullptr ? pHead1 : p2->next);
    }
    return p1;
}
