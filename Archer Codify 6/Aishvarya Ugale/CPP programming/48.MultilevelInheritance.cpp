
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
	char name[400];
    public:
	void in()
	{
		set();
		cout<<endl<<"Enter the name of train: ";
		cin.ignore();
		cin.getline(name,40);
	}
	void out()
	{
		show();
		cout<<endl<<"Name of Train: "<<name;
	}
};
class Ticket:private Train
{
	char pnm[40];
	int inr;
     public:
	void setTicket()
	{
		in();
		cout<<endl<<"Enter the name of person: ";
		fflush(stdin);
		cin>>pnm;
		cout<<endl<<"Enter the ticket price: ";
		cin>>inr;
	}
	void showTicket()
	{
		out();
		cout<<endl<<" Name of Person: "<<pnm<<"\t Paid Rs. "<<inr;
	}
};

int main()
{
	Ticket t1;

	t1.setTicket();
	t1.showTicket();

	return 0;
}
