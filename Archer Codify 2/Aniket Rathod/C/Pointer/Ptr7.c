// access the value of x using p

#include <stdio.h>

int main()
{
	int x=10;

	int *p;	// integer pointer (pointer to integer)
	int **q; // pointer to pointer (pointer to integer pointer)
	int ***r;
	p=&x;

	printf("\n value of x=%d",x);
	printf("\n Address of x=%u",&x);

	printf("\n value of p=%u",p);
	printf("\n value of x using p=%d",*p);

	q=&p;
	printf("\n address of p: %u \t value of q: %u",&p,q);
	printf("\n Value of p using q: %u",*q);
	printf("\n Value of x using q: %d",**q);


	return 0;
}

