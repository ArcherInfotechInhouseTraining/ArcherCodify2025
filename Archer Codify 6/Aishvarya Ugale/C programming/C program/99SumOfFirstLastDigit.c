//Write a C program to find sum of first and last digit of a number.

#include<stdio.h>
void main()
{
    int no,first,last,d;
    printf("Enter Digit :\n");
    scanf("%d",&no);

    last=no%10;

    for( ;no!=0; )
    {

         d=no;
         no=no/10;
        if(no==0)
        {
           printf (" Sum of First and Last No is: %d\n",(d+last));
        }

    }



}
