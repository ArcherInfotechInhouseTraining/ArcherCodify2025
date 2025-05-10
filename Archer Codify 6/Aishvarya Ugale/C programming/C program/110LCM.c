//Write a C program to find LCM of two numbers

#include<stdio.h>

void main()
{
    int no1,no2,i;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&no1,&no2);

    for(i=(no1>no2?no1:no2) ; i>=1 ;i--)
    {
        if(i%no1==0 && i%no2==0)
        {
            printf("LCM is :%d",i);
            break;
        }
    }
}

