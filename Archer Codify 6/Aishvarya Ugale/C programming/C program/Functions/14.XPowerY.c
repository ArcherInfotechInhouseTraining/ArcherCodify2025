// Write a program to implement x^y using function

int findpow(int a, int b)
{
	int c=1;
	while(b>0)
	{
		c=c*a;
		b--;
	}
	return c;
}
int main()
{
	int x,y,ans;

	printf("\n Enter the values of x and y: ");
	scanf("%d %d",&x,&y);

	ans=findpow(x,y);
	printf("\n %d^%d is %d",x,y,ans);

	return 0;
}
