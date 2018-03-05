//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder055.h"

ListNode *Nowcoder055::EntryNodeOfLoop(ListNode *pHead) {
    if (pHead == nullptr)
        return nullptr;

    ListNode *pFast = pHead, *pSlow = pHead->next;
    while (pFast != nullptr && pSlow != nullptr && pFast != pSlow)
    {
        pSlow = pSlow->next;
        pFast = pFast->next;
        if (pFast != nullptr)
            pFast = pFast->next;
    }

    int countNum = 1;
    ListNode *pTempNode = pFast->next;
    if (pFast == pSlow && pFast != nullptr)
    {
        while (pTempNode != pFast)
        {
            pTempNode = pTempNode->next;
            ++countNum;
        }
    }
    else
        return nullptr;

    ListNode *pNode1 = pHead, *pNode2 = pHead;
    for (int i = 0; i < countNum; i++)
    {
        pNode1 = pNode1->next;
    }
    while (pNode1 != pNode2)
    {
        pNode1 = pNode1->next;
        pNode2 = pNode2->next;
    }
    return pNode1;
}
