#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2; // Avoids integer overflow

        if (nums[mid] > nums[right])
        {
            left = mid + 1; // Minimum must be in the right half
        }
        else
        {
            right = mid; // Minimum is in the left half (including mid)
        }
    }

    return nums[left]; // The minimum element
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "Minimum element: " << findMin(nums) << endl; // Output: 1
    return 0;
}
