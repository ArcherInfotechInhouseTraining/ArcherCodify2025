//Write a C program to input week number and print week day

#include<stdio.h>

void main()
{
    int no;

    printf("Enter no:\n");
    scanf("%d",&no);

    if(no==1)
    {
        printf("Monday\n");
    }
    else if(no==2)
    {
         printf("Tuesday\n");
    }
     else if(no==3)
    {
         printf("Wednesday\n");
    }
     else if(no==4)
    {
         printf("Thursday\n");
    }
     else if(no==5)
    {
         printf("Friday\n");
    }
    else if(no==6)
    {
        printf("Saturday\n");
    }
    else if(no==7)
    {
        printf("Sunday\n");
    }
    else{
            printf("Incorrect!!!");

    }
}
