#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int cnt = 0;
        while (num)
        {
            cnt++;
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num--;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    int ans = s.numberOfSteps(123);
    cout << ans << endl;

    return 0;
}