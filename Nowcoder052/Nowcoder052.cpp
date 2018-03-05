//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder052.h"

bool Nowcoder052::match(char *str, char *pattern) {
    if (*str == '\0' && *pattern == '\0')
        return true;
    if (*str != '\0' && *pattern == '\0')
        return false;

    if (*(pattern + 1) == '*') //遇到?*
    {
        //1、模式后移2字符，相当于x *被忽略；
        //2、字符串后移1字符，模式后移2字符；
        //3、字符串后移1字符，模式不变，即继续匹配字符下一位，因为 *可以匹配多位；
        if (*str == *pattern || (*pattern == '.' && *str != '\0'))
            return match(str + 1, pattern + 2) || match(str + 1, pattern) || match(str, pattern + 2);
        else //*前面的字符和str不匹配（且不是点号），则视为重复出现0次，继续匹配pattern移位2位剩余的部分和str
            return match(str, pattern + 2);
    } else {
        if (*str == *pattern)
            return match(str + 1, pattern + 1);
        if (*pattern == '.' && *str != '\0')
            return match(str + 1, pattern + 1);
    }
    return false;
}
