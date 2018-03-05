//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder005.h"

void Nowcoder005::push(int node) {
    stack1.push(node);
}

int Nowcoder005::pop() {
    int ans;
    if (stack2.empty()) {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    ans = stack2.top();
    stack2.pop();
    return ans;
}
