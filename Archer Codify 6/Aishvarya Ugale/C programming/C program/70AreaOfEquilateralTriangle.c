//Write a C program to calculate area of an equilateral triangle.

#include<stdio.h>
void main()
{

    int side,Area;

    printf("Enter side of triangle :\n");
    scanf("%d",&side);


    Area=0.43 *side*side;// formula = (squareroot of 3/4 )*(side*side)

    printf("Area Of Equilateral Triangle is :%d",Area);
}
