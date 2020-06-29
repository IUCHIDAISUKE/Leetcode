#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> cumsum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cumsum[i + 1] = cumsum[i] + nums[i];
        }
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (cumsum[i] == cumsum[n] - cumsum[i + 1])
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};

// Other solutions
class Solution2
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0, leftSum = 0, i = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (leftSum * 2 == sum - nums[i])
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};