//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder042.h"

vector<int> Nowcoder042::FindNumbersWithSum(vector<int> array, int sum) {
    vector<int> ans;
    if (array.empty())
        return ans;
    int low = 0;
    int high = array.size() - 1;
    int multiple = INT32_MAX;
    while (low < high) {
        if (array[low] + array[high] == sum) {
            if (array[low] * array[high] < multiple) {
                ans.push_back(array[low]);
                ans.push_back(array[high]);
                multiple = array[low] * array[high];
                break;
            }
        } else if (array[low] + array[high] > sum) {
            --high;
        } else {
            ++low;
        }
    }
    return ans;
}

void Nowcoder042::test042() {
    vector<int> array{-4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto ans = FindNumbersWithSum(array, 10);
    cout << ans[0] << " " << ans[1] << endl;
}
