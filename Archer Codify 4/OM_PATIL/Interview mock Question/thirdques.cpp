#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int d;
    cout<<endl<<"Enter the value of d:";
    cin>>d;
    int tmp[d];

    //display original array.
    for(int i=0;i<7;i++)
    {
        cout<<"\t"<<arr[i];
    }
    
    //set tmp;
    for(int i=0;i<d;i++)
    {
        tmp[i]=arr[i];
    }

    //form d+ position placed elements.
    for(int i=0;i<7;i++)
    {
        arr[i]=arr[i+d];
    }

    int j=0;
    for(int i=7-d;i<7;i++)
    {
        //arr[i]=tmp[i-(7-d)];    //also satisfy this condition too.
        arr[i]=tmp[j];
        j++;
    }

    cout<<endl<<"result:";
    for(int i=0;i<7;i++)
    {
        cout<<"\t"<<arr[i];
    }
}


// ===============  done  ============================ //