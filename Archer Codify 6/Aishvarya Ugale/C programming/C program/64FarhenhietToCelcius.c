//Write a C program to enter temperature in Fahrenheit and convert to Celsius


#include<stdio.h>
void main()

{

    float celsius,fahrenheit;

    printf("Enter fahrenheit :\n");
    scanf("%f",&fahrenheit);

    celsius=(fahrenheit - 32) * (5.0/9.0);

    printf("celsius:%f",celsius);
}
