//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder020.h"

void Nowcoder020::push(int value) {
    if (s2.empty()) {
        s2.push(value);
    } else {
        if (value < s2.top())
            s2.push(value);
    }
    s1.push(value);
}

void Nowcoder020::pop() {
    if (s1.top() == s2.top()) {
        s1.pop();
        s2.pop();
    } else {
        s1.pop();
    }
}

int Nowcoder020::top() {
    return s1.top();
}

int Nowcoder020::min() {
    return s2.top();
}
