//Write a C program to find sum of all odd numbers between 1 to n.


#include<stdio.h>
void main()
{
    int i,sum=0;

    printf("Sum of ODD Numbers 1 to 100 is :\n");

    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
