//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder016.h"

ListNode *Nowcoder016::Merge(ListNode *pHead1, ListNode *pHead2) {
    if (pHead1 == nullptr)
        return pHead2;
    if (pHead2 == nullptr)
        return pHead1;
    if (pHead1->val < pHead2->val) {
        pHead1->next = Merge(pHead1->next, pHead2);
        return pHead1;
    } else {
        pHead2->next = Merge(pHead1, pHead2->next);
        return pHead2;
    }
}
