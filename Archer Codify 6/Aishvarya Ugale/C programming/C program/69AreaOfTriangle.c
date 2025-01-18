//Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
void main()
{
    float base,height,Area;

    printf("Enter Base of Triangle:\n");
    scanf("%f",&base);

    printf("Enter height of Triangle:\n");
    scanf("%f",&height);

    Area=(1.0/2.0)*(base*height);

    printf("Area :%f",Area);


}
