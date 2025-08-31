/*
User-Defined
I] simple function (function without argument without return type)
*/

#include <stdio.h>
#include <stdlib.h>

void add();
int main()
{
	add();
	add();
	add();
	return 0;
}

void add()
{
	int a,b,tot=0;

	printf("\n Enter any two nos: \n");
	scanf("%d %d",&a,&b);

	tot=a+b;

	printf("\n Addition is %d \n",tot);
}
