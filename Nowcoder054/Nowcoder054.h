//
// Created by cestl on 2018/5/14 0014.
//
// 第一个出现一次的字符

#ifndef NOWCODER_NOWCODER054_H
#define NOWCODER_NOWCODER054_H

#include "../config.h"

class Nowcoder054 {
public:
    void Insert(char ch);

    char FirstAppearingOnce();

private:
    vector<int> charMap;
    int index;

};


#endif //NOWCODER_NOWCODER054_H
