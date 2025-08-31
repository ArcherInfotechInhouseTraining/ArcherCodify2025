//Write a C program to find maximum between two numbers using conditional
//operator

#include<stdio.h>

void main()
{

    int a,b;

    printf("Enter 1st or second no:\n");
    scanf("%d%d",&a,&b);

    (a>b)? printf("1st no is max:%d",a) : printf("Second no is max:%d",b);

}
