
// write the program nearest lagers value for number at positioni. where distance is the diffrence in array indices . for example in array [1,4,3,2,5,7] near lagers value for 4 is 5. after the linear time preprocessing you should be able to answer.

#include <iostream>
using namespace std;
int main()
{
    // input array elements
    int arr[] = {1, 4, 3, 2, 5, 7};
    int len = sizeof(arr) / sizeof(int);
    int lend = 4; // so the value of interest is a[4] = 5

    int ans = 9999;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > arr[lend] && arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    // output
    cout << "\n near lagers value of " << arr[lend] << "is" << ans;

    return 0;
}
