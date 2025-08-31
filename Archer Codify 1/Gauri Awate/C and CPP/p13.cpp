#include <iostream>
using namespace std;
int main()
{
  int i, j, n;

  cout << "Enter the value of n:";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      char ch = 'A' + i + j - 2;
      cout << ch;
    }
    cout << endl;
  }
}

/*output:

ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/