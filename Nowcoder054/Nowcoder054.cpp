//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder054.h"

void Nowcoder054::Insert(char ch) {
    if (charMap.size() == 0) {
        charMap.resize(128, -1);
        index = 0;
    }

    if (charMap[(int) ch] == -1) {
        charMap[(int) ch] = index;
    } else if (charMap[(int) ch] >= 0) {
        charMap[(int) ch] = -2;
    }
    index++;
}

char Nowcoder054::FirstAppearingOnce() {
    char res = '#';
    int max = INT32_MAX;
    for (int i = 0; i < 128; i++) {
        if (charMap[i] >= 0 && charMap[i] < max) {
            res = (char) charMap[i];
            max = charMap[i];
        }
    }
    return res;
}
