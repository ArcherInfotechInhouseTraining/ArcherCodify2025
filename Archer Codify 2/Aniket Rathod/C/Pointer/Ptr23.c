// 2D array access using pointer notation
// Method - 3:

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[3][4];
	int i,j;
    	int (*p)[4];
    	p=x;
	printf("\n Enter the array of 3x4: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("\n array of 3x4: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",*(*(p+i)+j));
		}
		printf("\n");
	}
}