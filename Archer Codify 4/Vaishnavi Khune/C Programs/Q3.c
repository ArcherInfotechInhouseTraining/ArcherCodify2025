#include<stdio.h>

int main()
{
	int arr[10]={11,22,33,44,55,66,77,88,99,110};	
	int rot;
	int i;
	printf("Enter the rotations:");
	scanf("%d",&rot);
	
	printf("Array: ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		arr[i]=arr[i+rot];
	}
	
	printf("\nUpdated Array: ");
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	return 0;
}
