// if-else
//  Write a C program to input any alphabet and check whether it is a vowel or consonant.

#include<stdio.h>
#include<conio.h>

int main()
{
    char alpha;
    
    printf("\n Enter a character: ");
    scanf("%c",&alpha);
    
    
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    {
        printf("\n it's an alphabet aslo vowel");
    }
        
    else
    {
        printf("\n It's an alphabet and its consonant");
    }
    
    return 0;
}