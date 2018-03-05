//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder022.h"

vector<int> Nowcoder022::PrintFromTopToBottom(TreeNode *root) {
    vector<int> ans;
    if (root == nullptr)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode *temp = q.front();
        ans.push_back(temp->val);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
        q.pop();
    }
    return ans;
}