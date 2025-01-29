//Write a C program to calculate product of digits of a number.


#include<stdio.h>
void main()
{
    int no,mul=1,rem;

    printf("Enter Digit\n");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        mul=mul*rem;
    }
    printf("Product of digit of a number is : %d",mul);
}
