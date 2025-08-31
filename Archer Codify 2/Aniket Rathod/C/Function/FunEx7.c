// Recursion: calling function from itself.
// find factorial

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int no,ans;
	
	printf("\n Enter any number: \n");
	scanf("%d",&no);
	ans=fact(no);
	printf("\n Factorial is %d\n",ans);

	return 0;
}
int fact(int n)
{
	if(n==1)
	  return 1;
	else
	  return (n*fact(n-1));
}