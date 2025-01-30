#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swapAlternate(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1<size)
		{
		
		swap(arr[i],arr[i+1]);
	}
	}
}
int main()
{
	int even[]={5,4,6,8,10,9,7,3};
	int odd[]={9,5,7,6,1};
	swapAlternate(even,8);
	swapAlternate(odd,5);
	printArray(even,8);
	cout<<endl;
		printArray(odd,5);
	
}
