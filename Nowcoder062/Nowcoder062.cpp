//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder062.h"

TreeNode *Nowcoder062::KthNode(TreeNode *pRoot, int k) {
    if (pRoot == nullptr || k < 1)
        return nullptr;
    TreeNode *p = pRoot;
    int cnt = 0;
    stack<TreeNode *> s;
    while (!s.empty() || p != nullptr) {
        if (p != nullptr) {
            s.push(p);
            p = p->left;
        } else {
            p = s.top();
            s.pop();
            cnt++;
            if (cnt == k)
                return p;
            p = p->right;
        }
    }
    return nullptr;
}
