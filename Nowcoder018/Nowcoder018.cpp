//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder018.h"

void Nowcoder018::Mirror(TreeNode *pRoot) {
    if (pRoot == nullptr)
        return;
    TreeNode *left = pRoot->left;
    TreeNode *right = pRoot->right;
    pRoot->left = right;
    pRoot->right = left;
    Mirror(left);
    Mirror(right);
}
