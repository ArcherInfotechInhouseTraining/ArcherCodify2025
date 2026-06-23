// passing array as member to function

void incr100(int y[5]);
int main()
{
	int x[]={11,22,33,44,55};
	int i;

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",x[i]);
	}

	incr100(x);

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",x[i]);
	}

	return 0;
}
void incr100(int y[5])
{
	int i;
	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		y[i]=y[i]+100;
	}
}
