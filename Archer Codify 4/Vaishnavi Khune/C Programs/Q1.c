#include<stdio.h>

int main()
{
	int arr[10]={33,22,66,11,88,44,77,110,55,99};
	int i;
	int pos,pos1,pos2;
	int ans;
	
	printf("Array: ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	printf("\nEnter the position of a number: ");
	scanf("%d",&pos);
	i=1;
	pos1=pos;
	pos2=pos;			
	while(i<10)
	{
		pos1--;
		pos2++;
		if(pos1>=0 && arr[pos1]>arr[pos])
		{
			if(pos2<10 && arr[pos2]>arr[pos])
			{
				if(arr[pos1]>arr[pos2])
				{
					ans=pos1;
					break;
				}
				else
				{
					ans=pos2;
					break;
				}
			}
			else
			{
				ans=pos1;
				break;
			}
		}
		else if(arr[pos2]>arr[pos])
		{
			ans=pos2;
			break;
		}
	
	}
	printf("Nearest larger number is: %d",arr[ans]);
	return 0;
}
