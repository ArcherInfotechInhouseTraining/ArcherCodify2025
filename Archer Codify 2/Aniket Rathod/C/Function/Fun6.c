/*
User-Defined
IV] function with argument with return type	
*/

#include<stdio.h>
#include<stdlib.h>

int add(int,int);
int main()
{
	int a,b,t;
	printf("\n Enter any two nos: \n");
	scanf("%d %d",&a,&b);
	t=add(a,b); 
	
	printf("\n Addition is %d\n",t);
	return 0;
}

int add(int x, int y) 
{
	int tot=0;
	tot=x+y;
	return tot;
}
