// returning the array from function

	// enter the array and copy only even numbers using function

#include <stdio.h>
#include <stdlib.h>
void output(int y[],int);
void input(int t[]);
int* copyevens(int x[]);
int ec=0;
int main()
{
	int x[5], *ar;
	input(x);
	ar=copyevens(x);

	printf("\n Entered array: ");
	output(x,5);
	printf("\n array of even nos: ");
	output(ar,ec);

	return 0;
}
int* copyevens(int x[])
{
	static int y[5];
	int i,j;
	for(i=0,j=0;i<5;i++)
	{
		if(x[i]%2==0)
		{
			y[j]=x[i];
			j++;
			ec++;
		}
	}
	return y;
}
void output(int y[],int cnt)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("%6d",y[i]);
	}
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
