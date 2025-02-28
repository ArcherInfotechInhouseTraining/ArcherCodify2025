#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> dp(n + 1, 0);
        int offset = 1;

        for (int i = 1; i <= n; i++)
        {
            if (offset * 2 == i)
            {
                offset = i;
            }
            dp[i] = 1 + dp[i - offset];
        }

        return dp;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution sol;
    vector<int> result = sol.countBits(n);

    cout << "Count of 1 bits for numbers from 0 to " << n << ": ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
