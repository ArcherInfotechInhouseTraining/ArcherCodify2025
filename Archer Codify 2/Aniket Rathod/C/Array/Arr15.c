// WAP to input array of 10 nos and copy it as it is and in reverse manner in another arrays
/*  nos	
	 11      22      33      44      55      66      77      88      99      90

      x	
	 11      22      33      44      55      66      77      88      99      90

      y
	 90      99      88      77      66      55      44      33      22      11     */


#include <stdio.h>
int main()
{
	int nos[10],x[10],y[10],i,j;

	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&nos[i]);
	}

	// copy
	for(i=0;i<10;i++)
	{
		x[i]=nos[i];
	}
	// rev copy
	for(i=0,j=9;i<10;i++,j--)
	{
		y[i]=nos[j];	// y[i]=nos[9-i];
	}

	printf("\n Original array: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",nos[i]);
	}

	printf("\n Copied array: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",x[i]);
	}

	printf("\n Reverse Copied array: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",y[i]);
	}
	return 0;
}
