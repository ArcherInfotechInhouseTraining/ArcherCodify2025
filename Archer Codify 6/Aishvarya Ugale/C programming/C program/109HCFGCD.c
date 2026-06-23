//Write a C program to find HCF (GCD) of two numbers.

//Donhi Number ch Highest Common Factor

#include<stdio.h>

void main()
{
    int no1,no2,i;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&no1,&no2);

    for(i=(no1>no2?no1:no2) ; i>=1 ;i--)
    {
        if(no1%i==0 && no2%i==0)
        {
            printf("Hcf (GCD) is :%d",i);
            break;
        }
    }
}
