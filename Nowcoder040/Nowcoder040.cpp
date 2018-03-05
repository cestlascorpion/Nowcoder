//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder040.h"

void Nowcoder040::FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
    unordered_map<int, int> map;
    for (int i = 0; i < data.size(); ++i) {
        map[data[i]]++;
    }
    bool next = false;
    for (auto it = map.begin(); it != map.end(); ++it) {
        if (it->second == 1) {
            if (!next) {
                *num1 = it->first;
                next = true;
            } else {
                *num2 = it->first;
            }
        }
    }
}
