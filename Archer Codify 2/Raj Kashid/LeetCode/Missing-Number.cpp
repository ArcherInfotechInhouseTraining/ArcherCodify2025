#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int missing = nums.size();
        for (int i = 0; i < nums.size(); ++i)
        {
            missing ^= i ^ nums[i];
        }
        return missing;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {3, 0, 1}; // Example input
    int result = solution.missingNumber(nums);
    cout << "The missing number is: " << result << endl;
    return 0;
}