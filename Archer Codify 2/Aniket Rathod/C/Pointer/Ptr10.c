// input and display

#include <stdio.h>
int main()
{
	int x[5],i;

	printf("\n enter elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",(x+i));
	}

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%7d",*(x+i));
	}
	return 0;
}
