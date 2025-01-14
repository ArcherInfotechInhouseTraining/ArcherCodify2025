//Write a C program to enter temperature in Celsius and convert it into Fahrenheit. 9


#include<stdio.h>
void main()

{

    float celsius,fahrenheit;

    printf("Enter Celisus :\n");
    scanf("%f",&celsius);

    fahrenheit=(celsius * 9/5)+32;

    printf("fahrenheit:%f",fahrenheit);
}
