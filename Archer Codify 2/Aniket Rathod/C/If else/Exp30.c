// if-else
//  Write a C program to check whether a character is an alphabet or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    char alpha;
    
    printf("\n Enter a character: ");
    scanf("%c",&alpha);
    
    if(alpha>='a' && alpha<='z')
    {
        printf("\n It's an alphabet");
    }
         
    else
    {
        printf("\n It's not an alphabet");
    }
    
    return 0;
}