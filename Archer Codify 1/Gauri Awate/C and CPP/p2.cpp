#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i,j,count=1;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            //cout<<j;
            cout<<count<<" ";
            count++;

        }
        cout<<endl;
    }
}