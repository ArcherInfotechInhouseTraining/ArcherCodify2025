//  Write a C program to calculate area of an equilateral triangle.

#include<stdio.h>
#include<conio.h>

int main()
{
    float a,area;
    
    printf("\n Enter base and hight of a trinagle: ");
    scanf("%f",&a);
    
    area = ((0.75) * (a*a));
    printf("\n Area of a equilateral trinagle is: %f",area);
    
    return 0;
}