// WAP to input array of 10 nos and display it as it is and in reverse manner

//      nos	
//	 11      22      33      44      55      66      77      88      99      90

#include <stdio.h>
int main()
{
	int nos[10],i;

	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&nos[i]);
	}

	printf("\n All Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",nos[i]);
	}

	printf("\n Reverse-1: ");
	for(i=9;i>=0;i--)
	{
		printf("%8d",nos[i]);
	}

	printf("\n Reverse-2: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",nos[9-i]);
	}
	return 0;
}
