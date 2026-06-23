// Conditional Operators
// Write a C program to check whether character is an alphabet or not using a conditional operator.

#include<stdio.h>
#include<conio.h>

int main()
{

    char ab;
    
    printf("\n Enter a Value: ");
    scanf("%c",&ab);
    
    (ab>='a' && ab<='z') ? printf("\n Value is alphabet ") : printf("\n Value is not alphabet");
    
    return 0;
}