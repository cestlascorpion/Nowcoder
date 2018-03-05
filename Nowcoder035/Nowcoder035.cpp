//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder035.h"

int Nowcoder035::InversePairs(vector<int> nums) {
    int ans = 0;
    if (nums.size() < 2)
        return ans;
    topdown(nums, 0, nums.size() - 1, ans);
    return ans;
}

void Nowcoder035::topdown(vector<int> &nums, int low, int high, int &ans) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        topdown(nums, low, mid, ans);
        topdown(nums, mid + 1, high, ans);
        merge(nums, low, mid, high, ans);
    }
}

void Nowcoder035::merge(vector<int> &nums, int low, int mid, int high, int &ans) {
    vector<int> temp = nums;
    int p1 = low;
    int p2 = mid + 1;
    int index = low;
    while (p1 <= mid && p2 <= high) {
        if (temp[p1] < temp[p2]) {
            nums[index++] = temp[p1++];
            ans += high - p2 + 1;
        } else {
            nums[index++] = temp[p2++];
        }
    }
    while (p1 <= mid) {
        nums[index++] = temp[p1++];
    }
    while (p2 <= high) {
        nums[index++] = temp[p2++];
    }
}

void Nowcoder035::test035() {
    vector<int> data{1, 2, 3, 4};
    int ans = InversePairs(data);
    cout << ans << endl;
}
