//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder014.h"

ListNode *Nowcoder014::FindKthToTail(ListNode *pListHead, unsigned int k) {
    if (pListHead == nullptr || k < 1)
        return nullptr;
    ListNode *fast = pListHead;
    for (int i = 0; i < k; ++i) {
        if (fast == nullptr)
            return nullptr;
        fast = fast->next;
    }
    ListNode *slow = pListHead;
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
