#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int r, c = matrix.size();
        if (c != 0)
        {
            r = matrix[0].size();
            for (int cnt = 0; cnt < r + c; cnt++)
            {
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        ans.push_back(matrix[i][j]);
                    }
                }
            }
        }
    }
};