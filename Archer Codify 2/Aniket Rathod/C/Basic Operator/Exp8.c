//Write a C program to enter temperature in Celsius and convert it into Fahrenheit
//  (0°C × 9/5) + 32 = 32°F


#include<stdio.h>
#include<conio.h>

int main()
{
    double cel,f=32,fah;
    
    printf("\n Enter temperature in Celsius: ");
    scanf("%lf",&cel);
    
    fah=f+(cel * 9/5);
    printf("\n Celsius into Fahrenheit is: %lf",fah);
    
    return 0;
}