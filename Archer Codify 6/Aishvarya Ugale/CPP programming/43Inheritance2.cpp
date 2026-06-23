

	//- Single Inheritance: (public - called all methods from main() )

#include <iostream>
#include <string.h>
using namespace std;

class person
{
	int uid;
	char name[30];
     public:
	void input()
	{
		cout<<endl<<"Enter the name: ";
		cin>>name;
		cout<<endl<<"Enter the uid: ";
		cin>>uid;
	}
	void output()
	{
		cout<<endl<<"Name: "<<name<<"\t UID: "<<uid;
	}
};
class employee:public person
{
	float sal;
     public:
	void set()
	{
		cout<<"Enter the salary: ";
		cin>>sal;
	}
	void show()
	{
		cout<<endl<<"Salary: "<<sal;
	}
};

int main()
{
	cout<<endl<<"====================="<<endl;
	person p;
	p.input();
	p.output();

	cout<<endl<<"====================="<<endl;
	employee e;
	e.input();
	e.set();

	e.output();
	e.show();

	return 0;
}
