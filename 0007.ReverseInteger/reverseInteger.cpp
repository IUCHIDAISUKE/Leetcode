#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    int reverse(int x)
    {
        long long ans = 0;
        while (x)
        {
            int pop = x % 10; // if x<0 -> pop < 0
            x /= 10;
            ans = ans * 10 + pop;
        }

        return (ans > INT_MAX || ans < INT_MIN) ? 0 : ans;
    }
};

int main()
{
    Solution s;
    int ans = s.reverse(-12345);
    cout << ans << endl;

    return 0;
}