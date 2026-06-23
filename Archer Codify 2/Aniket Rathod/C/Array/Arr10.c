// Enter any 10 nos and display list of primes from it.
//	no
//	 [] [] [] [] [] [] [] [] [] []

#include <stdio.h>
int main()
{
	int nos[10],i,d,flg;

	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&nos[i]);
	}

	printf("\n All Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",nos[i]);
	}

	printf("\n Prime List: ");
	for(i=0;i<10;i++)
	{
		d=2;
		flg=0;
		while(d<=(nos[i]/2))
		{
			if(nos[i]%d==0)
			{
				flg=1;
				break;
			}
			d++;
		}
		if(flg==0)
		{
			printf("%5d",nos[i]);
		}
	}
	return 0;
}
