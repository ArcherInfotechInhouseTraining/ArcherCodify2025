#include <iostream>
#include <string.h>
using namespace std;
class A
{
	int n1;
     public:
	A()
	{
		cout<<endl<<"In the default constructor of A";
		n1=10;
	}
	void setA()
	{
		cout<<endl<<"Enter any No: ";
		cin>>n1;
	}
	void showA()
	{
		cout<<endl<<"A-n1 is: "<<n1;
	}
};
class B:public A
{
	int n2;
     public:
	B()
	{
		cout<<endl<<"In the default constructor of B";
		n2=100;
	}
	void setB()
	{
		cout<<endl<<"Enter any No: ";
		cin>>n2;
	}
	void showB()
	{
		showA();
		cout<<endl<<"B-n2 is: "<<n2;
	}
};

int main()
{
	B ob;
	ob.showB();
	return 0;
}
