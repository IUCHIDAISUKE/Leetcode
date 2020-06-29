#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int n = nums.size();
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            bool ck = true;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (nums[i] < 2 * nums[j])
                {
                    ck = false;
                }
            }
            if (ck)
            {
                ans = i;
            }
        }
        return ans;
    }
};

// Other solutions
class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int n = nums.size();
        int ans = -1;
        int ma = 0, max_idx;

        for (int i = 0; i < n; i++)
        {
            if (ma < nums[i])
            {
                ma = nums[i];
                max_idx = i;
            }
        }

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (ma != nums[i] && ma < 2 * nums[i])
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = max_idx;
        }
        return ans;
    }
};