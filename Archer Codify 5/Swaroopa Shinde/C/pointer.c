/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int (*p)[5];
	int i,j,sc;

	printf("\n Enter the student count: ");
	scanf("%d",&sc);

	p=(int(*)[])malloc(sc*5*sizeof(int));

	printf("\n Enter the details of %d students \n",sc);
	for(i=0;i<sc;i++)
	{
		printf("\n Student %d: ",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("\n Details of %d students \n",sc);
	for(i=0;i<sc;i++)
	{
		printf("\n Student %d: ",i+1);
		for(j=0;j<5;j++)
		{
			printf("%7d",*(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;
}
*/

//=================================================================================================
// 2D array access using pointer notation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[3][4];
	int i,j;

	printf("\n Enter the array of 3x4: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}

	printf("\n array of 3x4: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",x[i][j]);
		}
		printf("\n");
	}
}


//==========================================================================================================
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **p, *sub;
	int i,j,sc;

	printf("\n Enter student count: ");
	scanf("%d",&sc);

	p=(int**)malloc(sc*sizeof(int*));
	sub=(int*)malloc(sc*sizeof(int));

	printf("\n Enter the details of %d students\n",sc);
	for(i=0;i<sc;i++)
	{
		printf("\n student %d: ",i+1);
		printf("\n Enter the subject count: ");
		scanf("%d",(sub+i));

		*(p+i)=(int*)malloc(*(sub+i)*sizeof(int));

		printf("\n Enter the marks of %d subjects\n",*(sub+i));
		for(j=0;j<*(sub+i);j++)
		{
			printf("\n sub %d: ",j+1);
			scanf("%d",*(p+i)+j);
		}
	}

	printf("\n Details of %d students \n",sc);
	for(i=0;i<sc;i++)
	{
		printf("\n Student %d: ",i+1);
		for(j=0;j<*(sub+i);j++)
		{
			printf("%7d",*(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;
}
*/

//======================================================================================================

