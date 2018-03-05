//
// Created by cestl on 2018/5/13 0013.
//
// 数组中的逆序对

#ifndef NOWCODER_NOWCODER035_H
#define NOWCODER_NOWCODER035_H

#include "../config.h"

class Nowcoder035 {
public:
    int InversePairs(vector<int> nums);

    void topdown(vector<int> &nums, int low, int high, int &ans);

    void merge(vector<int> &nums, int low, int mid, int high, int &ans);

    void test035();
};


#endif //NOWCODER_NOWCODER035_H
