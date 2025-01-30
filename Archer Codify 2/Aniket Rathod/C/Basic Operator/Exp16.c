// Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include<stdio.h>
#include<conio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5,n=500;
    float total,avg,perc;
    
    printf("\n Enter marks out of 100 for Marathi: ");
    scanf("%d",&sub1);
    printf("\n Enter marks out of 100 for Math: ");
    scanf("%d",&sub2);
    printf("\n Enter marks out of 100 for Science: ");
    scanf("%d",&sub3);
    printf("\n Enter marks out of 100 for English: ");
    scanf("%d",&sub4);
    printf("\n Enter marks out of 100 for Hindi: ");
    scanf("%d",&sub5);
    
    total = (sub1+sub2+sub3+sub4+sub5);
    printf("\n Total of the given subjects is: %f",total);
    
    avg = (total/5);
    printf("\n Average of given subjects is: %f",avg);
    
    perc = (total/n) * 100;
    printf("\n Percentage of the given subjects is: %f",perc);
    
    return 0;
}