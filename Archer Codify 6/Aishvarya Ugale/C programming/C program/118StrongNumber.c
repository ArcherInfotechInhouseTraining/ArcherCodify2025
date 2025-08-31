//Write a C program to check whether a number is Strong number or not.

#include<stdio.h>

void main()
{
    int no,rem,mul=1,sum=0,temp,i;

    printf("Enter Number\n");
    scanf("%d",&no);
        temp=no;
    for(; no!=0; no=no/10)
    {
        rem=no%10;
         mul=1;

        for(i=1;rem>=i;i++)
        {
            mul=mul*i;
        }

        sum=sum+mul;

    }
    if(temp == sum)
    {
        printf("Number is a strong number !!!\n");
    }
    else{
         printf("Number is Not a strong number !!!\n");
    }
}
