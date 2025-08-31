#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[6]={10,3,9,5,8,7};
	int brr[5]={8,6,2,12,13};
	reverse(arr,6);
	reverse(brr,5);
   // cout<<"Reverse array is:"<< printArray(arr,6)<< endl;
	//cout<<"Reverse array is:"<< printArray(brr,5)<< endl;
	printArray(arr,6);
	printArray(brr,5);
}
