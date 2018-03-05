//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder010.h"

int Nowcoder010::rectCover(int number) {
    if (number <= 2)
        return number;
    int first = 1;
    int second = 2;
    for (int i = 1; i < number - 1; i++) {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}
