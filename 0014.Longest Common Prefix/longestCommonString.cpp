#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";

        ll n = strs.size();
        if (!n)
        {
            return res;
        }

        for (int i = 0; i < strs[0].size(); i++)
        {
            char tmp = strs[0][i];
            bool ck = true;
            for (int j = 0; j < n; j++)
            {
                if (tmp != strs[j][i])
                {
                    ck = false;
                }
            }
            if (ck)
            {
                res += tmp;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};

int main()
{
    vector<string> str;
    Solution s;

    return 0;
