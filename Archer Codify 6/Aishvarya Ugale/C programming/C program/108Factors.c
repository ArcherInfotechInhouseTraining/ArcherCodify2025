//Write a C program to find all factors of a number.

#include<stdio.h>
void main()
{
    int no,fact,i;

    printf("Enter Number\n");
    scanf("%d",&no);
    printf("Factors is :\n");
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            printf("%d\n",i);
        }
    }
}
