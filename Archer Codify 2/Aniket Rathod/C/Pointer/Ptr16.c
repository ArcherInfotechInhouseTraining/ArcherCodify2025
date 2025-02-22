// Array of pointer
// Enter the marks of 4 students and display them. note that every student may have different subject count

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ap[4];
	int sc[4],i,j;

	printf("\n Enter the details of 4 students \n");
	for(i=0;i<4;i++)
	{
		printf("\n For student %d \n",i+1);
		printf("enter the subject count: ");
		scanf("%d",&sc[i]);

		ap[i]=(int*)malloc(sc[i]*sizeof(int));

		printf("\n Enter the marks obtaind in %d subjects",sc[i]);
		for(j=0;j<sc[i];j++)
		{
			printf("\n Subject %d: ",j+1);
			scanf("%d",*(ap+i)+j);
		}		
	}

	printf("\n Student list with marks \n");
	for(i=0;i<4;i++)
	{
		printf("\n Student %d: ",i+1);
		for(j=0;j<sc[i];j++)
		{
			printf("%7d",*(*(ap+i)+j));
		}
	}
	return 0;
}
