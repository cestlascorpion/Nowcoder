//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder041.h"

vector<vector<int>> Nocoder041::FindContinuousSequence(int sum)
{
    vector<vector<int>> ans;
    if (sum < 2)
        return ans;
    vector<int> temp;
    for (int i = 1; i < (sum / 2 + 1); ++i)
    {
        int s = i;
        for (int j = i + 1; j < (sum / 2 + 2); j++)
        {
            s = s + j;
            if (s == sum)
            {
                for (int index = i; index <= j; index++)
                    temp.push_back(index);
                ans.push_back(temp);
                temp.clear();
                break;
            }
            if (s > sum)
                break;
        }
    }
    return ans;
}
