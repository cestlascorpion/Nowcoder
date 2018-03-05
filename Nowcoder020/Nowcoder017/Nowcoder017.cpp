//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder017.h"

bool Nowcoder017::HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2) {
    if (pRoot2 == nullptr || pRoot1 == nullptr)
        return false;
    return HasSubtree(pRoot1->left, pRoot2) ||
           HasSubtree(pRoot1->right, pRoot2) ||
           IsSametree(pRoot1, pRoot2);
}

bool Nowcoder017::IsSametree(TreeNode *p1, TreeNode *p2) {
    if (p2 == nullptr)
        return true;
    if (p1 == nullptr)
        return false;
    if (p1->val == p2->val) {
        return IsSametree(p1->left, p2->left) && IsSametree(p1->right, p2->right);
    } else
        return false;
}
