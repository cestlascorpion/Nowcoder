//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder028.h"

int Nowcoder028::MoreThanHalfNum_Solution(vector<int> numbers) {
    if (numbers.empty())
        return 0;
    int key = numbers[0];
    int num = 1;
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] == key) {
            ++num;
        } else {
            if (num == 1) {
                key = numbers[i];
            } else {
                --num;
            }
        }
    }
    num = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == key) {
            ++num;
            if (num > numbers.size() / 2)
                return key;
        }
    }
    return 0;
}

bool Nowcoder028::test028() {
    vector<int> test{1, 2, 3, 2, 2, 2, 5, 4, 2};
    cout << MoreThanHalfNum_Solution(test) << endl;
    return true;
}
