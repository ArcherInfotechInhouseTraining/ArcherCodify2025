#include<iostream>
using namespace std;

int main()
{
    char s[]="hi om welcome to BarKlays";
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=32 && s[i-1]==32)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }

    if(s[0]!=32 && (s[0]>=97 && s[0]<=122))
    {
        s[0]=s[0]-32;
    }
    cout<<"---RESULT----";
    cout<<endl<<s;

}