//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder031.h"

int Nowcoder031::NumberOf1Between1AndN_Solution(int n) {
    int ans = 0;
    for (int i = 0; i <= n; ++i) {
        int num = i;
        while (num) {
            if (num % 10 == 1)
                ++ans;
            num = num / 10;
        }
    }
    return ans;
}
