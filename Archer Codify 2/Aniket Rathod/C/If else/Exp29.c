// if-else
//  Write a C program to check whether a year is a leap year or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    
    printf("\n Enter a Year: ");
    scanf("%d",&year);
    
    if(year%4==0)
    {
        printf("\n It is a Leap Year");
    }
         
    else
    {
        printf("\n It is not a Leap Year");
    }
    
    return 0;
}