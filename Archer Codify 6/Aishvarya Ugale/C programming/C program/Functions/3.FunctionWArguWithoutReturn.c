
			//II] function with argument without return type



    #include<stdio.h>
    void add(int,int);
    void main()
    {

	int a,b;
	printf("\n Enter any two nos: ");
	scanf("%d %d",&a,&b);
	add(a,b); // Actual arguments
	return 0;
}

void add(int x, int y) // formal arguments
{
	int tot=0;
	tot=x+y;
	printf("\n Addition is %d",tot);
}

