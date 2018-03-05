//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder064.h"

vector<int> Nowcoder064::maxInWindows(const vector<int> &num, unsigned int size) {
    vector<int> vec;
    if (num.size() <= 0 || num.size() < size || size <= 0)
        return vec; //处理特殊情况
    deque<int> dq;
    //处理前size个数据，因为这个时候不需要输出最大值；
    for (int i = 0; i < size; i++) {
        // 假如当前的元素比队列队尾的元素大，说明之前加入的这些元素不可能是最大值了。
        // 因为当前的这个数字比之前加入队列的更晚
        while (!dq.empty() && num[i] >= num[dq.back()])
            dq.pop_back(); // 弹出比当前小的元素下标
        dq.push_back(i);   // 队尾压入当前下标
    }

    // 处理size往后的元素，这时候需要输出滑动窗口的最大值
    for (int i = size; i < num.size(); i++) {
        vec.push_back(num[dq.front()]);
        while (!dq.empty() && num[i] >= num[dq.back()])
            dq.pop_back();
        if (!dq.empty() && dq.front() <= (int) (i - size)) // 判断队头的下标是否超出size大小，如果超过，要删除队头元素
            dq.pop_front();                                // 删除队头元素
        dq.push_back(i);                                   // 将当前下标压入队尾，因为可能在未来是最大值
    }
    vec.push_back(num[dq.front()]); //最后还要压入一次
    return vec;
}
