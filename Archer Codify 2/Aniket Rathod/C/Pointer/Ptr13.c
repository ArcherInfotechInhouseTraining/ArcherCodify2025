// Enter N Number and find the avg of it.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,cnt,tot=0;
	float avg;
	int *p;
	
	printf("\n Enter the element count: ");
	scanf("%d",&cnt);
	
	p=(int*)malloc(cnt*sizeof(int));

	printf("\n Enter the %d nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<cnt;i++)
	{
		tot = tot + *(p+i);
	}	
	avg=(float)tot/cnt;
	printf("\n Total: %d",tot);
	printf("\n Avg: %0.2f",avg);

	return 0;
}
