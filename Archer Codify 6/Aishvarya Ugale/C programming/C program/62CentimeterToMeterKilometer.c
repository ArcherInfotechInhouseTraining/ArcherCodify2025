//Write a C program to enter length in centimeter and convert it into meter and
//kilometer.

#include<stdio.h>

void main()
{

    float Length ,meter,kilometer;

    printf("Enter Length in  centimeter :\n");
    scanf("%f",&Length);

    meter=Length/100;

    kilometer=Length/100000;

    printf("Meter : %f\n",meter);
    printf("Kilometer :%f\n",kilometer);
}
