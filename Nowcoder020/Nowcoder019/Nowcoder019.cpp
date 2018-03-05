//
// Created by cestl on 2018/5/10 0010.
//

#include "Nowcoder019.h"

vector<int> Nowcoder019::printMatrix(vector<vector<int> > matrix) {
    vector<int> ans;
    if (matrix.empty() || matrix[0].empty())
        return ans;

    int left = 0, right = matrix[0].size() - 1, top = 0, btm = matrix.size() - 1;
    while (left <= right && top <= btm) {
        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        if (top < btm)
            for (int i = top + 1; i <= btm; i++)
                ans.push_back(matrix[i][right]);
        if (top < btm && left < right)
            for (int i = right - 1; i >= left; i--)
                ans.push_back(matrix[btm][i]);
        if (top + 1 < btm && left < right)
            for (int i = btm - 1; i >= top + 1; i--)
                ans.push_back(matrix[i][left]);
        left++;
        right--;
        top++;
        btm--;
    }
    return ans;
}
