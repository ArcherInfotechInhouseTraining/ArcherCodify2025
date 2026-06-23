// Conditional Operators
// Write a C program to find maximum between two numbers using conditional operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2;
    
    printf("\n Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    
    (num1>num2) ? printf("\n num1 is greater: %d",num1) : printf("\n num1 is greater: %d",num2);
    
    return 0;
}