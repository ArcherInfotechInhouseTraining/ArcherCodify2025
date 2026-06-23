// Searching Techniques
//  linear Search: operated on any array

#include<stdio.h>
#define SIZE 10
int main()
{
	int x[SIZE],i,no,flg;

	printf("\n Enter the %d nos: ",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n Enter the number to be searched: ");
	scanf("%d",&no);

	flg=0;
	for(i=0;i<SIZE;i++)
	{
		if(x[i]==no)
		{
			flg=1;
			break;
		}
	}
	if(flg==0)
	{
		printf("\n %d is not present in an Array",no);
	}
	else
	{
		printf("\n %d is present at %d position",no,i);
	}
	return 0;
}

