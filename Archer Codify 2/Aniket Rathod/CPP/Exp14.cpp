// Function overloading

#include<iostream>
using namespace std;

class Rect
{
	int len;
	int brd;
    public:
	void in()
	{
		cout<<endl<<"Enter the length and Breadth of rect: ";
		cin>>len>>brd;
	}
	void in(int a)
	{
		len=a;
		brd=a;
	}	
	void in(int a1, int a2)
	{
		len=a1;
		brd=a2;
	}
	void out()
	{
		cout<<endl<<"Length: "<<len<<"\t Breadth: "<<brd;
	}
	int area()
	{
		return (len*brd);
	}
};

int main()
{
	Rect rob1;
	rob1.in();
	rob1.out();
	cout<<endl<<"Area of rect-1: "<<rob1.area();

	Rect rob2;
	rob2.in(5);
	rob2.out();
	cout<<endl<<"Area of rect-2: "<<rob2.area();

	Rect rob3;
	int x,y;
	cout<<endl<<"Enter the length and Breadth of rect: ";
	cin>>x>>y;
	rob3.in(x,y);
	rob3.out();
	cout<<endl<<"Area of rect-3: "<<rob3.area();

	return 0;
}
