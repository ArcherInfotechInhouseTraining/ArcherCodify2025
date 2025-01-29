// Lets see the different types of constructor
// Default Constructor: It will not collect any argument.

#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
	int x;
    public:
	Demo() // Default constructor
	{
		x=10;
		cout<<"In Default Constructor";
	}
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

int main()
{
	Demo ob;

	ob.output();

	ob.input();
	ob.output();

	return 0;
}
