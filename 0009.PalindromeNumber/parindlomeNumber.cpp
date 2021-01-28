#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/* 
SOLUTION 1
int -> string convert.
But this approach is not allowed by the problem description....
*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        string s = to_string(x);
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

/* 
SOLUTION 2
Compare first half number with last half number.
if x < 0 or the last number is zero (x != 0) -> false (ex: x = -845, x = 123000 etc..)
*/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int ck = 0;
        while (ck < x) // This is tricky! This makes the first and second half numbers.
        {
            ck = ck * 10 + x % 10;
            x /= 10;
        }
        return x == ck || x == ck / 10; // This is x = 1221 or x = 12321, so the number of digits is even or odd
    }
};