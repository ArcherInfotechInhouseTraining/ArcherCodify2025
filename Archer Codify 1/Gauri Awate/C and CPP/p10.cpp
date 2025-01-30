#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  char ch = 'A';
  cout << "Enter the value of n:";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {

      cout << ch;
      ch++;
    }
    cout << endl;
  }
}

/*output:


A
BC
DEF
GHIJ
KLMNO
*/