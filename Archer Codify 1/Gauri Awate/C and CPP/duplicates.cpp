#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int findDuplicates(int arr[],int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans=ans^arr[i];
	}
	for(int i=1;i<size;i++)
	{
		ans=ans^i;
	}
	return ans;
}    
int main()
{
	int arr[]={5,6,8,9,7,6};
	findDuplicates(arr,6);
	printArray(arr,6);
}
