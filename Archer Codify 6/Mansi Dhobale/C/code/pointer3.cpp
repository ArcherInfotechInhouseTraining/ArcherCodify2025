int main()
{
	int *p, cnt, tmp;
	printf("\n Enter the count: ");
	scanf("%d",&cnt);

	p=(int*)malloc(cnt*sizeof(int));

	printf("\n Enter %d nos: ",cnt);
	for(int i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("\n Before sort: ");
	for(i=0;i<cnt;i++)
	{
		printf("%6d",*(p+i));
	}

	// sorting
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(*(p+i)>*(p+j))
			{
				tmp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=tmp;
			}
		}
	}
	printf("\n After sort: ");
	for(i=0;i<cnt;i++)
	{
		printf("%6d",*(p+i));
	}
	return 0;
} 
