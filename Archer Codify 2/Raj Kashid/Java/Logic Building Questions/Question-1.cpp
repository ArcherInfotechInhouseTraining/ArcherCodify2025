// Question 1 - We Have Array & We Have To Find Nearest Larger Value
// For e.g. [1, 2, 3, 4, 5]
// For x = 4 --> 5 is the nearest larger value

#include <iostream>
using namespace std;

void input(int a[], int n)
{

    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void print(int a[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int findNearestLargerValue(int a[], int x, int n)
{
    int minDiff = INT32_MAX, diff = 0, nearLarger = 0;
    for (int i = 0; i < n; i++)
    {
        diff = (a[i] - x);
        if ((diff > 0) && diff < minDiff)
        {
            minDiff = diff;
            nearLarger = a[i];
        }
    }
    return nearLarger;
}

int main()
{
    int a[] = {};
    int n;
    int x;
    cout << "Enter the count of elements : ";
    cin >> n;
    input(a, n);
    print(a, n);
    cout << "\nEnter Numeber Who's Nearest Larger Value You Want To Find : ";
    cin >> x;
    cout << "Nearest Larger Value For " << x << " is : " << findNearestLargerValue(a, x, n);
    return 0;
}