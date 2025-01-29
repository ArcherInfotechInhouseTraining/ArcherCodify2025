// Constructor and Destructor

#include<iostream>
#include<string.h>
using namespace std;

class Sample
{
	int data;
    public:
	Sample()
	{
		cout<<"\n Object is created";
		data=100;
	}
	~Sample()
	{
		cout<<"\n Object is Deleted";
	}
	void indata()
	{
		cout<<endl<<"Enter the data: ";
		cin>>data;
	}
	void outdata()
	{
		cout<<"Data is: "<<data;
	}
};

int main()
{
	Sample ob1;

	cout<<endl<<"Before input: ";
    	cout<<endl<<"For Ob1: ";
	ob1.outdata();

	ob1.indata();
    	cout<<endl<<"For Ob1: ";
	ob1.outdata();

	{
	    Sample ob2;
	    cout<<endl<<"For Ob2: ";
	    ob2.outdata();
	}
    	cout<<endl<<"Main ends";
	return 0;
}
