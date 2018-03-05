//
// Created by cestl on 2018/5/10 0010.
//
// 字符串的全排列

#ifndef NOWCODER_NOWCODER027_H
#define NOWCODER_NOWCODER027_H

#include "../config.h"

class Nowcoder027 {
public:
    vector<string> Permutation(string str);

    vector<string> Permutation2(string str);

    void helper(string &s, int begin, int end, vector<string> &ans);

    bool test027();
};


#endif //NOWCODER_NOWCODER027_H
