//
// Created by cestl on 2018/5/10 0010.
//
// 二叉树中和为某一值的路径

#ifndef NOWCODER_NOWCODER024_H
#define NOWCODER_NOWCODER024_H

#include "../config.h"

class Nowcoder024 {
    vector<vector<int>> FindPath(TreeNode *root, int expectNumber);

    void helper(vector<int> &path, TreeNode *root, int num, vector<vector<int>> &ans);
};


#endif //NOWCODER_NOWCODER024_H
