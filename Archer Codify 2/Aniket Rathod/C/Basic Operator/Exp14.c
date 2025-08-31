// Write a C program to enter base and height of a triangle and find its area.

#include<stdio.h>
#include<conio.h>

int main()
{
    float base,height,area;
    
    printf("\n Enter base and hight of a trinagle: ");
    scanf("%f %f",&base,&height);
    
    area = (base * height) / 2;
    printf("\n Area of a trinagle is: %f",area);
    
    return 0;
}