//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder015.h"

ListNode *Nowcoder015::ReverseList(ListNode *pHead) {
    if (pHead == nullptr)
        return nullptr;
    ListNode *cur = pHead;
    ListNode *pre = nullptr;
    while (cur->next != nullptr) {
        ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    cur->next = pre;
    return cur;
}
