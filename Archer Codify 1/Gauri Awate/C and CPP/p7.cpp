#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  cout << "Entert the value of n:";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << i - j + 1;
    }
    cout << endl;
  }
}