// using scoped
#include<iostream>
using namespace std;
int main()
{
    enum class Color {RED=7, GREEN=20, BLUE};
    enum class Ink {BLACK, PINK, YELLOW, RED};

   // cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE; //error: 'RED' was not declared in this scope|
    cout<<endl<<" Colors:"<<(int)Color::RED<<"\t"<<(int)Color::GREEN<<"\t"<<(int)Color::BLUE;

    cout<<endl<<" INK:"<<(int)Ink::BLACK<<"\t"<<(int)Ink::PINK<<"\t"<<(int)Ink::RED;

    return 0;
}
