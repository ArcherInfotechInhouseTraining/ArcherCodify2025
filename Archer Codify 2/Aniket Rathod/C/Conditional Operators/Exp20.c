// Conditional Operators
// Write a C program to find maximum between three numbers using conditional operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int p,q,r,max;
    
    printf("\n Enter values for p,q and r: ");
    scanf("%d %d %d",&p,&q,&r);
    
    max = (p>q) ? (p>r)?p:r : (q>r)?r:p ;
    printf("\n Greatest of the three is: %d",max);
    
    return 0;
}