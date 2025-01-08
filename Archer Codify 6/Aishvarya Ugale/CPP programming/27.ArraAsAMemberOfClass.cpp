
	// Array as a member of class
	#include<iostream>
	using namespace std;

class MyArray
{
	int x[10];
public:
	void in()
	{
		cout<<endl<<"Enter the 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cin>>x[i];
		}
	}
	void out()
	{
		cout<<endl<<"Enter the 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cout<<"    "<<x[i];
		}
	}
};

int main()
{
	MyArray ob1;

	ob1.in();
	ob1.out();

	return 0;
}
