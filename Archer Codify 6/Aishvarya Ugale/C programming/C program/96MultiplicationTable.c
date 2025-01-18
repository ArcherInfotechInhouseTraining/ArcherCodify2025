//Write a C program to print multiplication table of any number.

#include<stdio.h>

void main()
{
    int table,n,i;

    printf("Enter Number You Want to diplay table :\n");
    scanf("%d",&n);

    printf("Table of %d  is:\n",n);
    for(i=1;i<=10;i++)
    {
        table=i*n;
        printf("%d\n",table);
    }
}
