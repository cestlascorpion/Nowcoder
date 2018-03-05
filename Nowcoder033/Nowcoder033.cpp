//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder033.h"

int Nowcoder033::GetUglyNumber_Solution(int index) {
    __glibcxx_assert(index >= 0);
    vector<int> uglynum(index + 1, 0);
    int p2 = 1;
    int p3 = 1;
    int p5 = 1;
    uglynum[1] = 1;
    for (int i = 2; i <= index; ++i) {
        uglynum[i] = min(min(2 * uglynum[p2], 3 * uglynum[p3]), 5 * uglynum[p5]);
        while (uglynum[p2] * 2 <= uglynum[i])
            ++p2;
        while (uglynum[p3] * 3 <= uglynum[i])
            ++p3;
        while (uglynum[p5] * 5 <= uglynum[i])
            ++p5;
    }
    return uglynum[index];
}

void Nowcoder033::test033() {
    int index = 10;
    cout << GetUglyNumber_Solution(index) << endl;
}
