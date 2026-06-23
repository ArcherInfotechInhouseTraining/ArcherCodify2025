// if-else
// Write a C program to find maximum between three numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int w,x,y;
    
    printf("\n Enter values for w, x & y: ");
    scanf("%d %d %d",&w,&x,&y);
    
    if(w>x)
    {
        if(w>y)
        {
            printf("\n W is Greater than X & Y");
        }
    }
    
    if(x>w)
    {
        if(x>y)
        {
            printf("\n X is Greater than W & Y");
        }
    }
    
    else
    {
        printf("\n Y is Greater than W & X");
    }
    
    return 0;
}