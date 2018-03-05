//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder047.h"

int Nowcoder047::Sum_Solution(int n) {
    int ans = n;
    bool trick = ans && (ans += Sum_Solution(n - 1));
    return ans;
}
