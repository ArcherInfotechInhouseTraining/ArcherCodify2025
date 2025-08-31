//Write a C program to print all natural numbers in reverse (from n to 1).


#include<stdio.h>
void  main()
{
    int i,n;

    printf("Enter How many Natural Numbers You want\n");
    scanf("%d",&n);
     printf("Natural Numbers Are :\n");
    for(i=n;i>=1;i--)
    {
       printf("%d\n",i);

    }

}
