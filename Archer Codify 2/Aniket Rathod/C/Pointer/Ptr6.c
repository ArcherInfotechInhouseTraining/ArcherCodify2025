// access the value of x using p

#include <stdio.h>

int main()
{
	int x=10;

	int *p;	// integer pointer (pointer to integer)
	p=&x;

	printf("\n value of x=%d",x);
	printf("\n Address of x=%u",&x);

	printf("\n value of p=%u",p);
	printf("\n value of x using p=%d",*p);


	return 0;
}

