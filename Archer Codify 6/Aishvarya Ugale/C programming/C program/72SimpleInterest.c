//Write a C program to enter P, T, R and calculate Simple Interest.


#include<stdio.h>

void main()
{
    int p,t,r,si;

    printf("Enter p,r,t:\n");
    scanf("%d%d%d",&p,&t,&r);

    si=p*t*r;

    printf("Simple Interest :%d",si);
}
