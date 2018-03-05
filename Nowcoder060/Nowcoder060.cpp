//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder060.h"

vector<vector<int>> Nowcoder060::Print(TreeNode *pRoot) {
    vector<vector<int>> res;
    if (pRoot == nullptr)
        return res;
    queue<TreeNode *> q;
    q.push(pRoot);
    while (!q.empty()) {
        int size = q.size();
        vector<int> ans;
        while (size--) {
            TreeNode *p = q.front();
            q.pop();
            ans.push_back(p->val);
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        res.push_back(ans);
    }
    return res;
}
