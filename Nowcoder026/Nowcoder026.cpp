//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder026.h"

TreeNode *Nowcoder026::Convert(TreeNode *pRootOfTree) {
    if (pRootOfTree == nullptr)
        return nullptr;
    stack<TreeNode *> s;
    TreeNode *p = pRootOfTree;
    TreeNode *pre = nullptr;
    TreeNode *ans;
    bool isFirst = true;
    while (!s.empty() || p != nullptr) {
        if (p != nullptr) {
            s.push(p);
            p = p->left;
        } else {
            p = s.top();
            s.pop();
            if (isFirst) {
                ans = p;
                pre = p;
                isFirst = false;
            } else {
                pre->right = p;
                p->left = pre;
                pre = p;
            }
            p = p->right;
        }
    }
    return ans;
}
