#include <iostream>
using namespace std;
int main()
{
  int i, j, n;

  cout << "Enter the value of n:";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    char ch = 'A' + n - i;
    for (j = 1; j <= i; j++)
    {

      cout << ch;

      ch++;
    }
    cout << endl;
  }
}

/*output:

E
DE
CDE
BCDE
ABCDE
*/ 
