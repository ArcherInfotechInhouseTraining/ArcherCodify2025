
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *p;

	cout<<endl<<"Enter the element count: ";
	int cnt;
	cin>>cnt;

	p=new int[cnt];

	cout<<endl<<"Enter the "<<cnt<<" nos: ";
	for(int i=0;i<cnt;i++)
	{
		cin>>*(p+i);
	}

	cout<<endl<<"Elements are: ";
	for(int i=0;i<cnt;i++)
	{
		///cout<<"  "<<*(p+i);
		///cout<<"\t"<<*(p+i);
		cout<<setw(6)<<*(p+i);
	}
	delete(p);
	cout<<endl<<"Elements are: ";
	for(int i=0;i<cnt;i++)
	{
		///cout<<"  "<<*(p+i);
		///cout<<"\t"<<*(p+i);
		cout<<setw(6)<<*(p+i);
	}
	return 0;
}
