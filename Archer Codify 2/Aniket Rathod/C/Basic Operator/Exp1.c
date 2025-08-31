// Write a C program to perform input/output of all basic data types.

#include<stdio.h>
#include<conio.h>

int main()
{
    int p;
    float q;
    char r;
    double s;
    
    printf("\n Enter all the types of datatypes: ");
    scanf("%d %f %c %lf",&p,&q,&r,&s);
    
    printf("\n User entered datatypes are given below: %d /t%f /t%c /t%lf",p,q,r,s);
    
    return 0;
}