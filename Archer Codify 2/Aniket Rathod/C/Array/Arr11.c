// Enter the 5 nos and count the palindrome nos from it.

int main()
{
	int ar[5],i,cnt=0,no,rev;

	printf("\n Enter any 5 nos: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);
	}

	for(i=0;i<5;i++)
	{
		no=ar[i];
		rev=0;
		while(no!=0)
		{
			rev=(rev*10)+(no%10);
			no=no/10;
		}
		if(rev==ar[i])
		{
			cnt++;
		}
	}

	printf("\n Array Elements: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",ar[i]);
	}
	printf("\n Palindrome Count: %d",cnt);
	return 0;
}
