// if-else
// Write a C program to find the maximum between two numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    
    printf("\n Enter values for a & b: ");
    scanf("%d %d",&a,&b);
    
    if(a<b)
    {
        printf("\n B is Greater than A");
    }
    else
    {
        printf("\n A is Greater than B");
    }
    
    return 0;
}