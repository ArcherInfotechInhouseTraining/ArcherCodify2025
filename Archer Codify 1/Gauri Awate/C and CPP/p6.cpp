#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        int value = i;
        for (j = 1; j <= i; j++)
        {
            // cout<<j;

            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}


//output:
/*Enter the value of n:5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/