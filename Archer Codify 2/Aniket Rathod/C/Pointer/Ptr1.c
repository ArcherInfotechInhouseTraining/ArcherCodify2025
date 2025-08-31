// WAP to input percentage of marks of 10 students in HSC and display it.
#include<stdio.h>
#include<conio.h>

int main()
{
	float mrk[5];
	int i;

	printf("\n Enter the percentage of 10 students: ");
	for(i=0;i<5;i++)
	{
		scanf("%f",&mrk[i]);
	}

	printf("\n List \n");
	for(i=0;i<5;i++)
	{
		printf("\n student %d - %0.2f",i+1,mrk[i]);
	}
	return 0;
}
