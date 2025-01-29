// Now we know that in case of array,

#include <stdio.h>
int main()
{
	int x[5]={12,67,9,765,34};
    int i;

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%7d",x[i]);
	}

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%u",x+i);
	}
	return 0;
}

