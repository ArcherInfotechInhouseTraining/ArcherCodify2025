// Write a C program to enter length in centimeter and convert it into meter and kilometer.
// for --> 1 meter = 100 centimeter
// for --> 1 meter = 1000 km

#include<stdio.h>
#include<conio.h>

int main()
{
    float len;
    double meter,kmeter;
    
    printf("\n Enter length in centimeter: ");
    scanf("%f",&len);
    
    meter=len/100;
    printf("\n centimeter into meter is: %lf",meter);
    
    kmeter=len/1000;
    printf("\n meter into kilometer is: %lf",kmeter);
    
    return 0;
}