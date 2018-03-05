//
// Created by cestl on 2018/5/10 0010.
//
// 用两个栈实现队列

#ifndef NOWCODER_NOWCODER005_H
#define NOWCODER_NOWCODER005_H

#include "../config.h"

class Nowcoder005 {
public:
    void push(int node);

    int pop();

private:
    stack<int> stack1;
    stack<int> stack2;
};


#endif //NOWCODER_NOWCODER005_H
