//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder037.h"

int Nowcoder037::GetNumberOfK(vector<int> data, int k) {
    int ans = 0;
    if (data.empty())
        return ans;
    int low = 0;
    int high = data.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (data[mid] == k) {
            low = mid;
            ++ans;
            break;
        } else if (data[mid] > k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    int up = low + 1;
    while (up <= data.size() - 1 && data[up] == k) {
        ++ans;
        ++up;
    }

    int down = low - 1;
    while (down >= 0 && data[down] == k) {
        ++ans;
        --down;
    }
    return ans;
}

void Nowcoder037::test037() {
    vector<int> data{1, 1, 2, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8};
    cout << GetNumberOfK(data, 3) << endl;
    cout << GetNumberOfK(data, 4) << endl;
    cout << GetNumberOfK(data, 6) << endl;
}
