//Write a C program to enter temperature in Fahrenheit and convert to Celsius
//  0°C =(32°F − 32) × 5/9 


#include<stdio.h>
#include<conio.h>

int main()
{
    double cel=0,fah;
    
    printf("\n Enter temperature in Fahrenheit: ");
    scanf("%lf",&fah);
    
    cel= (fah - 32) * 5/9;
    printf("\n Fahrenheit into Celsius is: %lf",cel);
    
    return 0;
}