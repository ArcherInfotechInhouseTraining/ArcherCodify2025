#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character :"<<ch;
    cin>>ch;
    if (ch>96 && ch<123)
    {
        cout<<ch <<"is a lowercase";
    }
   else if (ch>64 && ch<91)
    {
        cout<<ch <<"is a uppercasecase";
    }
    /*if (ch>47 && ch<58)
    {
        cout<<ch<<"is a numeric";
    }*/
    else
    {
        cout<<ch <<"Is numeric";
    }
}