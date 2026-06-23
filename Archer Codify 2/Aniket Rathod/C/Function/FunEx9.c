// palindrome check using function

#include <stdio.h>
#include <stdlib.h>

int findreverse(int);
char ispalindrome(int,int);
int main()
{
	int no,r;
	char ch;
	printf("\n Enter the number: ");
	scanf("%d",&no);

	r=findreverse(no);
	printf("\n Reverse of %d is %d",no,r);

	ch=ispalindrome( findreverse(no), no);
	if(ch=='y')
        printf("\n Palindrome Number");
    else
        printf("\n Not a Palindrome Number");

    return 0;
}
char ispalindrome(int n1,int n2)
{
    if(n1==n2)
        return 'y';
    else
        return 'n';
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
