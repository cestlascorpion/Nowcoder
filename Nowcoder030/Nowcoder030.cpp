//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder030.h"

int Nowcoder030::FindGreatestSumOfSubArray(vector<int> array) {
    int max = array[0];
    int sum = array[0];
    for (int i = 1; i < array.size(); i++) {
        if (sum <= 0)
            sum = array[i];
        else
            sum += array[i];
        if (max < sum)
            max = sum;
    }
    return max;
}

int Nowcoder030::FindGreatestSumOfSubArray2(vector<int> array) {
    if (array.empty())
        return 0;
    int sum = array[0], tempsum = array[0]; //注意初始值 不能设为0 防止只有负数
    for (int i = 1; i < array.size(); i++) //从1开始 因为0的情况在初始化时完成了
    {
        tempsum = (tempsum < 0) ? array[i] : tempsum + array[i];
        sum = (tempsum > sum) ? tempsum : sum;
    }
    return sum;
}
