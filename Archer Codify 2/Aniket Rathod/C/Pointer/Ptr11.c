// input and display - using pointer

#include <stdio.h>
int main()
{
	int x[5],i;
	int *p;

	p=x;
	printf("\n enter elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%7d",*(p+i));
	}
	return 0;
}
