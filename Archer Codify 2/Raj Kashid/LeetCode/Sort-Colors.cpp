#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        stable_sort(nums.begin(), nums.end());
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    solution.sortColors(nums);

    cout << "After sorting: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}