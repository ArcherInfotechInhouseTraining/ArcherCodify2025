#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int coin : coins)
        {
            for (int j = coin; j <= amount; j++)
            {
                if (dp[j - coin] != INT_MAX)
                {
                    dp[j] = min(dp[j], dp[j - coin] + 1);
                }
            }
        }
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }
};

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    Solution sol;
    cout << "Fewest coins needed: " << sol.coinChange(coins, amount) << endl;

    return 0;
}
