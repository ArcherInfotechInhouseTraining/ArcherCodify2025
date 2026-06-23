#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int x=10;

	int *p;
	p=&x;

	printf("\n value of x=%d",x);
	printf("\n Address of x=%u",&x);

	printf("\n value of p=%u",p);
	return 0;
}
