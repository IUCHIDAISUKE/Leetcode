#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int n = s.size();

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X') && i != n - 1)
            {
                ans += mp[s[i + 1]] - mp[s[i]];
                i++;
            }
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C') && i != n - 1)
            {
                ans += mp[s[i + 1]] - mp[s[i]];
                i++;
            }
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M') && i != n - 1)
            {
                ans += mp[s[i + 1]] - mp[s[i]];
                i++;
            }
            else
            {
                ans += mp[s[i]];
            }
        }
        return ans;
    }
};

// Elegant solution...
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp{
            // unordered (When you don't have to repeat it.)
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int n = s.size();

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mp[s[i]] < mp[s[i + 1]]) && i != n - 1)
            {
                ans -= mp[s[i]];
            }
            else
            {
                ans += mp[s[i]];
            }
        }
        return ans;
    }
};