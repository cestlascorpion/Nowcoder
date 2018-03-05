//
// Created by cestl on 2018/5/13 0013.
//

#include "Nowcoder027.h"

vector<string> Nowcoder027::Permutation(string str) {
    vector<string> ans;
    if (str.empty())
        return ans;
    helper(str, 0, str.size() - 1, ans);
    return ans;
}

void Nowcoder027::helper(string &str, int begin, int end, vector<string> &ans) {
    if (begin == end) {
        ans.push_back(str);
        return;
    }
    for (int i = begin; i <= end; ++i) {
        if (i != begin && str[begin] == str[i])
            continue;
        swap(str[begin], str[i]);
        helper(str, begin + 1, end, ans);
        swap(str[begin], str[i]);
    }
}

void Nowcoder027::test027() {
    string str{"abc"};
    auto ans = Permutation(str);
    for (auto item:ans)
        cout << item << " ";
}
