//Write a C program to print all natural numbers from 1 to n.
//Write a C program to find the sum of all natural numbers between 1 to n.


#include<stdio.h>
void  main()
{
    int i,n,sum=0;

    printf("Enter How many Natural Numbers You want\n");
    scanf("%d",&n);
     printf("Natural Numbers Are :");
    for(i=1;i<=n;i++)
    {
        sum=sum+i;


    }
       printf("%d\n",sum);
}
