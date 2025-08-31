// WAP to input and display the HSC percentage of N students.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *ptr;
	int i,cnt;

	printf("\n Enter the student count: ");
	scanf("%d",&cnt);

	ptr=(float*)malloc(cnt*sizeof(float));
	printf("\n Enter the marks of %d students: ",cnt);
	for(i=0;i<cnt;i++)
	{
		printf("student %d: ",i+1);
		scanf("%f",(ptr+i));
	}

	printf("\n student list \n");
	for(i=0;i<cnt;i++)
	{
		printf("\n student %d - %0.2f",i+1,*(ptr+i));
	}
	return 0;
}
