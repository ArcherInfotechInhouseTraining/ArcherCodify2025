#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int sum = 0, count = 0;
        
        for (int num : nums) {
            sum += num;
            if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[sum - k];
            }
            prefixSumCount[sum]++;
        }
        return count;
    }
};

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;
    Solution solution;
    int result = solution.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
}
