#include <iostream>
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
	A(int a)
	{
		cout<<endl<<"In the para-1 constructor of A";
		n1=a;
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
	B(int a):A(a)
	{
		cout<<endl<<"In the para-1 constructor of B";
		n2=a;
	}
	B(int x, int y):A(x)
	{
		cout<<endl<<"In the para-2 constructor of B";
		n2=y;
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
class C:public B
{
	int n3;
     public:
	C()
	{
		cout<<endl<<"In the default constructor of C";
		n3=1000;
	}
	C(int a):B(a)
	{
		cout<<endl<<"In the para-1 constructor of C";
		n3=a;
	}
	C(int x, int y, int z):B(x,y)
	{
		cout<<endl<<"In the para-2 constructor of C";
		n3=z;
	}
	void setC()
	{
		cout<<endl<<"Enter any No: ";
		cin>>n3;
	}
	void showC()
	{
		showB();
		cout<<endl<<"C-n3 is: "<<n3;
	}
};

int main()
{
	C ob1;
	ob1.showC();

	C ob2(123);
	ob2.showC();

	C ob3(11,22,33);    // C ob3=C(11,22,33);
	ob3.showC();
	return 0;
}



