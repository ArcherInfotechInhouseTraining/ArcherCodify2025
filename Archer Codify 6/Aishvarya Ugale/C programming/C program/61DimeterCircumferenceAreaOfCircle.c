//Write a C program to enter radius of a circle and find its diameter, circumference
//and area


#include<stdio.h>
void main()
{
    float radius,Diameter,circumference,Area;

    printf("Enter Radius of a circle :\n");
    scanf("%f",&radius);

    Diameter=2*radius;


    circumference=(2*(3.14))*radius;


    Area=(3.14)*radius*radius;

    printf("Diameter of a circle is: %f\n",Diameter);


    printf("Circumference of a circle is: %f\n",circumference);

    printf("Area of a circle is: %f\n",Area);


}
