#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int j = 0; // Initialize j to 0 to handle the case when there are no zeros at the beginning

        // Move all non-zero elements to the front of the array
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }

        // Fill the remaining positions with zeros
        for (int i = j; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};
    solution.moveZeroes(nums);

    // Print the result
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}