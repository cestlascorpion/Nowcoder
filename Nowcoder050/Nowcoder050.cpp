//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder050.h"

bool Nowcoder050::duplicate(int *numbers, int length, int *duplication) {
    if (numbers == nullptr || length <= 0)
        return false;
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0 || numbers[i] > length - 1)
            return false;
    }
    for (int i = 0; i < length; i++) {
        while (numbers[i] != i) {
            if (numbers[i] == numbers[numbers[i]]) {
                *duplication = numbers[i];
                return true;
            }
            int temp = numbers[numbers[i]];
            numbers[numbers[i]] = numbers[i];
            numbers[i] = temp;
        }
    }
    return false;
}
