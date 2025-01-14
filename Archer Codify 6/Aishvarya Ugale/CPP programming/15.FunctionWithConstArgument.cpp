/* Function with const argument

	we can use const as a qualifier to the formal arguments, so when it is decl. as a constant we can
	access it, but it is not allowed to change it. generally it is used to when the members are passed
	by reference.*/

#include<iostream>
using namespace std;
int countpalindromes(const int y[])  // try run without const and use y[i] in while rather than no
{
    int no,rev,cnt=0;
    for(int i=0;i<5;i++)
    {
        no=y[i];
        rev=0;
        while(no!=0)
        {
            rev=(rev*10)+(no%10);
            no=no/10;
        }
        if(y[i]==rev)
        {
            cnt++;
        }
    }
    return cnt;
}
int countodds(int y[])
{
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        if(y[i]%2!=0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int x[]={11,22,3763,44,55};

    cout<<endl<<"Array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<"   "<<x[i];
    }
    int pnc=countpalindromes(x);
    cout<<endl<<"Palindrome number Count: "<<pnc;

    int ec=countodds(x);
    cout<<endl<<"Even Count: "<<ec;

    return 0;
}
