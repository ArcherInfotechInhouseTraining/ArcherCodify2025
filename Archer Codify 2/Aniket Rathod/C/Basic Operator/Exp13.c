// Write a C program to enter two angles of a triangle and find the third angle.

#include<stdio.h>
#include<conio.h>

int main()
{
    float ang1,ang2,ang3;
    
    printf("\n Enter values for 1st angle and 2nd angle: ");
    scanf("%f %f",&ang1,&ang2);
    
    ang3= 180 - (ang1 + ang2);
    
    printf("\n Third angle : %f",ang3);
    
    return 0;
}