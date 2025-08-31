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
	Train tob;

	tob.in();
	tob.out();

	return 0;
}

