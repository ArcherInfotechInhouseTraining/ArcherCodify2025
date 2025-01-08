//Write a C program to check whether year is leap year or not using conditional
//operator.

#include<stdio.h>

void main()
{
    int year;

    printf("Enter year\n");
    scanf("%d",&year);


    (year%4==0)? (year%100==0)? (year%400==0)? printf("Leap\n"):printf("Not Leap\n"):printf("Leap\n"):printf("Not Leap");

   /* if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("its a Leap Year\n");
            }
            else{
                printf("Its not a leap year\n");
            }
        }
        else{
            printf("Its a leap year\n");
        }
    }
    else{
        printf("Its not a leap year");
    }

    */
}
