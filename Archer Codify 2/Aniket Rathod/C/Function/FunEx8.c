// write a program using function to reverse entered nuunber - int findreverse(int);

#include<stdio.h>
#include<stdlib.h>

int findreverse(int);
int main()
{
	int no,r;
	printf("\n Enter the number: ");
	scanf("%d",&no);

	r=findreverse(no);
	printf("\n Reverse of %d is %d",no,r);
}
int findreverse(int n)
{
	int rev=0;
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	return rev;	
}
