#include<iostream>
using namespace std;
int main(){
	int n,sum=0,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"Sum of" <<n<< "natural no is:"<<sum;
	return 0;
}
