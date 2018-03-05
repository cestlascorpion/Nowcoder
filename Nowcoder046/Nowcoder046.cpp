//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder046.h"

int Nowcoder046::LastRemaining_Solution(int n, int m) {
    if (n < 1 || m < 1)
        return -1;
    int last = 0;
    for (int i = 2; i <= n; i++)
    {
        last = (last + m) % i;
    }
    return last;
}
