//
// Created by cestl on 2018/5/10 0010.
//
// 包含min函数的栈

#ifndef NOWCODER_NOWCODER020_H
#define NOWCODER_NOWCODER020_H

#include "../config.h"

class Nowcoder020 {
public:
    void push(int value);

    void pop();

    int top();

    int min();

private:
    stack<int> s1;
    stack<int> s2; //存储最小值
};


#endif //NOWCODER_NOWCODER020_H
