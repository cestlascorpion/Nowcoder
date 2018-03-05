//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder007.h"

int Nowcoder007::Fibonacci(int n) {
    if (n < 2)
        return n;
    int first = 0;
    int second = 1;
    for (int i = 2; i <= n; ++i) {
        int next = first + second;
        first = second;
        second = next;
    }
    return second;
}
