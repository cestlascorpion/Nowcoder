//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder049.h"

int Nowcoder049::StrToInt(string str) {

    if (str.empty())
        return 0;
    int dig = true;
    int i = 0;
    int num = 0;
    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '+') {
        i++;
    } else if (str[i] == '-') {
        i++;
        dig *= false;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            int flag = dig ? 1 : -1;
            num = num * 10 + flag * (str[i] - '0');
            i++;
        } else {
            num = 0;
            break;
        }
    }
    return num;
}