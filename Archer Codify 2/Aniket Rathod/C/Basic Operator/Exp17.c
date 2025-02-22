// Write a C program to enter P, T, R and calculate Simple Interest.
// P = Principal amount R = Interest rate T = Number of time periods 
// formula : interest = p * T * r

#include<stdio.h>
#include<conio.h>

int main()
{
    float p,t,r,interest;
    
    printf("\n Enter values for P, R & T: ");
    scanf("%f %f %f",&p,&t,&r);
    
    interest = p * t * r;
    printf("\n interest for the given values is: %f",interest);
    
    return 0;
}