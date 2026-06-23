// Simple cout demo program with basic fomating

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<endl<<"Deadpool Said: "<<endl<<"Let's Dance";

    int x=10, y=20;
    float a=21.431;
    char r='R';

    cout<<"\n Value of X and Y is: "<<x<<setw(05)<<y;
    cout<<"\n Value of R is: "<<r<<setw(05)<<endl<<"\t Value of A: "<<setprecision(4)<<a;
    
    return 0;
}
