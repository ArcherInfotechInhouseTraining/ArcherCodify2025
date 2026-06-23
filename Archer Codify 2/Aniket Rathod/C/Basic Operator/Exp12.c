// Write a C program to enter any number and calculate its square root.

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,sqroot;
    
    printf("\n Enter value for y: ");
    scanf("%d",&y);
    
    for(x=2;x<=y;x++)
    {
        
        if(x*x==y)
        {
            sqroot=x;
            
           
           printf("\n SquareRoot of the number is: %d",sqroot);
           break;
        }
    }
    
    return 0;
}