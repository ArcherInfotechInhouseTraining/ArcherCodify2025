// WAP to input percentage of marks of N students in HSC and display it.

#include<stdio.h>
#include<conio.h>

int main()
{
	float mrk[100];
	int i,cnt;
	
	printf("\n Enter the student count: ");
	scanf("%d",&cnt);

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
