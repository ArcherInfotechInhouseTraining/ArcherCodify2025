#include<iostream>
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
	// ..... able to deal with person info

	cout<<endl<<"====================="<<endl;
	employee e;
	// ..... able to deal with person-employee info

	return 0;
}
