#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int findElementAtIndex(int key, vector<int> &arr) 
    {
        for (int i = 0; i < arr.size(); ++i) 
        {
            if (arr[i] == key) return i;
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7};
    Solution solution;

    int key = 5;
    int index = solution.findElementAtIndex(key, arr);

    if (index != -1)
        cout << "Element " << key << " found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
