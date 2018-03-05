//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder024.h"

vector<vector<int>> Nowcoder024::FindPath(TreeNode *root, int expectNumber) {
    vector<vector<int>> ans;
    if (root == nullptr)
        return ans;
    vector<int> path;
    helper(path, root, expectNumber, ans);
    return ans;
}

void Nowcoder024::helper(vector<int> &path, TreeNode *root,
                         int num, vector<vector<int>> &ans) {
    path.push_back(root->val);
    num = num - root->val;
    if (root->left == nullptr && root->right == nullptr) {
        if (num == 0) {
            ans.push_back(path);
        }
    }
    if (root->left != nullptr)
        helper(path, root->left, num, ans);
    if (root->right != nullptr)
        helper(path, root->right, num, ans);
    num = num + root->val;
    path.pop_back();
}
