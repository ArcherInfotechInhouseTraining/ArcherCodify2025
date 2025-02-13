// Lets see about the size of pointer variable

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char *ch;
	int *var;
	float *ft;
	double *dptr;

	printf("\n size of character pointer: %d",sizeof(ch));
	printf("\n size of integer pointer: %d",sizeof(var));
	printf("\n size of float pointer: %d",sizeof(ft));
	printf("\n size of double pointer: %d",sizeof(dptr));

	return 0;
}
