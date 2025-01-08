//Write a C program to print Fibonacci series up to n terms.
#include<stdio.h>
void main()
{

    int no,i,t1=0,t2=1,nextterm;

    printf("Enter Number\n");
    scanf("%d",&no);
    printf("Fibonacci series\n");
    for(i=0;i<=no;i++)
    {
        printf("%5d",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;


    }
}
