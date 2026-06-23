// passing array as member to function
/// use of static

#include<stdio.h>
#include<stdlib.h>

void add(int n)
{
	static int tot=0;
	tot=tot+n;
	printf("\n Total: %d",tot);
}
int main()
{
	int x[]={11,22,33,44,55};
	int i;

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		add(x[i]);
	}	
	return 0;
}
