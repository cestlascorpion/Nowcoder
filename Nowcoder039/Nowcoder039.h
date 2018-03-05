//
// Created by cestl on 2018/5/14 0014.
//
// 平衡二叉树

#ifndef NOWCODER_NOWCODER039_H
#define NOWCODER_NOWCODER039_H

#include "../config.h"

class Nowcoder039 {
public:
    bool IsBalanced_Solution(TreeNode *pRoot);

    bool helper(TreeNode *root, int &depth);

    bool IsBalanced_Solution2(TreeNode *pRoot);

    int TreeDepth2(TreeNode *pRoot);
};


#endif //NOWCODER_NOWCODER039_H
