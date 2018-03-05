//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder048.h"

int Nowcoder048::Add(int num1, int num2) {
    while (num2) {
        int sum = num1 ^num2;
        int carry = num1 & num2;
        num1 = sum;
        num2 = carry << 1;
    }
    return num1;
}
