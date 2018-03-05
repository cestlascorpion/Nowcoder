//
// Created by cestl on 2018/5/13 0013.
//
// 字符串的排列

#ifndef NOWCODER_NOWCODER027_H
#define NOWCODER_NOWCODER027_H

#include "../config.h"

class Nowcoder027 {
public:
    vector<string> Permutation(string str);

    void helper(string &str, int begin, int end, vector<string> &ans);

    void test027();
};


#endif //NOWCODER_NOWCODER027_H
