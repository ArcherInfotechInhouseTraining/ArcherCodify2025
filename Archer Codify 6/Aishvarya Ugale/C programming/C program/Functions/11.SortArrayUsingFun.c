// WAP to sort the array using function

void output(int y[]);
void input(int t[]);
void sort(int[]);
int main()
{
	int x[5];
	int i;

	input(x);
	printf("\n Before sort: ");
	output(x);

	sort(x);

	printf("\n After sort: ");
	output(x);

	return 0;
}
void sort(int y[])
{
	int i,j,tmp;
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(y[i]>y[j])
			{
				tmp=y[i];
				y[i]=y[j];
				y[j]=tmp;
			}
		}
	}
}
void output(int y[])
{
	int i;
	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",y[i]);
	}
}
void input(int t[])
{
	int i;
	printf("\n enter Array of 5 elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&t[i]);
	}
}
