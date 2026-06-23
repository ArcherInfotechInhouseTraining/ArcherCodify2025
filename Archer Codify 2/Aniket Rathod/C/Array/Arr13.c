// input 5 nos, WAP to find smallest numbers position in an array

int main()
{
	int x[5], i, min, pos;

	printf("\n Enter the 12 nos: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}

	pos=0;
	min=x[0];
	for(i=1;i<5;i++)
	{
		if(x[i]<min)
		{
			min=x[i];
			pos=i;
		}
	}
	
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%5d",x[i]);
	}
	printf("\n smallest element %d present at %d position",min,pos);

	return 0;
}
