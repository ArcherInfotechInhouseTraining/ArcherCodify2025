//  Write a C program to enter two numbers and find their sum.

#include<stdio.h>
#include<conio.h>

int main()
{
    float num1,num2,sum=0;
    
    printf("\n Enter 2 numbers: ");
    scanf("%f %f",&num1,&num2);
    
    sum=num1+num2;
    
    printf("\n Addition of Numbers are: %f",sum);
    
    return 0;
}