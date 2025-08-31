// Passing object as an argument to member function

#include<iostream>
#include<string.h>
using namespace std;

class Complex
{
	int real;
	float img;
     public:
	void input()
	{
		cout<<endl<<"Enter the real part of number: ";
		cin>>real;
		cout<<endl<<"Enter the img part of number: ";
		cin>>img;
	}

	void output()
	{
		cout<<real<<" || "<<img;
	}

	void addcomplex(Complex a, Complex b)
	{
		real=a.real+b.real;
		img=a.img+b.img;
	}
};

int main()
{
	Complex c1,c2,c3;

	c1.input();
	c2.input();

	cout<<endl<<"C1: ";
	c1.output();

	cout<<endl<<"C2: ";
	c2.output();

	c3.addcomplex(c1,c2);

	cout<<endl<<"C3: ";
	c3.output();

	return 0;
}
