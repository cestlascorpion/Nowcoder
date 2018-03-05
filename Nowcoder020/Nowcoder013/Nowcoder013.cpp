//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder013.h"

void Nowcoder013::reOrderArray(vector<int> &array) {
    vector<int> ans;
    int num = array.size();
    for (int i = 0; i < num; i++) {
        if (array[i] % 2 == 1)
            ans.push_back(array[i]);
    }
    for (int i = 0; i < num; i++) {
        if (array[i] % 2 == 0)
            ans.push_back(array[i]);
    }
    array = ans;
}

void Nowcoder013::test013() {
    vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    reOrderArray(test);
}
