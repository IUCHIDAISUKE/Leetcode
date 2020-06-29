#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        reverse(digits.begin(), digits.end());
        vector<int> ans = digits;
        bool all_9 = true;

        for (int i = 0; i < n; i++)
        {

            if (ans[i] == 9)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i]++;
                all_9 = false;
                break;
            }
        }
        if (all_9)
        {
            ans.push_back(0);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Other solutions
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        vector<int> ans = digits;
        bool all_9 = true;
        for (int i = n - 1; i >= 0; i--)
        {
            if (ans[i] == 9)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i]++;
                all_9 = false;
                break;
            }
        }
        if (all_9)
        {
            ans[0] = 1;
            ans.push_back(0);
        }
        return ans;
    }
};