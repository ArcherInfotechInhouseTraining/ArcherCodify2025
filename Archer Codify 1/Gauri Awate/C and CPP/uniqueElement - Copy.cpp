//code studio for questions practice
	#include<iostream>
	using namespace std;
	int findUnique(int arr[],int size)
	{
		int ans=0;
		for(int i=0;i<size;i++)
		{
			ans = ans^arr[i];
		}
		return ans;
	}
	int main()
	{
		int arr[]={5,6,5,8,9,9,6};
		findUnique(arr,7);
	
		
		
	}
