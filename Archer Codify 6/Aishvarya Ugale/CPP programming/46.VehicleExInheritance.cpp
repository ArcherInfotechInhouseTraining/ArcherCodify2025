#include <iostream>
#include <string.h>
using namespace std;

class Vehical
{
	int no;
	char type[40];
    public:
	void set()
	{
		cout<<endl<<"Enter the Type of vehical: ";
		cin>>type;
		cout<<endl<<"Enter the vehical number: ";
		cin>>no;
	}
	void show()
	{
		cout<<endl<<"Type: "<<type<<"\t Number: "<<no;
	}
};

class Car:private Vehical
{
	char color[40];
	int model_no;
    public:
	void in()
	{
		set();
		cout<<endl<<"Enter the color of Car: ";
		cin>>color;
		cout<<endl<<"Enter the model no of Car: ";
		cin>>model_no;
	}
	void out()
	{
		show();
		cout<<endl<<"Color: "<<color<<"Model_No: "<<model_no;
	}
};

int main()
{
	 Car cob;

	cob.in();
	cob.out();

	return 0;
}
