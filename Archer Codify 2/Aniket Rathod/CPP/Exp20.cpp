// Another way - * Returning the object from member function *

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
	Complex addcomplex(Complex a)
	{
		Complex t;
		t.real=real+a.real;
		t.img=img+a.img;
		return t;
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

	c3=c1.addcomplex(c2);

	cout<<endl<<"C3: ";
	c3.output();

	return 0;
}
