//
// Created by cestl on 2018/5/10 0010.
//
// 重建二叉树

#ifndef NOWCODER_NOWCODER004_H
#define NOWCODER_NOWCODER004_H

#include "../config.h"

class Nowcoder004 {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin);

    TreeNode *helper(vector<int> &pre, int pl, int pr, vector<int> &vin, int vl, int vr);
};


#endif //NOWCODER_NOWCODER004_H
