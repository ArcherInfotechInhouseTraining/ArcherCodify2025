//======================================================================================================
//===============================Constructor and Destructor.============================================
//======================================================================================================

/*
//	Constructor and Destructor.

#include <iostream>
#include <string.h>
using namespace std;

class Sample
{
private:
    int n;

public:
    Sample()
    {
        cout << endl
             << "Object is created here\n";
        n = 100;
    }
    ~Sample()
    {
        cout << endl
             << "Object is deleted\n";
    }
    void in()
    {
        cout << "Enter the no:";
        cin >> n;
    }
    void out()
    {
        cout << "Number is:" << n;
    }
};

int main()
{
    Sample s1;

    cout << endl
         << "Befor input:\n";
    cout << "S1:";
    s1.out();

    cout << endl
         << "After input:\n";
    s1.in();
    s1.out();

    {
        Sample s2;
        cout << endl
             << "\n S2:";
        s2.out();
    }

    cout << endl
        << "Main ends\n";
    return 0;
}




// Lets see the different types of constructor


//	- Default Constructor: It will not collect any argument.

#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
    private:
        int x;
    public:
        Demo()
        {
            x=10;
            cout<<"Value of x is:"<<x;
        }
        void in()
        {
            cout<<endl<<"Enter the value of x:";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value of x is:"<<x;
        }
};
int main()
{
    Demo d1;
    d1.in();
    d1.out();

    return 0;
}




//defining the constructor outside of class.


#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
    private:
        int x;
    public:
        Demo();

        void in()
        {
            cout<<"Enter the value of x:";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value of x is: "<<x;
        }
};

Demo::Demo()
{
    x=100;
    cout<<endl<<"In Default constructor";
}

int main()
{
    Demo s;

    s.out();

    s.in();
    s.out();

    return 0;

}



// - Parameterised Constructor : Constructor which collects an arguments.

#include<iostream>
#include<string.h>
using namespace std;

class All
{
    private:
        int x;
        float y;
        double z;
    public:
        All()
        {
            cout<<"In default constructor:";
            x=23;
            y=24.64;
            z=345.573;
        }
        All(int a,float b,double c)
        {
            cout<<endl<<"In parameterized constructor:";
            x=a;
            y=b;
            z=c;
        }
        void in()
        {
            cout<<endl<<"Enter the value of x:\t y:\t z:\n";
            cin>>x>>y>>z;
        }
        void out()
        {
            cout<<endl<<"x:"<<x<<"\t y:"<<y<<"\t z:"<<z;
        }
};

int main()
{
    All g1;
    g1.out();

    g1.in();
    g1.out();

    int l=99;
    float m=34.56;
    double n=234.453;

    All g2(l,m,n); //implicit call.
    g2.out();

    All g3=All(l,m,n);  //Explicit call.
    g3.out();

    return 0;
}



// Dynamic Constructor: Used to allocated the memory for class member.

#include <iostream>
#include <string.h>
using namespace std;
class Test
{
    private:
        int *p;
        int ec;
    public:
        Test()
        {
            p=new int[5];
            ec=5;
            cout<<endl<<"Enter the 5 nos:";
            for(int i=0;i<5;i++)
            {
                cin>>*(p+i);
            }
        }
        Test(int cnt)
        {
            p=new int[cnt];
            ec=cnt;
            cout<<endl<<"Enter the cnt:";
            for(int i=0;i<ec;i++)
            {
                cin>>*(p+i);
            }
        }
        void out()
        {
            cout<<endl<<"Elements are:";
            for(int i=0;i<ec;i++)
            {
                cout<<"\t"<<*(p+i);
            }
        }
};

int main()
{
    Test t1;
    t1.out();

    Test t2(7);
    t2.out();

    return 0;
}



//  copy constructor.

#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
    private:
        int x;
        float y;
        double z;
    public:
        Demo()
        {
            cout<<"In Default constructor:\n";
            x=1;
            y=23.45;
            z=352.426;
        }
        Demo(int a,float b,double c)
        {
            cout<<endl<<"In parameterised constructor:\n";
            x=a;
            y=b;
            z=c;
        }
        Demo(Demo &t)
        {
            cout<<endl<<"In copy constructor:\n";
            x=t.x;
            y=t.y;
            z=t.z;
        }
        void out()
        {
            cout<<endl<<"x:\t"<<x<<"\t y:"<<y<<"\t z:"<<z;
        }
};
int main()
{
    Demo d1;
    d1.out();

    Demo d2(11,11.23,111.242);
    d2.out();

    Demo d3(d2);
    d3.out();

    return 0;
}



// Destructor.

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Code
{
    private:
        int *p;
        int ct;
    public:
        Code()
        {
            p=new int[5];
            ct=5;
            cout<<"Enter the 5 nos:";
            for(int i=0;i<ct;i++)
            {
                cin>>*(p+i);
            }
        }
        void out()
        {
            cout<<endl<<"Elements are:\t";
            for(int i=0;i<ct;i++)
            {
                cout<<*(p+i)<<"\t";
            }
        }
        ~Code()
        {
            delete p;
        }
};

int main()
{
    {
        Code c1;
        c1.out();
    }
    return 0;
}



// defining const member in class and its initialisation using initialisation list.


#include <iostream>
#include <iomanip>
using namespace std;

class Sample
{
    private:
	const int x;
    public:
	Sample(): x(10)
	{
		// x=1000; //error: assignment of read-only member 'Sample::x'|
	}
	Sample(int a):x(a)
	{	
		// x=2000; //error: assignment of read-only member 'Sample::x'|	
	}
	void show()
	{
		cout<<endl<<"x is "<<x;
	}
};
int main()
{
	Sample s1;
	s1.show();
	
	Sample s2(20);
	s2.show();

	return 0;
}

- Note carefully that initialisation list will work before the constructor body.

=================================================================================


#include <iostream>
#include <iomanip>
using namespace std;

class Sample
{
    private:
	const int x;
    public:
	Sample(): x(10)
	{
        // x=100;  //error
	    cout<<endl<<"In Default Constructor x is "<<x;
	}
	Sample(int a):x(a)
	{
	    cout<<endl<<"In para Constructor x is "<<x;
	}
};
int main()
{
	Sample s1;
	
	Sample s2(20);

	return 0;
}




	// You can use the initialisation list to init. multiple members also
    
#include <iostream>
#include <iomanip>
using namespace std;
class Sample
{
    private:
	int x;
	float y;
	double z;
    public:
	Sample():x(10), y(4.5), z(5.45)
	{	
		cout<<endl<<"In Default Constructor";
	}
	Sample(int a):x(a), y(a), z(a)
	{
		cout<<endl<<"In Para-1 Constructor";	
	}
	Sample(int a, float b, double c):x(a), y(b), z(c)
	{
		cout<<endl<<"In para-2 Constructor";	
	}
	void display()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Sample s1;
	s1.display();
	
	Sample s2(100);
	s2.display();
	
	Sample s3(10,23.45,78.453);
	s3.display();

	return 0;
}




	// const object and const function

#include <iostream>
using namespace std ;

class Sample
{
    private:
	int x;
	float y;
    public:
	Sample()
	{
		x=10;
		y=12.34;
	}
	Sample(int a, float b)
	{
		x=a;
		y=b;
	}
	void modify()
	{
	    y=x=111;
	}
	void display() const    // constant function
	{
	    // x=11;    // will generate an error coz the object is constant
		cout<<endl<<"x="<<x<<"\t y="<<y;
	}
};
int main()
{
	const Sample s1; // const object
	s1.display();

	const Sample s2(56, 89.67); // const object
	s2.display();
	
	//s2.modify();     // will generate an error coz the object is constant

	return 0;
}


*/
