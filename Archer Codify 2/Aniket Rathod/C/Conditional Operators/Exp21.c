// Conditional Operators
// Write a C program to check whether a number is even or odd using conditional operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int m;
    
    printf("\n Enter a number: ");
    scanf("%d",&m);
    
    (m%2==0) ? printf("\n No is even %d",m) : printf("\n No is odd %d",m);
    
    return 0;
}