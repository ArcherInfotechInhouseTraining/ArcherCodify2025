// Enter any 10 nos and find 1st and second max.

int main()
{
	int x[10],i,fmax,smax;

	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}

	fmax=x[0];
	smax=x[1];
	for(i=1;i<10;i++)	
	{
		if(x[i]>=fmax)
		{
			smax=fmax;
			fmax=x[i];
		}
		else if(x[i]>smax)
		{
			smax=x[i];
		}
	}

	printf("\n Array elements: ");
	for(i=0;i<10;i++)
	{
		printf("%5d",x[i]);
	}
	printf("\n fmax: %d \t smax: %d",fmax,smax);
	return 0;
}
