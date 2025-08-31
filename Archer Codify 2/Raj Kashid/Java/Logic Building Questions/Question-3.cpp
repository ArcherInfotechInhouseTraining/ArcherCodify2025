// Question - 3
// We Have to Rotate Array To Right By D Places
// For e.g [1, 2, 3, 4, 5] , d = 2
// [4, 5, 1, 2, 3]

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

void output(int a[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void array_rotation(int a[], int n, int d)
{
    int l = 0, h = n - d - 1, temp = 0;
    while (l <= h)
    {
        temp = a[l];
        a[l] = a[h];
        a[h] = temp;
        l++;
        h--;
    }
    l = n - d;
    h = n - 1;
    while (l <= h)
    {
        temp = a[l];
        a[l] = a[h];
        a[h] = temp;
        l++;
        h--;
    }
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        temp = a[l];
        a[l] = a[h];
        a[h] = temp;
        l++;
        h--;
    }
}

int main()
{
    int a[] = {};
    int n;
    int d;
    cout << "Enter the count of elements : ";
    cin >> n;
    input(a, n);
    output(a, n);
    cout << "\nHow Many Places Do Youu Have To Rotate : ";
    cin >> d;
    array_rotation(a, n, d);
    output(a, n);
    return 0;
}