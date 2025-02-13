// WAP using 2D array to store the PCM  marks of 3 students and display marks with total and percentage.


#include<stdio.h>
int main()
{
	int marks[3][4],i,j,tot;

	printf("\n Enter the marks obtained by 3 students in PCM: ");
	for(i=0;i<3;i++)
	{
		tot=0;
		printf("\n Student %d: ",i+1);
		for(j=0;j<3;j++)
		{
			printf("\n Subject %d: ",j+1);
			scanf("%d",&marks[i][j]);
			tot=tot+marks[i][j];
		}
		marks[i][j]=tot;
	}
	printf("\n Student Details \n");
	for(i=0;i<3;i++)
	{
		printf("\n Student %d: ",i+1);
		for(j=0;j<3;j++)
		{
			printf("%5d",marks[i][j]);
		}
		printf("\t PCM Total: %d \t Percentage: %0.2f",marks[i][j],marks[i][j]/3.0);
	}
	return 0;
}
