#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            //cout<<j;
            cout<<"*";

        }
        cout<<endl;
    }
}