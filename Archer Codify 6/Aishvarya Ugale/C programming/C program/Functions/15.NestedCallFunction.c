
	// Nested call to function

int findmax(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int x,y,z,ans;

	printf("\n Enter any 3 nos: ");
	scanf("%d %d %d",&x,&y,&z);

	ans=findmax(x,y);
	printf("\n Max from 2 nos: %d",ans);

	ans=findmax( findmax(x,y) , z );
	printf("\n Max from 3 nos: %d",ans);

	return 0;
}
