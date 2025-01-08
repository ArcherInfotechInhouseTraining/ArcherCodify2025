// pointer to function

void add(int a,int b)
{
	int ans;
	ans=a+b;
	printf("\n Addition is %d",ans);
}
void sub(int a,int b)
{
	int ans;
	ans=a-b;
	printf("\n subtraction is %d",ans);
}
void multi(int a,int b)
{
	int ans;
	ans=a*b;
	printf("\n multi is %d",ans);
}

int main()
{
	int x,y;

	printf("\n Enter the values of x and y: ");
	scanf("%d %d",&x,&y);

	void (*funptr)(int,int);

	funptr=&add;
	funptr(x,y);

	funptr=&sub;
	funptr(x,y);

	funptr=&multi;
	funptr(x,y);

	return 0;
}
