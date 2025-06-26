// - Parameterised Constructor : Constructor which collects an arguments.

#include<iostream>
using namespace std;

class Demo
{
    private:
	int x;
	float y;
	double z;

    public:
	Demo()// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}

	Demo(int t)//Parameterised constructor
	{
	    cout<<endl<<"In Parameterised constructor - 1";
	    x=t;
	    y=t;
	    z=t;
	}

	Demo(int a1, float a2, double a3) // Parameterised constructor
	{
	    cout<<endl<<"In Parameterised constructor - 2";
	    x=a1;
	    y=a2;
	    z=a3;
	}

	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};

int main()
{
	Demo ob1;
	ob1.out();

	int a=11;
	float b=5.3;
	double c=34.23;
	Demo ob2(a,b,c); // implicit call
	ob2.out();

	Demo ob3=Demo(a,b,c); // explicit call
	ob3.out();
	
	Demo ob4(10);
	ob4.out();

	return 0;
}
