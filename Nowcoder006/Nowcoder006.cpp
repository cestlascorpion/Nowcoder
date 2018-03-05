//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder006.h"

int Nowcoder006::minNumberInRotateArray(vector<int> rotateArray) {
    int low = 0;
    int high = rotateArray.size() - 1;
    if (rotateArray[low] < rotateArray[high])
        return rotateArray[low];

    int mid;
    while (rotateArray[low] >= rotateArray[high]) {
        if (low + 1 == high) {
            mid = high;
            break;
        }
        mid = low + (high - low) / 2;
        if (rotateArray[low] == rotateArray[mid] && rotateArray[mid] == rotateArray[high]) {
            return MinOrder(rotateArray, low, high);
        }
        if (rotateArray[mid] >= rotateArray[low])
            low = mid;
        else
            high = mid;
    }
    return rotateArray[mid];
}

int Nowcoder006::MinOrder(vector<int> &num, int low, int high) {
    int ans = num[low];
    for (int i = low + 1; i <= high; ++i) {
        if (num[i] < ans) {
            ans = num[i];
            break;
        }
    }
    return ans;
}
