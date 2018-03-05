//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder043.h"

string Nowcoder043::LeftRotateString(string str, int n) {
    if (str.empty() || n % str.size() == 0)
        return str;
    int move = n % str.length();
    return str.substr(move, str.length() - move) + str.substr(0, move);
}

void Nowcoder043::test043() {
    string str{"1234567890"};
    string ans = LeftRotateString(str, 1);
    cout << ans << endl;
}
