#include<stdio.h>
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
