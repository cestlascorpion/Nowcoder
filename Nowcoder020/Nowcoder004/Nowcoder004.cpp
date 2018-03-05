//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder004.h"

TreeNode *Nowcoder004::reConstructBinaryTree(vector<int> pre, vector<int> vin) {
    if (pre.empty() || vin.empty())
        return nullptr;
    int pl = 0;
    int pr = pre.size() - 1;
    int vl = 0;
    int vr = vin.size() - 1;
    if (pr != vr)
        return nullptr;
    return helper(pre, 0, pr, vin, 0, vr);
}

TreeNode *Nowcoder004::helper(vector<int> &pre, int pl, int pr, vector<int> &vin, int vl, int vr) {
    if (pl > pr || vl > vr)
        return nullptr;
    TreeNode *ans = new TreeNode(pre[pl]);
    int pos;
    while (vin[vl + pos] != pre[pl])
        ++pos;
    ans->left = helper(pre, pl + 1, pl + pos, vin, vl, vl + pos);
    ans->right = helper(pre, pl + pos + 1, pr, vin, vl + pos + 1, vr);
    return ans;
}
