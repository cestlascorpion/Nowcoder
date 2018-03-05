//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder002.h"
#include <cstring>

void Nowcoder002::replaceSpace(char *str, int length) {
    if (str == nullptr || length <= 0)
        return;
    int numberofblank = 0;
    int orginlength = 0;
    for (int i = 0; *(str + i) != '\0'; ++i) {
        ++orginlength;
        if (*(str + i) == ' ')
            ++numberofblank;
    }
    if (numberofblank == 0) return;
    int newlength = orginlength + numberofblank * 2;
    if (newlength + 1 > length) return;

    *(str + newlength) = '\0';
    int newindex = newlength - 1;
    int index = orginlength - 1;
    while (index >= 0 && index != newindex) {
        if (*(str + index) != ' ') {
            *(str + newindex) = *(str + index);
            --newindex;
            --index;
        } else {
            *(str + newindex--) = '0';
            *(str + newindex--) = '2';
            *(str + newindex--) = '%';
            --index;
        }
    }
    return;
}
