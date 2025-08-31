#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i, j, count = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            // cout<<j;
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

/*
output:
Enter the value of n:5
1
2 3
4 5 6
6 7 8 9
10 11 12 13 14*/