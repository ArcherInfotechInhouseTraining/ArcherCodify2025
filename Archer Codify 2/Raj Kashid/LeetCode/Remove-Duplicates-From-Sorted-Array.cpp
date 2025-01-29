#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
// Example usage
int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int newLength = sol.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}