// Single inheritance: (private - called inherited methods only from the child methods  )

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

class employee:private person
{
    float sal;
    public:
    void set()
    {
        input();
        cout<<endl<<"Enter the salary: ";
        cin>>sal;
    }

    void show()
    {
        output();
        cout<<endl<<"Salary is: "<<sal;
    }
};

int main()
{
    cout<<endl<<"_______________________"<<endl;
    employee e;
    e.set();
    e.show();
    cout<<endl<<"_______________________"<<endl;
    return 0;
}