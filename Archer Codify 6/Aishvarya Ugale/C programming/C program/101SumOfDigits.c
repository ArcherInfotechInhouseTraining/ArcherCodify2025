//Write a C program to calculate sum of digits of a number

#include<stdio.h>
void main()
{
    int no,sum=0,rem;


    printf("Enter Number\n");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        sum=sum+rem;
    }

    printf("Sum Of Digit is : %d",sum);
}
