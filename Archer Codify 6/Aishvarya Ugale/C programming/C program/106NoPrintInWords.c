//Write a C program to enter a number and print it in words


#include<stdio.h>

void main()
{
    int no,rem,rev=0;

    printf("Enter  Number\n");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;
    }

    for(;rev!=0;rev=rev/10)
    {
        rem=rev%10;

        if(rem==0)
        {
            printf("Zero ");
        }
        else if (rem==1)
        {
            printf("One ");
        }
        else if (rem==2)
        {
            printf("Two ");
        }
        else if (rem==3)
        {
            printf("Three ");
        }
        else if (rem==4)
        {
            printf("Four ");
        }
        else if (rem==5)
        {
            printf("Five ");
        }
        else if (rem==6)
        {
            printf("Six ");
        }
        else if (rem==7)
        {
            printf("Seven ");
        }
        else if (rem==8)
        {
            printf("Eight ");
        }
        else if (rem==9)
        {
            printf("Nine ");
        }
    }
}
