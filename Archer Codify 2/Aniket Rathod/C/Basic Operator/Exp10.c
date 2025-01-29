// Write a C program to convert days into years, weeks and days


#include<stdio.h>
#include<conio.h>

int main()
{
    int date,year,week,day=1;
    
    printf("\n Enter days in no: ");
    scanf("%d",&date);
    
    year=date/365;
    week=date/ 7;
    day=date%7;
    
    printf("\n The conversion of given input of days %d into Years %d and %d Week & %d day",date,year,week,day);
    
    return 0;
}