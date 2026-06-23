// Dynamic allocation using pointer and access using array notations.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	float *mrk;
	int i,cnt;
	
	printf("\n Enter the student count: ");
	scanf("%d",&cnt);

	mrk=(float*)malloc(cnt*sizeof(float));

	printf("\n Enter the percentage of %d students: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%f",&mrk[i]);
	}

	printf("\n List \n");
	for(i=0;i<cnt;i++)
	{
		printf("\n student %d - %0.2f",i+1,mrk[i]);
	}
	return 0;
}
