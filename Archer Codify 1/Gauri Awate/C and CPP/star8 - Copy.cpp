#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  	int count=1;

  cout << "Enter the value of n:";
  cin >> n;

  for (i = 0; i <= n; i++)
  {
  
  	for (j = 1; j <=n; j++)
    {
    	
    	if(i<j)
    	{
		  cout <<j ;
		 
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
12345
 2345
  345
   45
    5

*/

