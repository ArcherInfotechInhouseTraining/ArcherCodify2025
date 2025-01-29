
//-----------------------------------------------------------------

//-------------- Operator Overloading ------------------------------

//----------------------------------------------------------------
/*
// Operator Overloading and Type Conversion

    In this topic, we have to see another special function which will be called when
    we operate an operator on the object, In that case type definition of object must
    contain that special function.

    That function called special coz its name starts with operator keyword and ends with
    the operator symbol to which you want to assign an additional meaning.


i.e.
        <returning_type> operator<op>(<argument_list>)
        {
            -------------------;
            -------------------;
            -------------------;
            -------------------;
        }

 lets see simple example,

class Sample
{
    int x;
   public:
    void in()
    {
        //------------------
    }
    void out()
    {
        //------------------
    }
    void operator-()
    {
        cout<<endl<<"-operator operated on sample object";
    }
};
int main()
{
    Sample ob1;
    -ob1;		// ob1.operator-()

    return 0;
}

------ Output ------

-operator operated on sample object
Process returned 0 (0x0)   execution time : 0.054 s
Press any key to continue.




// lets use the +

#include<iostream>
#include<string.h>
using namespace std;
class Sample
{
    private:
        int x;
    public:
        void in()
        {
            //--------------
        }
        void out()
        {
            //---------------
        }
        void operator-(Sample f)
        {
            cout<<endl<<"-operator operated on sample object";
        }
        void operator+(Sample t)
        {
            cout<<endl<<"+operator operated on sample object";
        }

};
int main()
{
    Sample s1,s2;
    s1+s2;    //s1.operator+(s2)

    Sample a1,a2;
    a1-a2;     //a1.operator-(a2)
    return 0;
}




// Performing unary operation
// Overloading - operator to get opposite value of an object.

#include<iostream>
#include<string.h>
using namespace std;
class Number
{
    private:
        int x;
        float y;
    public:
        Number()
        {
            x=1;
            y=1.1;
        }
        Number(int a,float b)
        {
            x=a;
            y=b;
        }
        void in()
        {
            cout<<endl<<"Enter the values of x and y:";
            cin>>x>>y;
        }
        void out()
        {
            cout<<x<<y;
    
        }
        void operator-()
        {
            x=-x;
            y=-y;
        }
};
int main()
{
    Number n1(23,34.45);
    n1.out();
    -n1;
    n1.out();

    Number n2;
    n2.in();
    n2.out();
    -n2;
    n2.out();
    return 0;
}






//--------------------------------------------------------------

// overloading - operator to get an object multi by 10.

#include<iostream>
#include<string.h>
using namespace std;
class Number
{
    private:
	int x;
	float y;
    public:
	Number()
	{
		x=1;
		y=1.1;
	}
	Number(int a, float b)
	{
		x=a;
		y=b;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x and y: ";
		cin>>x>>y;
	}
	void out()
	{
		cout<<"\n x="<<x<<"\t y="<<y;
	}
	void operator-()
	{
		x*=10;
		y*=10;
	}
};
int main()
{
	Number n1(34,67.23);
	n1.out();
	-n1;	// Internally it will be called as n1.operator-()
	n1.out();

	return 0;
}


*/


