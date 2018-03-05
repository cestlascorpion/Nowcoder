//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder039.h"

bool Nowcoder039::IsBalanced_Solution2(TreeNode *pRoot) {
    if (pRoot == nullptr)
        return true;
    return IsBalanced_Solution2(pRoot->left) &&
           IsBalanced_Solution2(pRoot->right) &&
           abs(TreeDepth2(pRoot->left) - TreeDepth2(pRoot->right)) <= 1;
}

int Nowcoder039::TreeDepth2(TreeNode *pRoot) {
    if (pRoot == nullptr)
        return 0;
    return 1 + max(TreeDepth2(pRoot->left),
                   TreeDepth2(pRoot->right));
}

bool Nowcoder039::IsBalanced_Solution(TreeNode *pRoot) {
    int depth = 0;
    return helper(pRoot, depth);
}

bool Nowcoder039::helper(TreeNode *root, int &depth) {
    if (root == nullptr)
        return true;
    int ldepth = 0;
    int rdepth = 0;
    bool bleft = helper(root->left, ldepth);
    bool bright = helper(root->right, rdepth);
    if (bleft && bright) {
        if (abs(ldepth - rdepth) > 1)
            return false;
        else {
            depth = max(ldepth, rdepth) + 1;
            return true;
        }
    } else {
        return false;
    }
}
