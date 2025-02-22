// Multi-level Inheritance: one to one relationship, more than two layers

#include<iostream>
#include<string.h>
using namespace std;

class Vehical
{
    char type[30];
    int no;

    public:

    void start()
    {
        cout<<endl<<"Enter the type of vehical: ";
        cin>>type;
        cout<<endl<<"Enter the no of vehical: ";
        cin>>no;
    }

    void end()
    {
        cout<<endl<<"Type is: "<<type<<"\t NO is: "<<no;
    }
};

class Train:public Vehical
{
    char name[30];

    public: 

    void roger()
    {
        start();
        cout<<endl<<"Enter the Name: ";
        cin>>name;
    }

    void copythat()
    {
        end();
        cout<<endl<<"Name of Train: "<<name;
    }
};

class Ticket:private Train
{
    char pnm[30];
    int inr;

    public:

    void setTicket()
    {
        
    }
};