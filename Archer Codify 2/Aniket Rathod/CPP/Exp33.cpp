// Swaping the private data of class using friend function

#include<iostream>
#include<string.h>
using namespace std;

class B;

class A
{
   private:
	int a;
   public:
	void in()
	{
		cout<<"Enter the val of a: ";
		cin>>a;
	}
	void out()
	{
		cout<<endl<<"a: "<<a;
	}
	friend void swapdata(A &a1, B &b1);
};

class B
{
    private:
	int b;
    public:
	void input()
	{
		cout<<"Enter the val of b: ";
		cin>>b;
	}
	void output()
	{
		cout<<endl<<"b: "<<b;
	}
	friend void swapdata(A &a1, B &b1);
};

void swapdata(A &a1, B &b1)
{
    int tmp;
    tmp=a1.a;
    a1.a=b1.b;
    b1.b=tmp;
}
int main()
{
    A ob1;
    B ob2;

    ob1.in();
    ob2.input();

    cout<<endl<<"---------- Before Swap -------------";
    ob1.out();
    ob2.output();

    swapdata(ob1,ob2);

    cout<<endl<<"---------- After Swap -------------";
    ob1.out();
    ob2.output();

    return 0;
}
