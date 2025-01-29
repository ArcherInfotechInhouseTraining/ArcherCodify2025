#include<iostream>

using namespace std;
int main()
{
	int n,sum=0,i,rem;
	//cout<<"Enter the number:";
	cin>>n;
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		cout<<n<< "Number is perfect";
	}
	else{
		cout<<n<< "Number is not perfect";
	}
return 0;
}
