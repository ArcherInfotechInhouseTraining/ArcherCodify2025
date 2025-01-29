#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
	static int cnt;
    public:
	Demo()
	{
		cnt++;
		cout<<"\n Object "<<cnt<<" is created";
	}
	~Demo()
	{
		cout<<"\n Object "<<cnt<<" is deleted";
		cnt--;
	}
};

int Demo::cnt;

int main()
{
	cout<<endl<<"\n program start";

	Demo d1,d2;

	cout<<endl<<"\n In main";
	{
		cout<<endl<<"\n At start of inner scope";
		Demo d3,d4;
		cout<<endl<<"\n At end of inner scope";
	}
	cout<<endl<<"\n out of inner scope";

	cout<<endl<<"\n program end";

	return 0;
}