#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  

  cout << "Enter the value of n:";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
  	int count=1;
  	for (j = 1; j <=n; j++)
    {
    	
    	if(i<j)
    	{
		  cout <<i ;
		  
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
 1111
  222
   33
    4

*/

