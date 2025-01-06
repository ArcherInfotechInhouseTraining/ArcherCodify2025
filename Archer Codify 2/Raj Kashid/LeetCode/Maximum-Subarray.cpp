#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_current = nums[0], max_global = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            max_current = max(nums[i], max_current + nums[i]);
            max_global = max(max_current, max_global);
        }
        return max_global;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = sol.maxSubArray(nums);
    cout << "Maximum subarray sum is " << result << endl;
    return 0;
}