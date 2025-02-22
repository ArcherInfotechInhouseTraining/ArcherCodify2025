// Enter two arrays of 3x3 and find the multi. of two matrix

#include<stdio.h>
int main()
{
	int x[3][3], y[3][3], z[3][3];
	int i,j,k;

	printf("\n Enter the first matrix of 3x3: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			scanf("%d",&x[i][j]);
		}
	}

	printf("\n Enter the second matrix of 3x3: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			scanf("%d",&y[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			z[i][j]=0;
			for(k=0;k<3;k++)		
			{
				z[i][j] = z[i][j] + (x[i][k] * y[k][j]);
			}
		}
	}

	printf("\n First Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("%5d",x[i][j]);
		}
		printf("\n");
	}

	printf("\n Second Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("%5d",y[i][j]);
		}
		printf("\n");
	}

	printf("\n Third Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("%5d",z[i][j]);
		}
		printf("\n");
	}
	return 0;
}
