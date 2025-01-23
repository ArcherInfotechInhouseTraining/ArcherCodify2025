//Write a C program to enter P, T, R and calculate Compound Interest

#include<stdio.h>

void main()
{

    int p,t,r,n ,ci;

    printf("Enter P T R n:\n");

    scanf("%d%d%d%d",&p,&t,&r,&n);

    ci=p*(1+r/n)*n*t;

    printf("Ans :%d",ci);

}
