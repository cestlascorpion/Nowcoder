//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder063.h"

void Nowcoder063::Insert(int num) {
    if ((min.size() + max.size()) % 2 == 0) // 已有元素总数是偶数，插入最小堆
    {
        if (max.size() > 0 && num < max[0]) //插入的数字小于前半部分，应该先插入大根堆，取出大根堆的最大值插入小根堆
        {
            max.push_back(num);
            push_heap(max.begin(), max.end(), less<int>());
            num = max[0]; // 取出最大堆的最大值，插入到最小堆
            pop_heap(max.begin(), max.end(), less<int>());
            max.pop_back(); // pop 已经待删除元素交换到数组尾
        }
        min.push_back(num);
        push_heap(min.begin(), min.end(), greater<int>());
    } else // 已有元素总数是奇数，插入最大堆
    {
        if (min.size() > 0 && num > min[0]) // num 大于最大堆的最大值，按值看应该插入最小堆
        {
            min.push_back(num);
            push_heap(min.begin(), min.end(), greater<int>());
            num = min[0];
            pop_heap(min.begin(), min.end(), greater<int>());
            min.pop_back();
        }
        max.push_back(num);
        push_heap(max.begin(), max.end(), less<int>());
    }
}

double Nowcoder063::GetMedian() {
    int size = max.size() + min.size();
    if (size % 2 == 0)
        return (min[0] + max[0]) / 2.0;
    else
        return min[0];
}
