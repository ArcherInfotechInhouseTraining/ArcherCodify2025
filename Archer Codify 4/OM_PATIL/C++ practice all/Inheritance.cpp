
//---------------INHERITANCE------------------//

/*

#include<iostream>
#include<string.h>
using namespace std;
class Vehical
{
    private:
        int no;
        char type[40];
    public:
        void set()
        {
            cout<<endl<<"Enter the type of vehical:";
            cin>>type;
            cout<<endl<<"Enter the vehical number:";
            cin>>no;
        }
        void show()
        {
            cout<<endl<<"Type: "<<type<<"\t Number: "<<no;

        }

};

class Car:private Vehical
{
    private:
        char color[40];
        int model_no;
    public:
        void in()
        {
            set();
            cout<<endl<<"Enter the color of Car:";
            cin>>color;
            cout<<endl<<"Enter the model no. of car:";
            cin>>model_no;
        }
        void out()
        {
            show();
            cout<<endl<<"Coior: "<<color<<"Model_No: "<<model_no;
        }
};

int main()
{
    Car ob;
    ob.in();
    ob.out();

    return 0;
}



// Using the constructors in inheritance

    When you create object of any child then first it will allocate the memory for
    base data member, then its member dunctions are decl. and then it will execute the
    construcor of base. and perform operations in same sequence for its child.

#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int n1;
    public:
    A()
    {
        cout<<endl<<"In the default constructor of A";
        n1=10;
    }
    void setA()
    {
        cout<<endl<<"Enter any No: ";
        cin>>n1;
    }
    void showA()
    {
        cout<<endl<<"A-n1 is: "<<n1;
    }
};
class B:public A
{
    int n2;
     public:
    B()
    {
        cout<<endl<<"In the default constructor of B";
        n2=100;
    }
    void setB()
    {
        cout<<endl<<"Enter any No: ";
        cin>>n2;
    }
    void showB()
    {
        showA();
        cout<<endl<<"B-n2 is: "<<n2;
    }
};

int main()
{
    B ob;
    ob.showB();
    return 0;
}



#include <iostream>
using namespace std;
class A
{
    int n1;

public:
    A()
    {
        cout << endl
             << "In the default constructor of A";
        n1 = 10;
    }
    A(int a)
    {
        cout << endl
             << "In the para-1 constructor of A";
        n1 = a;
    }
    void setA()
    {
        cout << endl
             << "Enter any No: ";
        cin >> n1;
    }
    void showA()
    {
        cout << endl
             << "A-n1 is: " << n1;
    }
};
class B : public A
{
    int n2;

public:
    B()
    {
        cout << endl
             << "In the default constructor of B";
        n2 = 100;
    }
    B(int a) : A(a)
    {
        cout << endl
             << "In the para-1 constructor of B";
        n2 = a;
    }
    B(int x, int y) : A(x)
    {
        cout << endl
             << "In the para-2 constructor of B";
        n2 = y;
    }
    void setB()
    {
        cout << endl
             << "Enter any No: ";
        cin >> n2;
    }
    void showB()
    {
        showA();
        cout << endl
             << "B-n2 is: " << n2;
    }
};
class C : public B
{
    int n3;

public:
    C()
    {
        cout << endl
             << "In the default constructor of C";
        n3 = 1000;
    }
    C(int a) : B(a)
    {
        cout << endl
             << "In the para-1 constructor of C";
        n3 = a;
    }
    C(int x, int y, int z) : B(x, y)
    {
        cout << endl
             << "In the para-2 constructor of C";
        n3 = z;
    }
    void setC()
    {
        cout << endl
             << "Enter any No: ";
        cin >> n3;
    }
    void showC()
    {
        showB();
        cout << endl
             << "C-n3 is: " << n3;
    }
};

int main()
{
    C ob1;
    ob1.showC();

    C ob2(123);
    ob2.showC();

    C ob3(11, 22, 33); // C ob3=C(11,22,33);
    ob3.showC();
    return 0;
}



// Single inheritance

#include<iostream>
using namespace std;

class School
{
    private:
        char name[50];
        char grade[40];
    public:
        void in()
        {
            cout<<"\nEnter the Name of school:";
            cin>>name;
            cout<<endl<<"\nEnter the grade of school:";
            cin>>grade;
        }
        void out()
        {
            cout<<endl<<"\t School name:"<<name<<"\t Grade:"<<grade;
        }
};

class Teacher:public School
{
    private:
        char subnm[50];
        int std;
    public:
        void input()
        {
            in();
            cout<<endl<<"\nEnter the subject Name of teacher:";
            cin>>subnm;
            cout<<endl<<"\nEnter the standard of teaching:";
            cin>>std;
        }
        void output()
        {
            out();
            cout<<endl<<"\t Subject Name:"<<subnm<<"\t Standard:"<<std;
        }
};
int main()
{
    School s1;
    s1.in();
    s1.out();

    Teacher t1;
    t1.input();
    t1.output();

    return 0;
}




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
        cout << endl
             << "Enter the name: ";
        cin >> name;
        cout << endl
             << "Enter the uid: ";
        cin >> uid;
    }
    void output()
    {
        cout << endl
             << "Name: " << name << "\t UID: " << uid;
    }
};
class employee : private person
{
    float sal;

public:
    void set()
    {
        input();
        cout << "Enter the salary: ";
        cin >> sal;
    }
    void show()
    {
        output();
        cout << endl
             << "Salary: " << sal;
    }
};

int main()
{
    cout << endl
         << "=====================" << endl;
    person p;
    p.input();
    p.output();

    cout << endl
         << "=====================" << endl;
    employee e;
    e.set();
    e.show();

    return 0;
}




// Mulit-level inhritance.

#include <iostream>
#include <string.h>
using namespace std;
class Name
{
    private:
        char nm[50];
    public:
        Name()
        {
            cout<<endl<<"In Default constructor";
        }
        void in()
        {
            cout<<endl<<"Enter your name:";
            cin>>nm;
        }
        void out()
        {
            cout<<nm;
        }
};

class Student:public Name
{
    private:
        int rollno;
    public:
        Student()
        {
            cout<<endl<<"In DEfault constructor:";
        }
        void input()
        {
            in();
            cin>>rollno;
        }
        void output()
        {
            out();
            cout<<rollno;
        }
};

class Teacher:private Name
{
    private:
        char sub[40];
    public:
        Teacher()
        {
            cout<<endl<<"In DEfault constructor:";
        }
        void set()
        {
            in();
            cout<<endl<<"Enter your subject:";
            cin>>sub;
        }
        void get()
        {
            out();
            cout<<sub;
        }
};

int main()
{
    Teacher t;
    t.get();
    t.set();

    return 0;
}





//Invoking parameterized constructor to base class.


#include <iostream>
using namespace std;
class A
{
    int n1;
     public:
    A()
    {
        cout<<endl<<"In the default constructor of A";
        n1=10;
    }
    A(int a)
    {
        cout<<endl<<"In the para-1 constructor of A";
        n1=a;
    }
    void setA()
    {
        cout<<endl<<"Enter any No: ";
        cin>>n1;
    }
    void showA()
    {
        cout<<endl<<"A-n1 is: "<<n1;
    }
};
class B:public A
{
    int n2;
     public:
    B()
    {
        cout<<endl<<"In the default constructor of B";
        n2=100;
    }
    B(int a):A(a)
    {
        cout<<endl<<"In the para-1 constructor of B";
        n2=a;
    }
    B(int x, int y):A(x)
    {
        cout<<endl<<"In the para-2 constructor of B";
        n2=y;
    }
    void setB()
    {
        cout<<endl<<"Enter any No: ";
        cin>>n2;
    }
    void showB()
    {
        showA();
        cout<<endl<<"B-n2 is: "<<n2;
    }
};
class C:public B
{
    int n3;
     public:
    C()
    {
        cout<<endl<<"In the default constructor of C";
        n3=1000;
    }
    C(int a):B(a)
    {
        cout<<endl<<"In the para-1 constructor of C";
        n3=a;
    }
    C(int x, int y, int z):B(x,y)
    {
        cout<<endl<<"In the para-2 constructor of C";
        n3=z;
    }
    void setC()
    {
        cout<<endl<<"Enter any No: ";
        cin>>n3;
    }
    void showC()
    {
        showB();
        cout<<endl<<"C-n3 is: "<<n3;
    }
};

int main()
{
    C ob1;
    ob1.showC();

    C ob2(123);
    ob2.showC();

    C ob3(11,22,33);    // C ob3=C(11,22,33);
    ob3.showC();
    return 0;
}




// Using "protected": It is visibility modifier/Accessibility specifier, which is used to inherite
// 			   base class member without loosing its data hiding.

// 			   We can say that it is "Inheritable Private"

// 					 Inheritance visibility

// 	   Base class		private		protected	public

// 	private Memebers	NI		NI		NI

// 	protected Memebers	private		protected	protected

// 	public Memebers		private		protected	public


#include<iostream>
using namespace std;
class A
{
    protected:
        int no;
};
class B:public A
{
        int tmp;
    public:
        void in()
        {
            cout<<endl<<"Enter the two nos:";
            cin>>no>>tmp;
        }
        void out()
        {
            cout<<endl<<"No:"<<no<<"\t tmp:"<<tmp;
        }
};
int main()
{
    B obj;
    obj.in();
    obj.out();
//cout<<endl<<"no inherited from A: "<<ob.no;
//error: 'int A::no' is protected within this context.


    return 0;
}




//-------------------------------------------------------------------------------------------------------------------------

// 	// Demostrate the use of protected in multi-level inheritance

// 	[   ] Person
// 	  |
// 	  |
// 	[   ] Student
//  class Student:private Person
// 	  |
// 	  |
// 	[   ] Result
//  class Result:protected Student


#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        int uid;
        char name[40];
    public:
        Person()
        {
            uid=0;
            strcpy(name,"undefined");
            cout<<endl<<"Personal info init. completed";
        }
        void in()
        {
            cout<<endl<<"Enter the Name:";
            cin>>name;
            cout<<endl<<"Enter the UID:";
            cin>>uid;
        }
        void out()
        {
            cout<<endl<<"Name:"<<name<<"\t UID:"<<uid;
        }
};
class Student:private Person
{
    private:
        int esn;
    protected:
        int phy;
        int chem;
        int maths;
    public:
        Student()
        {
            esn=phy=chem=maths=0;
        }
        void input()
        {
            in();
            cout<<endl<<"Enter the ESN:";
            cin>>esn;

            cout<<endl<<"Enter marks in PCM:";
            cin>>phy>>chem>>maths;
        }
        void output()
        {
            out();
            cout<<endl<<"Exam seat no:"<<esn;
            cout<<endl<<"Marks: phy:"<<phy<<"\t Chem:"<<chem<<"\t Maths:"<<maths;

        }
};
class Result:protected Student
{
    private:
        char status[50];
        float per;
    public:
        Result()
        {
            strcpy(status,"Not_set");
            cout<<endl<<"Result info init. completed"<<endl;
        }
        void setdata()
        {
            input();
            if(phy>=40 && chem>=40 && maths>=40)
            {
                per=(phy+chem+maths)/3.0;
                strcpy(status,"Pass");
            }
            else
            {
                strcpy(status,"Fail");
            }
        }
        void showdata()
        {
            output();
            if(strcmp(status,"Pass")==0)
            {
                cout<<endl<<"Result Status: "<<status<<"with percentage:"<<per<<endl;
            }
            else
            {
                cout<<endl<<"Result status:"<<status<<endl;
            }
        }

};

int main()
{
    Result r;
    r.showdata();

    r.setdata();
    r.showdata();

    return 0;
}




//---------------------------------------------------------------------------------------------------------------

// 	// Hierarchical Inheritance


// 				Person
// 				  |
// 		---------------------------------
// 		|		        |		        |
//     Student	        Employee	       Driver
// 		|		        |		        |
//   ---------------    --------------    ----------
//   |	    |       |    |	   |	  |	   |	    |
//  Arts   Engg  Medi  HR    GM    ACC   LMV      HMV


//---------------------------------------------------------------------------------------------------------------

    // Multiple Inheritance:  In this type of inheritance, child class gains properties from two or more
    //			              base classes.

// in()	[   ] Person		  [   ] Student	    input()
// out()  |			            |		        output()
// 	      |			            |
// 	      |_____________________|
// 	   	            |
// 	  	            |
// 	in()	      [   ] Result  input()
// 	out()	     setdata();	    output()
// 		         showdata();
//  	class Result:protected Student,private Person



#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
    int uid;
    char name[40];

public:
    Person()
    {
        uid = 0;
        strcpy(name, "undefined");
        cout << endl
             << "Personal info init. completed";
    }
    void in()
    {
        cout << endl
             << "Enter the Name:";
        cin >> name;
        cout << endl
             << "Enter the UID:";
        cin >> uid;
    }
    void out()
    {
        cout << endl
             << "Name:" << name << "\t UID:" << uid;
    }
};
class Student
{
private:
    int esn;

protected:
    int phy;
    int chem;
    int maths;

public:
    Student()
    {
        esn = phy = chem = maths = 0;
    }
    void input()
    {

        cout << endl
             << "Enter the ESN:";
        cin >> esn;

        cout << endl
             << "Enter marks in PCM:";
        cin >> phy >> chem >> maths;
    }
    void output()
    {

        cout << endl
             << "Exam seat no:" << esn;
        cout << endl
             << "Marks: phy:" << phy << "\t Chem:" << chem << "\t Maths:" << maths;
    }
};
class Result : protected Student, private Person
{
private:
    char status[50];
    float per;

public:
    Result()
    {
        strcpy(status, "Not_set");
        cout << endl
             << "Result info init. completed" << endl;
    }
    void setdata()
    {
        input();
        in();
        if (phy >= 40 && chem >= 40 && maths >= 40)
        {
            per = (phy + chem + maths) / 3.0;
            strcpy(status, "Pass");
        }
        else
        {
            strcpy(status, "Fail");
        }
    }
    void showdata()
    {
        output();
        out();
        if (strcmp(status, "Pass") == 0)
        {
            cout << endl
                 << "Result Status: " << status << "with percentage:" << per << endl;
        }
        else
        {
            cout << endl
                 << "Result status:" << status << endl;
        }
    }
};

int main()
{
    Result r;
    r.showdata();

    r.setdata();
    r.showdata();

    return 0;
}



*/


