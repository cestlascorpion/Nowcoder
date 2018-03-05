//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder034.h"

int Nowcoder034::FirstNotRepeatingChar(string str) {
    unordered_map<char, int> map;
    for (int i = 0; i < str.length(); ++i) {
        if (map.find(str[i]) == map.end()) {
            map[str[i]] = i + 1;
        } else {
            if (map[str[i]] > 0) {
                map[str[i]] = -1;
            }
        }
    }
    int ans = INT32_MAX;
    for (auto item:map) {
        if (item.second > 0)
            ans = min(ans, item.second);
    }
    return ans;
}

void Nowcoder034::test034() {
    string str{"googlechrome"};
    cout << FirstNotRepeatingChar(str) << endl;
}
