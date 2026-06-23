/* Enter any 3 digit number and reverse it. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,rem,rev=0;

    printf("\n Enter any 4 digit no: ");
    scanf("%d",&a);

    rem=a%10;
    rev=(rev*10)+rem;
    a=a/10;

    rem=a%10;
    rev=(rev*10)+rem;
    a=a/10;

    rem=a%10;
    rev=(rev*10)+rem;
    a=a/10;

	rem=a%10;
    rev=(rev*10)+rem;
    a=a/10;
    
    printf("\n Reverse of all digits: %d",rev);
    return 0;
}
