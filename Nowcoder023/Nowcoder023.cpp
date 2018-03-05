//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder023.h"

bool Nowcoder023::VerifySquenceOfBST(vector<int> sequence) {
    if (sequence.empty())
        return false;
    return helper(sequence, 0, sequence.size() - 1);
}

bool Nowcoder023::helper(vector<int> &sequence, int l, int r) {
    if (l >= r)
        return true;
    int key = sequence[r];

    int m1 = l;
    while (m1 <= r - 1 && sequence[m1] < key)
        ++m1;
    int m2 = r - 1;
    while (m2 >= l && sequence[m2] > key)
        --m2;
    if (m1 != m2 + 1)
        return false;
    return helper(sequence, l, m2) && helper(sequence, m1, r - 1);
}

bool Nowcoder023::test023() {
    vector<int> test{7, 4, 6, 5};
    if (VerifySquenceOfBST(test) == true)
        return true;
    else
        return false;
}
