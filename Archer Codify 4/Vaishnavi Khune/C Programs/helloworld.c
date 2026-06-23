#include<stdio.h>

int main()
{
	int arr[10]={12,23,43,16,48,83,32,38,62,11};
	int pos;
	int ans=10;
	
	printf("Enter the position of a number: ");
	scanf("%d",&pos);
	
	int i=1;
	for(i=1;i<9;i++)
	{
		if(arr[pos]<arr[pos-i])
		{
			if(arr[pos]<arr[pos+i])
			{
				if(arr[pos-i]<arr[pos+i])
				{
					ans=pos+i;
					break;
				}
				else
				{
					ans=pos-i;
					break;
				}
			}
			else
			{
				ans=pos-i;
			}
		}
		else if(arr[pos]<arr[pos+i])
		{
			ans=pos+i;
			break;
		}
		i++;
	}
	if(ans==10)
	{
		printf("Number %d  at position %d is a largest number ",arr[pos],pos);
		
	}
	else
	{
		printf("Nearest larger number is: %d",arr[ans]);
	}
	return 0;
}
