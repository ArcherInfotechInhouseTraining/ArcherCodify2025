// if-else
//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
#include <conio.h>

int main()
{
    char val;
    
    printf("\n Enter a Value: ");
    scanf("%c",&val);
    
    if(val>'a' && val<'z')
    {
        printf("\n Value is in Lowercase");
    }
    
    else if(val>'A' && val<'Z')
    {
        printf("\n Value is in Uppercase");
    }
    
    else
    {
        printf("\n Invalid Input");
    }
    
    
    return 0;
}