#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  

  cout << "Enter the value of n:";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
  	
  	for (j = 1; j <=n; j++)
    {
    	if(i<j)
    	{
		  cout << "X";
        }
        else
       {
  	     cout<<" ";
       }
    
       
    }
    cout<<endl;   
  } 
  
}
/*
output:
Enter the value of n:5
 XXXX
  XXX
   XX
    X

*/

