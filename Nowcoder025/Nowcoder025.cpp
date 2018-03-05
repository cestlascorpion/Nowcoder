//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder025.h"

RandomListNode *Nowcoder025::Clone(RandomListNode *pHead) {
    if (pHead == nullptr)
        return nullptr;

    RandomListNode *cur = pHead;
    while (cur) {
        RandomListNode *node = new RandomListNode(cur->label);
        node->next = cur->next;
        cur->next = node;
        cur = node->next;
    }

    cur = pHead;
    RandomListNode *p;
    while (cur) {
        p = cur->next;
        if (cur->random) {
            p->random = cur->random->next;
        }
        cur = p->next;
    }

    RandomListNode *pCloneHead = pHead->next;
    RandomListNode *tmp;
    cur = pHead;
    while (cur->next) {
        tmp = cur->next;
        cur->next = tmp->next;
        cur = tmp;
    }
    return pCloneHead;
}
