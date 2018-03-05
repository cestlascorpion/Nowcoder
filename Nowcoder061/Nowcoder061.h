//
// Created by cestl on 2018/5/14 0014.
//
// 序列化二叉树

#ifndef NOWCODER_NOWCODER061_H
#define NOWCODER_NOWCODER061_H

#include "../config.h"

class Nowcoder061 {
public:
    char *Serialize(TreeNode *root);

    void Serialize(TreeNode *root, string &str);

    TreeNode *Deserialize(char *str);

    TreeNode *Deserialize(char **str);
};


#endif //NOWCODER_NOWCODER061_H
