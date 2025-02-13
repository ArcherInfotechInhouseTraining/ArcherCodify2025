// (Execution Not Done)
// Write a C program to find all roots of a quadratic equation.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    int tot=0;
    
    printf("\n Enter values for a b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    
    tot=(-b+-b^2-4*a*c)/2*a;
    printf("\n Roots of a quadratic equation is: %d",tot);
    
    return 0;
    
}