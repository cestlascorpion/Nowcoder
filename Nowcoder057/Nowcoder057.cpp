//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder057.h"

TreeLinkNode *Nowcoder057::GetNext(TreeLinkNode *pNode) {
    if (pNode == nullptr)
        return nullptr;
    if (pNode->right != nullptr) {
        pNode = pNode->right;
        while (pNode->left != nullptr)
            pNode = pNode->left;
        return pNode;
    }
    while (pNode->next != nullptr) {
        TreeLinkNode *proot = pNode->next;
        if (proot->left == pNode)
            return proot;
        pNode = pNode->next;
    }
    return nullptr;
}
