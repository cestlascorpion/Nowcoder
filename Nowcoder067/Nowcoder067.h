//
// Created by cestl on 2018/5/14 0014.
//
// 拼凑硬币

#ifndef NOWCODER_NOWCODER067_H
#define NOWCODER_NOWCODER067_H

#include "../config.h"

class Nowcoder067 {
public:
    // Q币面值 1,1,2,2,3,3,......
    int makeupwithQcoins(int n) {
        set<int> countset;
        for (int i = 0; i < n / 2; ++i) {
            int result = i ^(n - i);
            countset.insert(result);
        }
        return countset.size();
    }
};


#endif //NOWCODER_NOWCODER067_H
