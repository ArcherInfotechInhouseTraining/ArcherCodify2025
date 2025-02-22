// Class //
/*
#include<iostream>
using namespace std;

class BankAccount
{
    private:
        char nm[40];
        int accno;
        char pass[20];
    public:
        void input()
        {
            cout<<endl<<"Enter the acount holder name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter the account no:";
            cin>>accno;
            cout<<endl<<"Enter the account password:";
            cin.ignore();
            cin.getline(pass,20);

        }
        void display()
        {
            cout<<endl<<"Name:"<<nm<<"\t Account Number: "<<accno<<"\t Password:"<<pass;

        }
};

int main()
{
    BankAccount b1,b2;

    b1.input();
    b2.input();

    b1.display();
    b2.display();

    return 0;
}






#include<iostream>
using namespace std;

class Student
{
    private:
        char nm[40];
        int rno;
        int age;
        float per;
    public:
        void input()
        {
            cout<<endl<<"Enter the name of student:";
            // cin.ignore();
            //cin.getline(nm,40);
            cin>>nm;

            cout<<endl<<"Enter the rno , age , and percentage:";
            cin>>rno>>age>>per;
        }

        void dispaly()
        {
            cout<<endl<<"\nStudent Name:  "<<nm<<"\t Roll No:"<<rno<<"\t Age:"<<age<<"\t Percentage:"<<per;
        }
};

int main()
{
    Student s1,s2,s3;

    s1.input();
    s2.input();
    s3.input();

    s1.dispaly();
    s2.dispaly();
    s3.dispaly();

    return 0;

}




// Passing the arguments to the member function.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char nm[40];
        int rno;
        int age;
        float per;
    public:
        void input(char a_nm[],int a_rno,int a_age,float a_per)
        {
            strcpy(nm,a_nm);
            rno=a_age;
            age=a_age;
            per=a_per;
        }
        void display()
        {
            cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t Rno:"<<rno<<"\t Percentage: "<<per;

        }

};

int main()
{
    Student s1,s2;

    s1.input("Ajit",11,12,34.46);

    char m_nm[50];
    int m_rno,m_age;
    float m_per;

    cout<<endl<<"Enter the Student name:";
    cin>>m_nm;
    cout<<endl<<"Enter the Rno,Age and Percentage:";
    cin>>m_rno>>m_age>>m_per;

    s2.input(m_nm,m_rno,m_age,m_per);

    s1.display();
    s2.display();
    return 0;
}



// Enter the item code and price and display the list and total

#include <iostream>
#include <string.h>
using namespace std;
class Item
{
    int icode;
    float iprice;

public:
    void indata()
    {
        cout << endl<< "Enter the item code and price: ";
        cin >> icode >> iprice;
    }
    void outdata()
    {
        cout << endl<< " Item code: " << icode << "\t Price: " << iprice;
    }
    float getprice()
    {
        return iprice;
    }
};

int main()
{
    int i, cnt;

    cout << endl<< "Enter the count: ";
    cin >> cnt;
    Item *p = new Item[cnt];

    cout << "\n Enter the details of " << cnt << " Items: ";
    for (i = 0; i < cnt; i++)
    {
        (p + i)->indata();
    }

    cout << endl<< "-------- Item List -------";
    for (i = 0; i < cnt; i++)
    {
        (p + i)->outdata();
    }

    // total calc

    float tot = 0.0;
    for (i = 0; i < cnt; i++)
    {
        tot = tot + (p + i)->getprice();
    }
    cout << endl<< "Total Bill: " << tot;

    return 0;
}


// Array of objects

//		iar
//  	 [] [] [] [] [] [] [] [] []

    // Enter the item code and price and display the list.

#include<iostream>
using namespace std;

class Item
{
    private:
        int icode;
        float price;
    public:
        void in()
        {
            cout<<"Enter the code and price of item:";
            cin>>icode>>price;
        }
        void out()
        {
            cout<<endl<<\n"\t code"<<icode<<"\t price :"<<price;
        }
};

int main()
{
    Item arr[2];
    int i;

    for(i=0;i<2;i++)
    {
        arr[i].in();
    }
    cout<<"========Item list=============";
    for(i=0;i<2;i++)
    {
        arr[i].out();
    }
}


// same program using pointer notations
#include<iostream>
using namespace std;

class Item
{
    private:
        int icode;
        float price;
    public:
        void in()
        {
            cout<<"Enter the code and price of item:";
            cin>>icode>>price;
        }
        void out()
        {
            cout<<endl<<"\n code"<<icode<<"\t price :"<<price;
        }
};

int main()
{
    Item *ptr;
    int i,cnt;

    cout<<"\n Enter the cnt:";
    cin>>cnt;

    ptr = new Item[cnt];

    for(i=0;i<cnt;i++)
    {
        ptr[i].in();
    }
    cout<<"========Item list=============";
    for(i=0;i<cnt;i++)
    {
        ptr[i].out();
    }
}



// Can be also accessed using (p+i)->in().

#include<iostream>
using namespace std;

class Item
{
    private:
        int icode;
        float price;
    public:
        void in()
        {
            cout<<"Enter the code and price of item:";
            cin>>icode>>price;
        }
        void out()
        {
            cout<<endl<<"code"<<icode<<"\t price :"<<price;
        }
};

int main()
{
    Item *ptr;
    int i,cnt;

    cout<<"Enter the cnt:";
    cin>>cnt;

    ptr=new Item[cnt];


    for(i=0;i<cnt;i++)
    {
        (ptr+i)->in();

    }
    cout<<"========Item list=============";
    for(i=0;i<cnt;i++)
    {
        (ptr+i)->out();
    }
}



// Returning data from member function

// Enter the item code and price and display the list and total.

#include<iostream>
using namespace std;

class Item
{
    private:
        int icode;
        float price;
    public:
        void input()
        {
            cout<<"\n Enter the icode and price of item:";
            cin>>icode>>price;
        }
        void display()
        {
            cout<<"\n icode:"<<icode<<"\t Price:"<<price;
        }
        float gettot()
        {
            return price;
        }
};
int main()
{
    Item ar[3];
    int i;

    for(i=0;i<3;i++)
    {
        ar[i].input();
    }

    for(i=0;i<3;i++)
    {
        ar[i].display();
    }

    float tot=0.0;
    for(i=0;i<3;i++)
    {
        tot=tot+ar[i].gettot();
    }
    cout<<"\n\nTotal price is==>"<<tot;


    return 0;
}


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


// Add one more member function

#include<iostream>
#include<string.h>
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
    int getprimecount()
    {
        int i,cnt=0,d,flg;
        for(i=0;i<10;i++)
        {
            d=2;
            flg=0;
            while(d<=(x[i]/2))
            {
                if(x[i]%d==0)
                {
                    flg=1;
                    break;
                }
                d++;
            }
            if(flg==0)
                cnt++;
        }
        return cnt;
    }
};

int main()
{
    MyArray ob1;

    ob1.in();
    ob1.out();

    int t=ob1.getprimecount();
    //cout<<endl<<"Prime Count is: "<<ob1.getprimecount();
    cout<<endl<<"Prime Count is: "<<t;
    return 0;
}



// Pointer as a member of class

#include <iostream>
#include <string.h>
using namespace std;

class Mydyna
{
private:
    int *p;
    int cnt;

public:
    void in()
    {
        cout << "Enter the count:";
        cin >> cnt;

        p = new int[cnt];

        cout << "Enter the numbers:";
        for (int i = 0; i < cnt; i++)
        {
            cin >> *(p + i);
        }
    }
    void out()
    {
        cout << endl
             << "=====data is=====\n";
        for (int i = 0; i < cnt; i++)
        {
            cout << endl
                 << *(p + i);
        }
    }

    int getprime()
    {
        int pcnt = 0;
        int flg;
        int d;
        d = 2;
        for (int i = 0; i < cnt; i++)
        {
            while (d <= (p[i] / 2))
            {
                flg = 0;
                if (*(p + i) % d == 0)
                {
                    flg = 1;
                    break;
                }
                d++;
            }

            if (flg == 0)
            {
                pcnt++;
            }
        }
        return pcnt;
    }
};

int main()
{
    Mydyna m1;

    m1.in();
    m1.out();

    cout << endl
         << "prime count is:" << m1.getprime();

    return 0;
}


#include<iostream>
using namespace std;

class Mydynamic
{
    private:
        int *no;
        int cnt;
    public:
        void in()
        {
            int i;
            cout<<"Enter the count:";
            cin>>cnt;

            no=new int[cnt];

            cout<<"Enter the num:";
            for(i=0;i<cnt;i++)
            {
                cin>>*(no+i);
            }
        }
        void out()
        {
            int i;
            cout<<endl<<"-----Items are-----"<<endl;
            for(i=0;i<cnt;i++)
            {
                cout<<"\t"<<*(no+i);
            }
        }

        int getevencnt()
        {
            int ecnt=0;
            int i;

            for(i=0;i<cnt;i++)
            {
                if(*(no+i)%2==0)
                {
                    ecnt++;
                }
            }
            return ecnt;
        }
};

int main()
{
    int t;
    Mydynamic m1;

    m1.in();
    m1.out();

    t=m1.getevencnt();
    cout<<endl<<"The even count is:"<<t;

    return 0;
}



// Passing object as an argument to member function

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void in()
        {
            cout<<"Enter the real and img no:";
            cin>>real>>img;
        }
        void out()
        {
            cout<<endl<<"Real:"<<real<<endl<<"img:"<<img;
        }
        void addcomplex(Complex a,Complex b)
        {
            real=a.real+b.real;
            img= a.img+b.img;
        }
};

int main()
{
    Complex c1,c2,c3;


    c1.in();
    c2.in();

    cout<<endl<<"c1:";
    c1.out();

    cout<<endl<<"c2:";
    c2.out();

    c3.addcomplex(c1,c2);

    cout<<endl<<"Complex no. Addition is:";
    c3.out();

    return 0;
}




#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void in()
        {
            cout<<"Enter the real and img no:";
            cin>>real>>img;
        }
        void out()
        {
            cout<<endl<<"Real:"<<real<<endl<<"img:"<<img;
        }
        Complex addcomplex(Complex a)
        {
            Complex t;
            t.real=real+a.real;
            t.img= img+a.img;
            return t;
        }
};

int main()
{
    Complex c1,c2,c3;


    c1.in();
    c2.in();

    cout<<endl<<"c1:";
    c1.out();

    cout<<endl<<"c2:";
    c2.out();

    c3=c1.addcomplex(c2);

    cout<<endl<<"Complex no. Addition is:";
    c3.out();

    return 0;
}



    // Using friend function


#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void in()
        {
            cout<<"Enter the real and img no:";
            cin>>real>>img;
        }
        void out()
        {
            cout<<endl<<"Real:"<<real<<endl<<"img:"<<img;
        }
        friend Complex addcomplex(Complex a,Complex b);

};

Complex addcomplex(Complex a,Complex b)
        {
            Complex t;
            t.real=a.real+b.real;
            t.img= a.img+b.img;
            return t;
        }
int main()
{
    Complex c1,c2,c3;


    c1.in();
    c2.in();

    cout<<endl<<"c1:";
    c1.out();

    cout<<endl<<"c2:";
    c2.out();

    c3=addcomplex(c1,c2);

    cout<<endl<<"Complex no. Addition is:";
    c3.out();

    return 0;
}



// Write a program to add two time objects.

#include<iostream>
using namespace std;

class Time
{
    private:
        int hh;
        int mm;
        int ss;
    public:
        void in()
        {
            cout<<endl<<"Enter the hh:mm:ss=";
            cin>>hh>>mm>>ss;
        }
        void out()
        {
            cout<<endl<<hh<<":"<<mm<<":"<<ss;

        }
        void addtime(Time a,Time b)
        {
            ss=a.ss+b.ss;

            mm=a.mm+b.mm+(ss/60);
            ss=ss%60;

            hh=a.hh+b.hh+(mm/60);
            mm=mm%60;
        }

};

int main()
{
    Time t1,t2,t3;

    t1.in();
    t2.in();

    cout<<endl<<"t1:";
    t1.out();

    cout<<endl<<"t2:";
    t2.out();

    t3.addtime(t1,t2);

    cout<<endl<<"t3:";
    t3.out();

    return 0;
};


// Another way with return type:

#include<iostream>
using namespace std;

class Time
{
    private:
        int hh;
        int mm;
        int ss;
    public:
        void in()
        {
            cout<<endl<<"Enter the hh:mm:ss=";
            cin>>hh>>mm>>ss;
        }
        void out()
        {
            cout<<endl<<hh<<":"<<mm<<":"<<ss;

        }
        Time addtime(Time b)
        {
            Time tmp;
            tmp.ss=ss+b.ss;

            tmp.mm=mm+b.mm+(ss/60);
            tmp.ss=ss%60;

            tmp.hh=hh+b.hh+(mm/60);
            tmp.mm=mm%60;

            return tmp;
        }

};

int main()
{
    Time t1,t2,t3;

    t1.in();
    t2.in();

    cout<<endl<<"t1:";
    t1.out();

    cout<<endl<<"t2:";
    t2.out();

    t3=t1.addtime(t2);

    cout<<endl<<"t3:";
    t3.out();

    return 0;
};



#include<iostream>
using namespace std;

class Time
{
    private:
        int hh;
        int mm;
        int ss;
    public:
        void in()
        {
            cout<<endl<<"Enter the hh:mm:ss=";
            cin>>hh>>mm>>ss;
        }
        void out()
        {
            cout<<endl<<hh<<":"<<mm<<":"<<ss;

        }
        void addtime(int x,Time b)
        {
            ss=x+b.ss;

            mm=x+b.mm+(ss/60);
            ss=ss%60;

            hh=x+b.hh+(mm/60);
            mm=mm%60;
        }

};

int main()
{
    Time t1,t2,t3;

    t1.in();
    t2.in();

    cout<<endl<<"t1:";
    t1.out();

    cout<<endl<<"t2:";
    t2.out();

    t3.addtime(10,t2);

    cout<<endl<<"t3:";
    t3.out();

    return 0;
};



// Static data memeber and Static member function.

#include <iostream>
using namespace std;

class Item
{
private:
    int icode;
    float price;
    static float tot;

public:
    void in()
    {
        cout << "Enter the code and price of product:";
        cin >> icode >> price;
        tot = tot + price;
    }
    void out()
    {
        cout << endl
             << "Icode:" << icode << "Price:" << price;
    }
    void showtot()
    {
        cout << endl
             << "TOTAL IS:" << tot;
    }
};
float Item::tot;
int main()
{
    Item i1, i2, i3;

    i1.in();
    i2.in();
    i3.in();

    i1.out();
    i2.out();
    i3.out();

    i1.showtot();

    return 0;
}


// Using static data member and static member function

#include<iostream>
using namespace std;

class Item
{
    private:
        int icode;
        float price;
        static float tot;
    public:
        void in()
        {
            cout<<"Enter the icode and price:";
            cin>>icode>>price;
            tot=tot+price;
        }
        void out()
        {
            cout<<endl<<"Icode:"<<icode<<"\t Price"<<price;

        }
        static void totcal()
        {

            cout<<endl<<"Total is:"<<tot;
        }
};
float Item::tot;
int main()
{
    Item i1,i2,i3;

    i1.in();
    i2.in();
    i3.in();

    i1.out();
    i2.out();
    i3.out();

    Item::totcal();
    return 0;
}



// another example of players

#include<iostream>
using namespace std;

class Player
{
    private:
        char nm[50];
        int idno;
        int run;
        static int huncnt,fiftycnt;
    public:
        void in()
        {
            cout<<"Enter the name,id and runs of player";
            cin>>nm>>idno>>run;
            if(run>=100)
            {
                huncnt++;
            }
            else if(run>=50)
            {
                fiftycnt++;
            }
        }
        void out()
        {
            cout<<endl<<"Name:"<<nm<<"\t Id:"<<idno<<"\t Runs:"<<run;

        }
        static void showoff()
        {
            cout<<endl<<"100:"<<huncnt<<"\t 50:"<<fiftycnt;
        }

};
int Player::huncnt,Player::fiftycnt;

int main()
{
    Player p[11];

    for(int i=0;i<11;i++)
    {
        p[i].in();
    }

    cout<<endl<<"======Score card========";
    for(int i=0;i<11;i++)
    {
        p[i].out();
    }

    Player::showoff();

    return 0;
}



// Friend Function
        // - outside function as a friend of class
        // - Member function of one class as a friend of another
        // - friend class - all member functions of one class as a friend of another class

// - outside function as a friend of class

#include<iostream>
using namespace std;

class Person
{
    private:
        char nm[40];
        int age;
    public:
        void in()
        {
            cout<<"Enter the Name and age of person:";
            cin>>nm>>age;
        }
        void out()
        {
            cout<<endl<<"Name:"<<nm<<"\t Age:"<<age;
        }
        friend void showoff(Person a);
};
void showoff(Person a)
{
    cout<<endl<<"Person info:\n"<<"\t Name:"<<a.nm<<"\t Age:"<<a.age;
}

int main()
{
    Person p1;

    p1.in();
    p1.out();

    showoff(p1);

    return 0;
}



// Outside function as a friend of two or more classes.

#include <iostream>
#include<string.h>
using namespace std;
class Student;
class Person
{
private:
    char nm[40];
    int age;

public:
    void in()
    {
        cout << "Enter the Name of person:";
        cin.getline(nm, 40);

        cout << endl<< "Enter the Age:";
        cin >> age;
    }
    void out()
    {
        cout << endl<< "Name:" << nm << "\t Age:" << age;
    }
    friend void Findelder(Person a, Student b);
};
class Student
{
private:
    char nm[50];
    int age;

public:
    void input()
    {
        cout << endl<< "Enter the Name:";
        cin.ignore();
        cin.getline(nm, 50);

        cout << endl<< "Enter the Age:";
        cin >> age;
    }
    void output()
    {
        cout << endl<< "Name:" << nm << "\t Age:" << age;
    }
    friend void Findelder(Person a, Student b);
};
void Findelder(Person a, Student b)
{
    if (a.age > b.age)
    {
        cout << endl<< "Person info:\n"<< "\t Name:" << a.nm << "\t Age:" << a.age;
    }
    else
    {
        cout << endl<< "Person info:\n"<< "\t Name:" << b.nm << "\t Age:" << b.age;
    }
};

int main()
{
    Person p1;
    p1.in();
    p1.out();

    Student s;
    s.input();
    s.output();

    Findelder(p1, s);
    return 0;
}






// - Member function of one class as a friend of another

#include<iostream>
#include<string.h>

using namespace std;
class Person;
class Student
{
    private:
        char nm[40];
        int age;
    public:
        void in()
        {
            cout<<"Enter the name and age :";
            cin.ignore();
            cin.getline(nm,40);

            cin>>age;

        }
        void out()
        {
            cout<<endl<<"Name:"<<nm<<"\t Age:"<<age;
        }
        void Elder(Person a);
};

class Person
{
    private:
        char nm[50];
        int age;
    public:
        void in()
        {
            cout<<endl<<"Enter the name and age:";
            cin.ignore();
            cin.getline(nm,50);

            cin>>age;
        }
        void out()
        {
            cout<<"Name:"<<nm<<"\t Age:"<<age;
        }
        friend void Student::Elder(Person a);
};

void Student::Elder(Person a)
{
    cout<<"====Elder Details===="<<endl;

    if(age>a.age)
    {
        out();
    }
    else
    {
        a.out();
    }
};

int main()
{
    Person b;
    b.in();

    Student s1;
    s1.in();

    b.out();
    s1.out();

    s1.Elder(b);

    return 0;
}






// Swaping the private data of class using friend function

#include<iostream>
#include<string.h>
using namespace std;
class B;
class A
{
    private:
        int a1;
    public:
        void in()
        {
            cout<<"Enter the number:";
            cin>>a1;
        }
        void out()
        {
            cout<<"\n A:"<<a1;
        }
        friend void Swap(A &x,B &y);

};

class B
{
    private:
        int a2;
    public:
        void in()
        {
            cout<<"\n Enter the name:";
            cin>>a2;

        }
        void out()
        {
            cout<<"\n B:"<<a2;
        }
        friend void Swap(A &x,B &y);
};

void Swap(A &x,B &y)
{
    int tmp;
    
    tmp=x.a1;
    x.a1=y.a2;
    y.a2=tmp;
};

int main()
{
    A s1;
    B s2;

    s1.in();
    s2.in();

    cout<<endl<<"Before Swapping:\n";
    s1.out();
    s2.out();

    Swap(s1,s2);
    cout<<endl<<"After swapping:\n";
    s1.out();
    s2.out();

    return 0;

}




