//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder027.h"

vector<string> Nowcoder027::Permutation(string str) {
    vector<string> ans;
    if (str.empty())
        return ans;
    helper(str, 0, str.length() - 1, ans);
    return ans;
}

void Nowcoder027::helper(string &s, int begin, int end, vector<string> &ans) {
    if (begin == end) {
        ans.push_back(s);
        return;
    }
    for (int i = begin; i <= end; ++i) {
        if (i == begin || (i != begin && s[begin] != s[i])) {
            swap(s[begin], s[i]);
            helper(s, begin + 1, end, ans);
            swap(s[begin], s[i]);
        }
    }
}

vector<string> Nowcoder027::Permutation2(string str) {
    vector<string> ans;
    if (str.empty())
        return ans;
    sort(str.begin(), str.end());
    ans.push_back(str);
    while (next_permutation(str.begin(), str.end())) {
        ans.push_back(str);
    }
    return ans;
}

bool Nowcoder027::test027() {
    string str{"a"};
    for (auto item : Permutation2(str))
        cout << item << " ";
    cout << endl;
}
