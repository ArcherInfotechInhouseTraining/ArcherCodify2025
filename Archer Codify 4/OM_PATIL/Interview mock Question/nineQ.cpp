#include<iostream>

using namespace std;
int main()
{
    char ch[50];
    cout<<"Enter the string:";
    cin.getline(ch,50);

    for(int i=0;ch[i]!='\0';i++)
    {
        for(int j=i+1;ch[i]!='\0';j++)
        {
            if(ch[i]!=32 && ch[i]==' ')
            {
                if(ch[i]==ch[j])
                {
                    cout<<endl<<"Isogram";
                }
                else
                {
                    cout<<endl<<"not iosgram";
                }
            }
        }
        cout<<ch;
    }
    return 0;
}