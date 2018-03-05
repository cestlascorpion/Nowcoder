//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder065.h"

int Nowcoder065::tianjiVSking(vector<int> &tian, vector<int> &king) {
    quicksort(tian, 0, tian.size() - 1);
    quicksort(king, 0, king.size() - 1);
    int win = 0;
    int fail = 0;
    int tianslow = 0;
    int kingslow = 0;
    int tianfast = tian.size() - 1;
    int kingfast = king.size() - 1;
    for (int i = 0; i < tian.size(); i++) {
        if (tian[tianfast] > king[kingfast]) {
            win++;
            tianfast--;
            kingfast--;
        } else if (tian[tianfast] < king[kingfast]) {
            fail++;
            tianslow++;
            kingfast--;
        } else {
            if (tian[tianslow] > king[kingslow]) {
                win++;
                tianslow++;
                kingslow++;
            } else // (tian[tianslow] <= king[kingslow])
            {
                fail++;
                tianslow++;
                kingfast--;
            }
        }
    }
    return win - fail;
}

void Nowcoder065::quicksort(vector<int> &nums, int low, int high) {
    if (low < high) {
        int p = partition(nums, low, high);
        quicksort(nums, low, p - 1);
        quicksort(nums, p + 1, high);
    }
}

int Nowcoder065::partition(vector<int> &nums, int low, int high) {
    int p = nums[low];
    while (low < high) {
        while (low < high && nums[high] >= p)
            high--;
        nums[low] = nums[high];
        while (low < high && nums[low] <= p)
            low++;
        nums[high] = nums[low];
    }
    nums[low] = p;
    return low;
}
