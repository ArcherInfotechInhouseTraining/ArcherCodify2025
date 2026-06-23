// if-else
// Write a C program to check whether a number is divisible by 5 and 11 or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
    printf("\n Enter a Number: ");
    scanf("%d",&num);
    
    if(num%5==0)
    {
         if(num%11==0)
        {
            printf("\n Number is divisible by 5 & 11");
        }
        
        else
        {
            printf("\n Number is divisible by 5");
        }
        
    }
    
    else if(num%11==0)
    {
        printf("\n Number is divisible by 11");
    }
    
    else
    {
        printf("\n Number is not divisible by any of them");
    }
    
    return 0;
}