// if-else
//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
#include <conio.h>

int main()
{
    char val;
    
    printf("\n Enter a Value: ");
    scanf("%c",&val);
    
    if(val>'a' && val<'z')
    {
        printf("\n Value is Character");
    }
    
    else if(val>'0' && val<'9')
    {
        printf("\n Value is integer");
    }
    
    else
    {
        printf("\n value is Special Character");
    }
    
    
    return 0;
}