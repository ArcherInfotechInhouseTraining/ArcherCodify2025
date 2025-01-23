//Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
void main()

{
    float Length,Width,Area;

    printf("Enter length of a Rectangle :");
    scanf("%f",&Length);

     printf("Enter Width of a Rectangle :");
    scanf("%f",&Width);


    Area=Length*Width;

    printf("Area of a rectangle is:%f\n",Area);

}
