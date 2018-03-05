//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder059.h"


vector<vector<int>> Nowcoder059::Print(TreeNode *pRoot) {
    vector<vector<int>> ans;
    if (pRoot == nullptr)
        return ans;

    TreeNode *p = pRoot;
    queue<TreeNode *> q;
    bool Zigzag = true;
    q.push(p);

    while (!q.empty()) {
        int n = q.size();
        vector<int> temp;
        for (int i = 0; i < n; ++i) {
            p = q.front();
            q.pop();
            temp.push_back(p->val);
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        if (Zigzag == false)
            reverse(temp.begin(), temp.end());
        ans.push_back(temp);
        Zigzag = !Zigzag;
    }
    return ans;
}
