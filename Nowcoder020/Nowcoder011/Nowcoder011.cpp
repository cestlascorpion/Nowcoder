//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder011.h"

int Nowcoder011::NumberOf1(int n) {
    int ans = 0;
    while (n) {
        ++ans;
        n = n & (n - 1);
    }
    return ans;
}
