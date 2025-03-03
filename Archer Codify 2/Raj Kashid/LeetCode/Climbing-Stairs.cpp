#include <iostream>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int one = 1, two = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int temp = one;
            one += two;
            two = temp;
        }
        return one;
    }
};

int main()
{
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    Solution sol;
    cout << "Total ways to climb: " << sol.climbStairs(n) << endl;

    return 0;
}
