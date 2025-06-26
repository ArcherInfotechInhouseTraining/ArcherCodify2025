// if-else
// Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
    printf("\n Enter a Number: ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("\n Number is Negative");
    }
    
    else if(num>0)
    {
        printf("\n Number is Positive");
    }
    
    else
    {
        printf("\n Number is 0");
    }
    
    return 0;
}