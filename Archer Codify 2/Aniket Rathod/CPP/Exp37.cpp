//defining the constructor outside of class

#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
	int x;
    public:
	Demo();
	void input()
	{
		cout<<endl<<"\n Enter the data: ";
		cin>>x;
	}
	void output()
	{
		cout<<endl<<"x is: "<<x;
	}
};

Demo::Demo() // Default constructor
{
	x=10;
	cout<<endl<<"In Default Constructor";
}

int main()
{
	Demo ob;

	ob.output();

	ob.input();
	ob.output();

	return 0;
}
