//Write a C program to enter two angles of a triangle and find the third angle.

#include<stdio.h>
void main()
{

    int angle1,angle2,angle3;
    printf("Enter 1st Angle:\n");
    scanf("%d",&angle1);

     printf("Enter 2nd Angle:\n");
    scanf("%d",&angle2);

    angle3=180-(angle1+angle2);

    printf("third angle is :%d",angle3);

}
