/*
#include<iostream>
using namespace std;

int main()
{
    char ch[50];
    cout<<"Enter the string:";
    cin.getline(ch,50);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=32 && ch[i-1]==32)
        {
            if(ch[i]>=97 && ch[i]<=122)
            {
                ch[i]=ch[i]-32;
            }
        }
    }
    for(int i=1;ch[i]!=0;i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=32;
        }
    } 
    if(ch[0]!=32 &&(ch[0]>=97 && ch[0]<=122))
    {
        ch[0]=ch[0]-32;
    }


    cout<<endl<<ch;

}

*/

#include<iostream>
using namespace std;

int main()
{
    string ch;
    cout<<"Enter the string:";
    getline(cin,ch);
    
    string newStr = "";

    if(ch[0]>=97 && ch[0]<=122)
    {
        ch[0]=ch[0]-32;
        newStr += ch[0];
    }

    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' ' && ch[i-1]==' ' && ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
            newStr += ch[i];
        }
    }

    //acronym string
    cout<<endl<<newStr;
    cout<<endl<<ch;

}


