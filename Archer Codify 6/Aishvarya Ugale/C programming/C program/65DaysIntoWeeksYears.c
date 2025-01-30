//Write a C program to convert days into years, weeks and days.

#include<stdio.h>
void main()
{

   int day,weeks,years;

    printf("Enter Days :\n");
    scanf("%d",&day);
    years=day/365;
    day=day%365;
    weeks=day/7;
    day=day%7;


    printf("Years is:%d\n",years);

     printf("Weeks is:%d\n",weeks);

     printf("Days is:%d\n",day);
}
