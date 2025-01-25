// Create two different collection of integers having N and M elements and find intersection.


#include<stdio.h>
void main()
{
	int m,n,i,j;
	int *p,*q;

	printf("\n Enter the first count: ");
	scanf("%d",&m);
	p=(int*)malloc(m*sizeof(int));
	printf("\n Enter the %d elemets: ",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",(p+i));
	}

	printf("\n Enter the second count: ");
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
	printf("\n Enter the %d elemets: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(q+i));
	}

	printf("\n Intersection is: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)==*(q+j))
			{
				printf("%5d",*(p+i));
			}
		}
	}

}
