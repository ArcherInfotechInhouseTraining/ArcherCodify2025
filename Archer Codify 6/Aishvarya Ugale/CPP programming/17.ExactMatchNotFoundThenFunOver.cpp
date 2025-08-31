#include <iostream>
using namespace std;
void add(int a, int b, int c)
{
	cout<<endl<<"Addition 1 is: "<<(a+b+c);
}
void add(float a, float b)
{
	cout<<endl<<"Addition 2 is: "<<(a+b);
}

int main()
{
	int x,y;
	cout<<endl<<"Enter two int values: ";
	cin>>x>>y;
	add(x,y); // x and y is promoted to float

	int z;
	cout<<endl<<"Enter a single int value: ";
	cin>>z;
	add(x,y,z);

	float p,q;
	cout<<endl<<"Enter two float values: ";
	cin>>p>>q;
	add(p,q);

	return 0;
}
