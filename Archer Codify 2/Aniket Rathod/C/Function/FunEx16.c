// array input and display using function

#include<stdio.h>
#include<stdlib.h>

void output(int y[]);
void input(int t[]);
int main()
{
	int x[5];
	int i;

	input(x);

	output(x);
	
	return 0;
}

void input(int t[])
{
	int i;
	printf("\n enter Array of 5 elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&t[i]);
	}
}

void output(int y[])
{
	int i;
	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",y[i]);
	}
}
