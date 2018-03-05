//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder044.h"

string Nowcoder044::ReverseSentence(string str) {
    if (str.empty()) {
        return str;
    }
    reverse(str.begin(), str.end());
    int left = 0;
    int right = 0;
    while (right != string::npos) {
        left = str.find_first_not_of(' ', left);
        right = str.find_first_of(' ', left);

        if (left == string::npos) {
            break;
        }
        if (right == string::npos) {
            reverse(str.begin() + left, str.end());
        } else {
            reverse(str.begin() + left, str.begin() + right);
            left = right + 1;
        }
    }
    return str;
}
