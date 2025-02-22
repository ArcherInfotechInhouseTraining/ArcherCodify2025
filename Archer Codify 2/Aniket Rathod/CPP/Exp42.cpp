// WAP to implement the single inheritance between classes, name, vehical, and car as well as Vehical & train;
// Take simple data members if each class, define appropriate ip op functions with same & display the output (vehicle train -> public)

#include<iostream>
#include<string.h>
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

class Train:public Vehical
{
	char name[40];
    public:
	void in()
	{
		set();
		cout<<endl<<"Enter the name of train: ";
		cin>>name;
	}
	void out()
	{
		show();
		cout<<endl<<"Name of Train: "<<name;
	}
};

int main()
{
	Train trial;

	trial.in();
	trial.out();

	return 0;
}
