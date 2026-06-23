//Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include<stdio.h>
void main()
{
    float length,Width,Perimeter;

    printf("Enter Length of Rectangle\n");
    scanf("%f",&length);

     printf("Enter Width of Rectangle\n");
    scanf("%f",&Width);

    Perimeter=(length + Width)*2;

    printf("Perimeter of Rectangle is :%f",Perimeter);
}
