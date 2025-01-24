#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.empty())
            return 0;

        int minPrice = prices[0];
        int maxProfit = 0;
        int n = prices.size();

        for (int i = 1; i < n; i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            int profit = prices[i] - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution solution;
    
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << solution.maxProfit(prices) << endl;

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Maximum profit: " << solution.maxProfit(prices2) << endl;

    return 0;
}