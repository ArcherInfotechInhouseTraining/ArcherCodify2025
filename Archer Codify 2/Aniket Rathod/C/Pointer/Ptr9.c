// we can access the elements using different ways as,

#include <stdio.h>
int main()
{
	int x[5]={12,67,9,765,34};
    	int i;
    	int *p;

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%7d",x[i]);
	}

	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t %u",*(x+i));
	}

	p=x; /// or p=&x[0];
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t %u",*(p+i));
	}

	p=x; /// or p=&x[0];
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t %u",*p);
        	p++;
	}
	p=x; /// or p=&x[0];
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t %u",p[i]);
	}
	return 0;
}
