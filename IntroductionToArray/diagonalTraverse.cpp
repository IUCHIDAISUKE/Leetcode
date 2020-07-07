#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;

        int n, m = matrix.size();
        if (m == 0)
        {
            return ans;
        }
        else
        {
            n = matrix[0].size();
        }

        for (int i = 0; i < n + m + 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (i % 2 == 0)
                {
                    if ((i - j) < m && j < n)
                    {
                        ans.push_back(matrix[i - j][j]);
                    }
                }
                else
                {
                    if (j < m && (i - j) < n)
                    {

                        ans.push_back(matrix[j][i - j]);
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> a;
    Solution s;
    vector<int> ans = s.findDiagonalOrder(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;

    return 0;
}