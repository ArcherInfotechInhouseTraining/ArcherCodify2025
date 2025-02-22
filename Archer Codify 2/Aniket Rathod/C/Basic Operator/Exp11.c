// Write a C program to find power of any number x ^ y.

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,power=1;
    
    printf("\n Enter value for x and y: ");
    scanf("%d %d",&x,&y);
    
    for(;y>0;y--)
    {
        power=power*x;
    }
    printf("\n Power of given no is: %d",power);
    
    return 0;
}