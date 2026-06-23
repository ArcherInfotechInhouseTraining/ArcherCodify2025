/*
User-Defined
III] function without argument with return type
*/

#include<stdio.h>
#include<stdlib.h>

int add();
int main()
{
	int t;
	t=add(); 	
	printf("\n Addition is %d\n",t);
	return 0;
}

int add() 
{
	int a,b,tot=0;
	printf("\n Enter any two nos: \n");
	scanf("%d %d",&a,&b);
	tot=a+b;
	return tot;
}
