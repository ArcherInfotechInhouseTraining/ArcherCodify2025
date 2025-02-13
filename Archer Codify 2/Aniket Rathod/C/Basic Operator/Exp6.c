// Write a C program to enter radius of a circle and find its diameter, circumference and area.
// exp : redius = 5
// diameter = Diameter = 2 × Radius
// circumference is = 2*π(3.14)*r
// area = π(3.14)*r*r

#include<stdio.h>
#include<conio.h>

int main()
{
    float radius,dimeter,circumference,area,pi=3.14;
    
    printf("\n Enter a value of redius: ");
    scanf("%f",&radius);
    
    dimeter=2*radius;
    printf("\n Dimeter is: %f",dimeter);
    
    circumference=2*pi*radius;
    printf("\n Circunference is: %f",circumference);
    
    area=pi*radius*radius;
    printf("\n Area is: %f",area);
    
    return 0;
}