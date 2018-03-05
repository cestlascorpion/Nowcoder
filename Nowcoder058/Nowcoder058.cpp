//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder058.h"

bool Nowcoder058::isSymmetrical(TreeNode *pRoot) {
    if (pRoot == nullptr)
        return true;
    return isSame(pRoot->left, pRoot->right);
}

bool Nowcoder058::isSame(TreeNode *p1, TreeNode *p2) {
    if (p1 == nullptr)
        return p2 == nullptr;
    if (p2 == nullptr)
        return false;
    if (p1->val != p2->val)
        return false;
    return isSame(p1->left, p2->right) && isSame(p1->right, p2->left);
}