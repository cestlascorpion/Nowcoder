//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder066.h"

int Nowcoder066::mincostpath(vector<int> &cost, int n) //+1.-1,*2
{
    //f(n) = min(f(n - 1) + cost(+1), f(n + 1) + cost(-1), f(n / 2) + cost(*2));
    vector<int> ans(2 * n + 1, INT32_MAX);
    ans[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int t1 = i >= 1 ? ans[i - 1] + cost[0] : INT32_MAX;
        int t2 = i + 1 < 2 * n ? ans[i + 1] + cost[1] : INT32_MAX;
        int t3 = i % 2 == 0 ? ans[i / 2] + cost[2] : INT32_MAX;
        ans[i] = min(min(t1, t2), t3);
        ans[2 * i] = min(ans[i] + cost[2], ans[2 * i]);
    }
    return ans[n];
}
