#include<iostream>
using namespace std;
int main()
{
    enum Color { RED=7, GREEN=20, BLUE};
   // enum Ink {BLACK, PINK, YELLOW, RED}; //error: 'RED' conflicts with a previous declaration|
     enum Ink {BLACK, PINK, YELLOW};
    cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE;
    cout<<endl<<" Colors:"<<Color::RED<<"\t"<<Color::GREEN<<"\t"<<Color::BLUE;

    cout<<endl<<" INK:"<<BLACK<<"\t"<<PINK<<"\t"<<BLUE; // Take the value from 1st enum

    return 0;
}
