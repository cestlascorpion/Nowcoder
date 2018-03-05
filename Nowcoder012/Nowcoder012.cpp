//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder012.h"

double Nowcoder012::Power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    int exp = abs(exponent);
    double ans = 1.0;
    while (exp != 0) {
        if (exp % 2 == 1) {
            ans = ans * exp;
        }
        base = base * base;
        exp = exp >> 1;
    }
    return exponent > 0 ? ans : 1.0 / ans;
}
