#include <iostream>
using namespace std;
int main()
{
  int i, j, n,count=1;

  cout << "Enter the value of n:";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    int space = n - i;
    while (space)
    {
      cout << " ";
      space--;
    }
    for (j = 1; j <= i; j++)
    {
      cout << count;
      count++;
    }
    cout << endl;
  }
}

/*
output:
   Enter the value of n:5
    1
   23
  456
 78910
1112131415


*/



