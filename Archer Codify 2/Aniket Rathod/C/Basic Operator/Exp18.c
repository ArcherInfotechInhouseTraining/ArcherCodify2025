// Write a C program to enter P, T, R and calculate Compound Interest.
// Formula for CI is -->    A = P(1 + R/100) * T        CI = A – P

#include<stdio.h>
#include<conio.h>

int main()
{
    int p,t,r;
    float a,ci;
    
    printf("\n Enter values for P,T & R: ");
    scanf("%d %d %d",&p,&t,&r);
    
    a = p * (1 + r/100)* t ;
    ci = a-p;
    printf("\n Compound Interest is: %f",ci);
    
    return 0;
}