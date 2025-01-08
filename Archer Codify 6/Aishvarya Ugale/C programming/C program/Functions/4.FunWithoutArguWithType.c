      //III] function without argument with return type


int add();
int main()
{
	int t;
	t=add();
	printf("\n Addition is %d",t);
	return 0;
}

int add()
{
	int a,b,tot=0;
	printf("\n Enter any two nos: ");
	scanf("%d %d",&a,&b);
	tot=a+b;
	return tot;
}
