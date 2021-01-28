#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// O(n^2)
// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> ans;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int &target)
    {
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << target - nums[i] << endl;
            cout << ump[target - nums[i]] << endl;
            if (ump.find(target - nums[i]) != ump.end())
            {
                return {ump[target - nums[i]], i};
            }
            else
            {
                ump[nums[i]] = i;
            }
        }
        return {};
    }
};

// Other solutions
// class Solution
// {
// public:
//     int pivotIndex(vector<int> &nums)
//     {
//         int n = nums.size();
//         int sum = 0, leftSum = 0, i = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += nums[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (leftSum * 2 == sum - nums[i])
//                 return i;
//             leftSum += nums[i];
//         }
//         return -1;
//     }
// };

int main()
{
    vector<int> a{2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum(a, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << endl;

    return 0;
}