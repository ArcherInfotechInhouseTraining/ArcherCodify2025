#include<iostream>
#include<conio.h>
using namespace std;
void selectionSort(int arr[],int n)
{


    int i,j,minn,temp;
    for(i=0;i<n-1;i++)
    { 
        minn=i;
        for(j=i+1;j<n;j++)
    {

    if(arr[j]<arr[minn])
    minn=j;

    }
    if(minn!=i)
    {
      /*swap(arr[minn],arr[i]);*/
     temp=arr[minn];
     arr[minn]=arr[i];
     arr[i]=temp;
    }
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<"";
        cout<< endl;

    }
    
}
    int main()
{
    int arr[]={1,64,25,22,9,5};
    int n=6;
    selectionSort(arr,n);
    return 0;
}

