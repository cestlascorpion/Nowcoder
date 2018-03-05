//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder021.h"

bool Nowcoder021::IsPopOrder(vector<int> pushV, vector<int> popV) {
    stack<int> s;
    int index = 0;
    for (int i = 0; i < popV.size(); ++i) {
        while (s.empty() || s.top() != popV[i]) {
            s.push(pushV[index++]);
            if (index > pushV.size())
                return false;
        }
        s.pop();
    }
    return s.empty();

}
