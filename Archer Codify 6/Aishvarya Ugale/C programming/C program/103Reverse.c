//Write a C program to enter a number and print its reverse

#include<stdio.h>
void main()
{
    int no,rev=0,rem;

    printf("Enter Number:\n");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;
    }
    printf("Reverse Number is :%d",rev);
}
