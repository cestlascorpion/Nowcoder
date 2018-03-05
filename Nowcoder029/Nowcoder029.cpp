//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder029.h"

vector<int> Nowcoder029::GetLeastNumbers_Solution(vector<int> input, int k) {
    vector<int> ans;
    if (input.empty() || k < 1 || input.size() < k)
        return ans;
    priority_queue<int, std::vector<int>, std::less<int>> pq;
    for (auto num:input) {
        pq.push(num);
        if (pq.size() > k)
            pq.pop();
    }
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

bool Nowcoder029::test029() {
    vector<int> test{4, 5, 1, 6, 2, 7, 3, 8};
    vector<int> ans = GetLeastNumbers_Solution(test, 3);
    for (auto num:ans)
        cout << num << " ";
    return true;
}
