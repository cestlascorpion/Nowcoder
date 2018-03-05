//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder001.h"

bool Nowcoder001::Find(int target, vector<vector<int> > array) {
    if (array.empty() || array[0].empty())
        return false;
    int row = array.size() - 1;
    int col = array[0].size() - 1;
    int r = 0;
    int c = col;
    while (r <= row && c >= 0) {
        if (array[r][c] == target)
            return true;
        else if (array[r][c] > target)
            --c;
        else
            ++r;
    }
    return false;
}

void Nowcoder001::test001() {
    vector<vector<int>> test{{1, 2, 5, 6},
                             {3, 4, 6, 7},
                             {5, 6, 8, 11}};
    cout << (Find(0, test) == true) << (Find(8, test) == false) << (Find(4, test) == false);
}
