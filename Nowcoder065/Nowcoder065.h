//
// Created by cestl on 2018/5/14 0014.
//
// 田忌赛马

#ifndef NOWCODER_NOWCODER065_H
#define NOWCODER_NOWCODER065_H

#include "../config.h"

class Nowcoder065 {
public:
    int tianjiVSking(vector<int> &tian, vector<int> &king);

private:
    void quicksort(vector<int> &nums, int low, int high);

    int partition(vector<int> &nums, int low, int high);
};


#endif //NOWCODER_NOWCODER065_H
