#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int major = nums.size() / 2;
        map<int, int> count;
        for (int num : nums)
        {
            count[num]++;
        }
        for (auto const &pair : count)
        {
            if (pair.second > major)
            {
                return pair.first;
            }
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}