//
// Created by cestl on 2018/5/10 0010.
//
// 变态跳台阶

#ifndef NOWCODER_NOWCODER009_H
#define NOWCODER_NOWCODER009_H

#include "../config.h"

class Nowcoder009 {
public:
    inline  int jumpFloorII(int number) {
        return pow(2, number - 1);
    }
};


#endif //NOWCODER_NOWCODER009_H
