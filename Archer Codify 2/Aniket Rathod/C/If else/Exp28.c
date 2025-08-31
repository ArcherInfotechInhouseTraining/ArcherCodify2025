// if-else
// Write a C program to check whether a number is even or odd.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
    printf("\n Enter a Number: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("\n Number is Even");
    }
         
    else
    {
        printf("\n Number is Odd");
    }
    
    return 0;
}