//
// Created by cestl on 2018/5/10 0010.
//
// 旋转数组的最小数字

#ifndef NOWCODER_NOWCODER006_H
#define NOWCODER_NOWCODER006_H

#include "../config.h"

class Nowcoder006 {
public:
    int minNumberInRotateArray(vector<int> rotateArray);

private:
    int MinOrder(vector<int> &num, int low, int high);
};


#endif //NOWCODER_NOWCODER006_H
