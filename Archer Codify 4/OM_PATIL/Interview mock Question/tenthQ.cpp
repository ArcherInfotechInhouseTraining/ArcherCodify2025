#include<iostream>
using namespace std;

int main()
{
    string str="(he{llo g[]uys ,() its ne}w y)ea]r";
    cout<<endl<<"The original string is:"<<endl;

    //Display the original.
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    string newstr="";

    //operation
    cout<<endl<<"Result:"<<endl;
    for(int j=0;str[j]!='\0';j++)
    {
        if(str[j]!='{' && str[j]!='}' && str[j]!='[' && str[j]!=']' && str[j]!='(' && str[j]!=')')
        {
            newstr=newstr+str[j];
        }
    }

    //output display
    cout<<newstr;
    
}