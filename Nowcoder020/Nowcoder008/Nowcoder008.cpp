//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder008.h"

int Nowcoder008::jumpFloor(int number) {
    if (number < 2)
        return number;
    int first = 0;
    int second = 1;
    for (int i = 1; i <= number; ++i) {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}
