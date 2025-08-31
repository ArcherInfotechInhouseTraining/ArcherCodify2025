#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int currCount = 0, maxCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                currCount++;
            }
            else
            {
                maxCount = max(maxCount, currCount);
                currCount = 0;
            }
        }
        maxCount = max(maxCount, currCount);
        return maxCount;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Max consecutive ones: " << solution.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}