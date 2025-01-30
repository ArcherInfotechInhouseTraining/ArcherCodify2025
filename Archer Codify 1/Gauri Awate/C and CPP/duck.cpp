#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,rem;
	cout<<"Enter the number:";
	cin>>n;
	for( ;n>0; )
	{
		rem=n%10;
		n=n/10;
		if(rem==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Number is Duck";
	}
	else
	{
		cout<<"Number is not Duck";
		
	}
return 0;
}

