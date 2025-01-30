// WAP to implement the single inheritance between classes, name, vehical, and car as well as Vehical & train;
// Take simple data members if each class, define appropriate ip op functions with same & display the output (vehicle car -> private)

#include<iostream>
#include<string.h>
using namespace std;

class Vehical
{
    int no;
    char type[30];

    public:

    void set()
    {
        cout<<endl<<"Enter the type of vehical: ";
        cin>>type;
        cout<<endl<<"Enter the vehicle number: ";
        cin>>no;
    }

    void show()
    {
        cout<<endl<<"Type: "<<type<<"\t Number: "<<no;
    }
};

class Car:private Vehical
{
    char color[40];
    int model_no;

    public:
    
    void in()
    {
        set();
        cout<<endl<<"Enter the color: ";
        cin>>color;
        cout<<endl<<"Enter the model no: ";
        cin>>model_no;
    }

    void out()
    {
        show();
        cout<<endl<<"Color: "<<color<<"\t Model No: "<<model_no;
    }
};

int main()
{
    Car one;
    one.in();
    one.out();

    return 0;
}