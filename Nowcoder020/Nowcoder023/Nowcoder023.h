//
// Created by cestl on 2018/5/10 0010.
//
// 二叉搜索树的后序遍历序列

#ifndef NOWCODER_NOWCODER023_H
#define NOWCODER_NOWCODER023_H

#include "../config.h"

class Nowcoder023 {
public:
    bool VerifySquenceOfBST(vector<int> sequence);

    bool helper(vector<int> &sequence, int l, int r);

    void test023();
};


#endif //NOWCODER_NOWCODER023_H
