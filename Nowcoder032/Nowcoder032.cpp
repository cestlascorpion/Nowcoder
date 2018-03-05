//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder032.h"

string Nowcoder032::PrintMinNumber(vector<int> numbers) {
    string ans;
    if (numbers.empty())
        return ans;
    sort(numbers.begin(), numbers.end(), cmp);

    for (int i = 0; i < numbers.size(); ++i) {
        ans += to_string(numbers[i]);
    }
    return ans;
}

void Nowcoder032::test032() {
    vector<int> nums{3, 321, 32};
    auto ans = PrintMinNumber(nums);
    cout << ans << endl;
}

bool Nowcoder032::cmp(int a, int b) {
    string A = to_string(a) + to_string(b);
    string B = to_string(b) + to_string(a);
    return A < B;
}
