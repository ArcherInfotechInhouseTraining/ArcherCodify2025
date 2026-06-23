#include<iostream>
using namespace std;

class Person
{
    private:
        char nm[50];
    public:
        void in()
        {
            cout<<"Enter the name:";
            cin>>nm;
        }
        void out()
        {
            cout<<endl<<"Name:"<<nm;
        }

};

class Student:virtual public Person
{
    private:
        int age;
    public:
        void input()
        {
            cout<<endl<<"Enter the age:";
            cin>>age;
        }
        void output()
        {
            cout<<endl<<"Age:"<<age;
        }
};

class Sport:virtual public Person
{
    private:
        char spnm[50];
    public:
        void indata()
        {
            cout<<endl<<"Enter the sport name:";
            cin>>spnm;
        }
        void outdata()
        {
            cout<<endl<<"Sport:"<<spnm;
        }
};

class Result:public Sport,public Student
{
    private:
        int m;
        bool s;
    public:
        void setdata()
        {
            cout<<endl<<"Enter the marks scored: ";
            cin>>m;
        }
        void getdata()
        {
            cout<<endl<<"Result is:";
            if(m>35)
            {
                cout<<endl<<"--Pass--";
            }
            else
            {
                cout<<endl<<"--Fail--";
            }
        }

};

int main()
{
    Result ob;
    ob.in();
    ob.out();

    ob.input();
    ob.output();

    ob.indata();
    ob.outdata();

    ob.setdata();
    ob.getdata();

    return 0;
}