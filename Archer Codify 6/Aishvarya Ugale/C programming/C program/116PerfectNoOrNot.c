//Write a C program to check whether a number is Perfect number or not.

#include<stdio.h>
void main()
{

    int no,i,sum=0;

    printf("Enter Number\n");
    scanf("%d",&no);

    for(i=1;i<no;i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum == no)
    {
        printf("Number is a Perfect Number !!!!\n");

    }
    else
    {
        printf("Number is not a Perfect Number !!!!\n");
    }

}
