// - friend class - all member functions of one class as a friend of another class

#include<iostream>
#include<string.h>
using namespace std;

class B;

class A
{
   private:
	int a;
	friend class B;
};

class B
{
    private:
	int b;

    public:
	void in(A& ob)
	{
		cout<<"Enter the val of a: ";
		cin>>ob.a;
		cout<<"Enter the val of b: ";
		cin>>b;
	}

	void out(A ob)
	{
		cout<<endl<<"a: "<<ob.a;
		cout<<endl<<"b: "<<b;
	}
};

int main()
{
	A ob1;
	B ob2;

	ob2.in(ob1);
	ob2.out(ob1);

	return 0;
}
