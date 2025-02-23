#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int max_product = nums[0];
    int min_product = nums[0];
    int current_product = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
            swap(min_product, max_product);

        max_product = max(nums[i], nums[i] * max_product);
        min_product = min(nums[i], nums[i] * min_product);
        current_product = max(current_product, max_product);
    }

    return current_product;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray: " << maxProduct(nums) << endl;
    return 0;
}
