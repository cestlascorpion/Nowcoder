//
// Created by cestl on 2018/5/10 0010.
//

#ifndef NOWCODER_CONFIG_H
#define NOWCODER_CONFIG_H

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <numeric>
#include <deque>
#include <utility>
#include <locale>
#include <math.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};


struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;

    TreeLinkNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
};

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;

    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
#pragma once

#endif //NOWCODER_CONFIG_H
