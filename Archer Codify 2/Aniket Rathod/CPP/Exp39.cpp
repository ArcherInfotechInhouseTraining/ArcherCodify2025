// Single inheritance: (public - called all methods from main() )

#include<iostream>
#include<string.h>
using namespace std;

class person
{
    int uid;
    char name[30];
    public:
    void input()
    {
        cout<<endl<<"Enter the ID: ";
        cin>>uid;
        cout<<endl<<"Enter the name: ";
        cin>>name;
    }

    void output()
    {
        cout<<endl<<"ID is: "<<uid<<"\t Name is: "<<name;
    }
};

class employee:public person
{
    float sal;
    public:
    void set()
    {
        cout<<endl<<"Enter the salary: ";
        cin>>sal;
    }

    void show()
    {
        cout<<endl<<"Salary is: "<<sal;
    }
};

int main()
{
    cout<<endl<<"______________________"<<ends;
    person p;
    p.input();
    p.output();

    cout<<endl<<"_______________________"<<endl;
    employee e;
    e.set();
    e.show();

    return 0;
}