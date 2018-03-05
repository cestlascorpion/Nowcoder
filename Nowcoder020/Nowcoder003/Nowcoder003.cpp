//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder003.h"

vector<int> Nowcoder003::printListFromTailToHead(ListNode *head) {
    vector<int> ans;
    if (head == nullptr)
        return ans;
    while (head != nullptr) {
        ans.push_back(head->val);
        head = head->next;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
