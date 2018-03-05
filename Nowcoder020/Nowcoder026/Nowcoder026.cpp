//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder026.h"

TreeNode *Nowcoder026::Convert(TreeNode *pRootOfTree) {
    if (pRootOfTree == nullptr)
        return nullptr;
    stack<TreeNode *> s;
    TreeNode *cur = pRootOfTree;
    TreeNode *pre = nullptr;
    TreeNode *head = nullptr;
    bool ishead = true;
    while (!s.empty() || cur != nullptr) {
        if (cur != nullptr) {
            s.push(cur);
            cur = cur->left;
        } else {
            cur = s.top();
            s.pop();
            std::cout << cur->val << endl;
            if (ishead) {
                head = cur;
                ishead = false;
                pre = cur;
            } else {
                pre->right = cur;
                cur->left = pre;
                pre = cur;
            }
            cur = cur->right;
        }
    }
    return head;
}

void Nowcoder026::test026() {
    TreeNode p1(5);
    TreeNode p2(3);
    TreeNode p3(7);
    TreeNode p4(2);
    TreeNode p5(4);
    TreeNode p6(6);
    TreeNode *root = &p1;
    p1.left = &p2;
    p1.right = &p3;
    p2.left = &p4;
    p2.right = &p5;
    p3.left = &p6;
    auto ans = Convert(root);
    while (ans) {
        std::cout << ans->val << " ";
        ans = ans->right;
    }
    std::cout << endl;
}
