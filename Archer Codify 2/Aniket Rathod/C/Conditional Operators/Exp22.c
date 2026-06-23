// Conditional Operators
// Write a C program to check whether year is leap year or not using conditional operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int yr,leap;
    
    printf("\n Enter a year: ");
    scanf("%d",&yr);
    
    leap = (yr%4==0) ? printf("\n It's a leap year %d",yr) : printf("\n It's not a leap year %d",yr);
    
    return 0;
}