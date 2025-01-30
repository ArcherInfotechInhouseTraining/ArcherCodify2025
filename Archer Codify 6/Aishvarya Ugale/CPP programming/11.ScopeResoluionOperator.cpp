#include<iostream>
using namespace std;
int x=1000; // Global member
int main()
{
	int x=100; // local to main()
	cout<<"\n In main(upper) x: "<<x<<"\t global x: "<<::x;
	{
		int a=x; // local to inner scope
		cout<<"\n Inner scope(upper) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
		int x=10;// local to inner scope
		a=x;
		cout<<"\n Inner scope(lower) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
	}
	cout<<"\n In main(lower) x: "<<x<<"\t global x: "<<::x;
	return 0;
}
