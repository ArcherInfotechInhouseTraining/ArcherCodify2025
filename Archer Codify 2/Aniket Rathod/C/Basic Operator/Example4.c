/* Enter any 5 digit number and display the addition of all 5 digits. */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,rem,sum=0;

    printf("\n Enter any 4 digit no: ");
    scanf("%d",&a);

    rem=a%10;
    sum=sum+rem;
    a=a/10;

    rem=a%10;
    sum=sum+rem;
    a=a/10;

    rem=a%10;
    sum=sum+rem;
    a=a/10;

	rem=a%10;
    sum=sum+rem;
    a=a/10;
    
    printf("\n Addition of all digits: %d",sum);
    return 0;
}


