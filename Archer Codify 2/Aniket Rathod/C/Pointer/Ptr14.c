// Enter N Number and find the prime count.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,pcnt=0,ecnt,flg,d;
	float avg;
	int *p;

	printf("\n Enter the element count: ");
	scanf("%d",&ecnt);

	p=(int*)malloc(ecnt*sizeof(int));

	printf("\n Enter the %d nos: ",ecnt);
	for(i=0;i<ecnt;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<ecnt;i++)
	{
		flg=0;
		d=2;
		while(d<=(*(p+i)/2))
		{
			if(*(p+i)%d==0)
			{
				flg=1;
				break;
			}
			d++;
		}
		if(flg==0)
		{
			pcnt++;
		}
	}
	printf("\n Prime Count: %d",pcnt);
	return 0;
}