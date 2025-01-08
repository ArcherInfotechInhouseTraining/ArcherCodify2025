#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0, neg = 1;
        for (int i : nums)
        {
            if (i > 0)
            {
                ans[pos] = i;
                pos += 2;
            }
            else
            {
                ans[neg] = i;
                neg += 2;
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}