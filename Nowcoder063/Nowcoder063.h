//
// Created by cestl on 2018/5/14 0014.
//
// 数据流中的中位数

#ifndef NOWCODER_NOWCODER063_H
#define NOWCODER_NOWCODER063_H

#include "../config.h"

class Nowcoder063 {
public:
    void Insert(int num);

    double GetMedian();

private:
    vector<int> max; //数组的前一半 大根堆 插入第奇数个元素
    vector<int> min; //数组的后一半 小根堆 插入第偶数个元素（先进入大根堆，取出最大值放入小根堆）
};


#endif //NOWCODER_NOWCODER063_H
